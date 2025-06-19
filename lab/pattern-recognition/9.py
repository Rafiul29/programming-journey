import os

class ADALINE:
    def __init__(self, learning_rate=0.01, tolerance=0.0001, max_iterations=100):
        self.learning_rate = learning_rate
        self.tolerance = tolerance
        self.max_iterations = max_iterations
        self.weights = None
        self.bias = None

    def fit(self, X, y):
        self.weights = [0.0] * len(X[0])
        self.bias = 0.0
        for iteration in range(self.max_iterations):
            total_error = 0
            for i in range(len(X)):
                y_in = self.net_input(X[i])
                error = y[i] - y_in
                total_error += error ** 2

                # Update weights and bias
                self.weights = [
                    w + self.learning_rate * error * X[i][j]
                    for j, w in enumerate(self.weights)
                ]
                self.bias += self.learning_rate * error

            # Print weights and bias for debugging
            if iteration % 10 == 0:  # Print every 10 iterations
                print(f"Iteration {iteration}: Weights: {self.weights}, Bias: {self.bias}, Total Error: {total_error}")

            if total_error < self.tolerance:
                print(f"Converged after {iteration} iterations.")
                break

    def net_input(self, X):
        return sum(w * x for w, x in zip(self.weights, X)) + self.bias

    def predict(self, X):
        y_in = self.net_input(X)
        return 1 if y_in >= 0 else -1

    def predict_batch(self, X):
        return [self.predict(x) for x in X]

    def save_model(self, filename):
        with open(filename, 'w') as f:
            f.write(','.join(map(str, self.weights)) + '\n')
            f.write(str(self.bias) + '\n')
        print(f"Model saved to {filename}.")

    def load_model(self, filename):
        with open(filename, 'r') as f:
            self.weights = list(map(float, f.readline().strip().split(',')))
            self.bias = float(f.readline().strip())
        print(f"Model loaded from {filename}.")

def load_dataset(base_dir):
    X = []
    y = []
    class_labels = {
        "AKAL": 1,   # Class 'AKAL' will be labeled as +1
        "AMAR": -1   # Class 'AMAR' will be labeled as -1
    }

    for class_folder, label in class_labels.items():
        folder_path = os.path.join(base_dir, class_folder)
        if not os.path.exists(folder_path):
            print(f"Class folder {folder_path} not found.")
            continue
        for filename in os.listdir(folder_path):
            if filename.endswith(".MFC"):
                file_path = os.path.join(folder_path, filename)
                with open(file_path, 'r') as file:
                    for line in file:
                        features = list(map(float, line.strip().split()))
                        if features:
                            X.append(features)
                            y.append(label)

    if len(X) == 0:
        print("No data loaded. Please check the dataset structure and ensure .MFC files contain valid data.")
    else:
        print(f"Loaded dataset with {len(X)} samples.")
    return X, y

def normalize(X):
    X_min = [min(feature) for feature in zip(*X)]
    X_max = [max(feature) for feature in zip(*X)]
    return [[(x - X_min[j]) / (X_max[j] - X_min[j]) for j, x in enumerate(sample)] for sample in X]

def train_test_split(X, y, train_size=0.8):
    split_index = int(len(X) * train_size)
    return X[:split_index], y[:split_index], X[split_index:], y[split_index:]

if __name__ == "__main__":
    base_dir = "lab_dataset_net"  # Change this to the correct path of your dataset
    X, y = load_dataset(base_dir)

    # Normalize the features
    X = normalize(X)

    X_train, y_train, X_test, y_test = train_test_split(X, y)
    print(f"Loaded dataset with {len(X)} samples.")
    print(f"Dataset split into {len(X_train)} training samples and {len(X_test)} testing samples.")

    adaline = ADALINE(learning_rate=0.01, tolerance=0.0001, max_iterations=100)
    adaline.fit(X_train, y_train)
    adaline.save_model("adaline_model.txt")

    y_pred = adaline.predict_batch(X_test)
    print("Test Predictions:", y_pred)
    print("Actual Test Labels:", y_test)

    accuracy = sum(1 for p, t in zip(y_pred, y_test) if p == t) / len(y_test)
    print(f"Accuracy: {accuracy * 100:.2f}%")
