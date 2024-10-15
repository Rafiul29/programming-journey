# Function to take input for points
def input_points(prompt):
    points = []
    n = int(input(f"Enter the number of {prompt}: "))
    for _ in range(n):
        point = input(f"Enter {prompt} as x,y (e.g., 3,4): ").split(',')
        points.append([float(point[0]), float(point[1])])
    return points

# Function to calculate the centroid of a cluster
def calculate_centroid(cluster):
    x_sum, y_sum = 0, 0
    for point in cluster:
        x_sum += point[0]
        y_sum += point[1]
    return [x_sum / len(cluster), y_sum / len(cluster)]

# Function to calculate squared error for a cluster
def calculate_squared_error(cluster):
    centroid = calculate_centroid(cluster)
    squared_error = 0
    for point in cluster:
        squared_error += (point[0] - centroid[0]) ** 2 + (point[1] - centroid[1]) ** 2
    return squared_error

# Function to compute the total squared error for the current set of clusters
def total_squared_error(clusters):
    total_error = 0
    for cluster in clusters:
        total_error += calculate_squared_error(cluster)
    return total_error

# Function to find the best pair of clusters to merge (minimize total squared error)
def find_best_merge(clusters):
    min_total_error = float('inf')
    best_pair = None
    for i in range(len(clusters)):
        for j in range(i + 1, len(clusters)):
            # Merge clusters i and j and compute total squared error
            merged_cluster = clusters[i] + clusters[j]
            temp_clusters = clusters[:i] + clusters[i + 1:j] + clusters[j + 1:] + [merged_cluster]
            current_total_error = total_squared_error(temp_clusters)

            # Keep track of the pair with the smallest total error
            if current_total_error < min_total_error:
                min_total_error = current_total_error
                best_pair = (i, j)
    return best_pair, min_total_error

# Perform hierarchical clustering using the squared error method
def hierarchical_clustering(data):
    clusters = [[point] for point in data]  # Start with each point as its own cluster
    steps = 0
    original_indices = list(range(1, len(clusters) + 1))  # Track original indices of the clusters

    while len(clusters) > 1:
        # Find the best pair of clusters to merge (minimizing total squared error)
        (i, j), min_error = find_best_merge(clusters)

        # Merge the two clusters
        merged_cluster = clusters[i] + clusters[j]

        # Remove the cluster with the higher index first to avoid index shifting
        if i < j:
            del clusters[j]
            clusters[i] = merged_cluster
            merged_indices = (original_indices[i], original_indices[j])
            del original_indices[j]
        else:
            del clusters[i]
            clusters[j] = merged_cluster
            merged_indices = (original_indices[j], original_indices[i])
            del original_indices[i]

        # Print each step of the clustering
        steps += 1
        print(f"Step {steps}: Merged clusters {merged_indices[0]} and {merged_indices[1]}, "
              f"Total Squared Error: {min_error:.2f}")
        print(f"Clusters: {clusters}")

    return clusters

# Run the hierarchical clustering algorithm with user input data
data = input_points("data points")
print(f"Data Points: {data}")

# Perform clustering
final_clusters = hierarchical_clustering(data)
