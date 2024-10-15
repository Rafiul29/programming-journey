import os
import math

# Function to read MFCC data from file (assuming MFCC values are stored as a list of floats in the files)
def read_mfcc_file(file_path):
    with open(file_path, 'r') as file:
        mfcc_data = [float(line.strip()) for line in file.readlines()]
    return mfcc_data

# Function to calculate Euclidean distance between two vectors
def euclidean_distance(vec1, vec2):
    return math.sqrt(sum((x - y) ** 2 for x, y in zip(vec1, vec2)))

# Function to calculate distances between a seed point and all other samples in a class
def calculate_distances(seed_point, class_samples):
    distances = []
    for sample in class_samples:
        distance = euclidean_distance(seed_point, sample)
        distances.append(distance)
    return distances

# Function to compute average error for a class
def calculate_average_error(distances):
    return sum(distances) / len(distances)

# Directory structure and sample collection
def collect_samples(dataset_path):
    classes = {}
    for class_name in os.listdir(dataset_path):
        class_path = os.path.join(dataset_path, class_name)
        if os.path.isdir(class_path):
            class_samples = []
            for file_name in os.listdir(class_path):
                file_path = os.path.join(class_path, file_name)
                class_samples.append(read_mfcc_file(file_path))
            classes[class_name] = class_samples
    return classes

# Main function to perform pattern recognition and generate the table output
def recognize_patterns(dataset_path):
    classes = collect_samples(dataset_path)

    results = []

    for class_name, class_samples in classes.items():
        # Select the first sample as the seed point for the class
        seed_point = class_samples[0]

        # Calculate distances within the same class (intra-class distances)
        intra_class_distances = calculate_distances(seed_point, class_samples[1:])  # Exclude seed point itself

        # Calculate the average error for the class (intra-class)
        intra_class_error = calculate_average_error(intra_class_distances)
        # Remove the .mfc extension using os.path.splitext()
        class_members = [
            os.path.splitext(os.path.basename(file))[0]
            for file in os.listdir(os.path.join(dataset_path, class_name))
        ]
        # Store the results for the table
        results.append({
            'Class': class_name,
            'Class Members': class_members,
            'Average Error': intra_class_error
        })

    # Print the results in the desired table format
    print(f"{'Classes':<10} {'Class Members':<50} {'Average Error'}")
    print("-" * 80)
    for result in results:
        class_members_str = ', '.join(result['Class Members'])
        print(f"{result['Class']:<10}: {class_members_str:<50} {result['Average Error']:.4f}")

# Example usage with the 'lab_dataset' path
dataset_path = 'lab_dataset'
recognize_patterns(dataset_path)
