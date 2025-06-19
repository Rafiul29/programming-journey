#include <bits/stdc++.h>
using namespace std;

// Function to find the modular multiplicative inverse
int modInverse(int a, int m) {
    a = a % m;
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1; // Indicates no modular inverse exists
}


// Function to compute the determinant of a matrix (size 2x2 or 3x3)
int determinant(vector<vector<int>>& matrix, int n) {
    int det;
    if(n == 2)
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    else if(n == 3)
        det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
                matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
                matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

    return ((det % 26) + 26) % 26;
}

// Function to compute the inverse of a matrix (size 2x2 or 3x3)
vector<vector<int>> inverseMatrix(vector<vector<int>>& matrix, int n) {
    vector<vector<int>> adj(n, vector<int>(n, 0));
    vector<vector<int>> inverse(n, vector<int>(n, 0));
    int det = determinant(matrix, n);
    int detInverse = modInverse(det, 26);

    if(n == 2) {
        adj[0][0] = matrix[1][1];
        adj[0][1] = -matrix[0][1];
        adj[1][0] = -matrix[1][0];
        adj[1][1] = matrix[0][0];
    } else if(n == 3) {
        adj[0][0] = (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
        adj[0][1] = -(matrix[0][1] * matrix[2][2] - matrix[0][2] * matrix[2][1]);
        adj[0][2] = (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]);

        adj[1][0] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
        adj[1][1] = (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]);
        adj[1][2] = -(matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0]);

        adj[2][0] = (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
        adj[2][1] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]);
        adj[2][2] = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            inverse[i][j] = (adj[i][j] * detInverse) % 26;
            if(inverse[i][j] < 0)
                inverse[i][j] += 26;
        }
    }
    return inverse;
}

// Function to perform matrix multiplication
vector<int> multiplyMatrix(vector<int>& digraphMatrix, vector<vector<int>>& keyMatrix, int n) {
    vector<int> result(n, 0);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            result[i] += digraphMatrix[j] * keyMatrix[j][i];
        }
        result[i] %= 26; // Modulo 26 for alphabets
    }

    return result;
}

// Function to convert a string to matrix of integers
vector<int> stringToMatrix(string& digraph, int n) {
    vector<int> result(n, 0);
    for(int i = 0; i < digraph.size(); i++) {
        result[i] = digraph[i] - 'A';
    }
    return result;
}

// Function to convert matrix of integers to a string
string matrixToString(vector<int>& vec) {
    string result = "";
    for(int num : vec) {
        result += (num + 'A');
    }
    return result;
}

// Function to encrypt a message
string hillEncrypt(string& message, vector<vector<int>>& keyMatrix, int n) {
    string ciphertext = "";
    string processedMessage = "";

    // Prepare the message (remove white space)
    for(int i = 0; i < message.size(); i++) {
        if(message[i] == ' ')
            continue;

        processedMessage.push_back(toupper(message[i]));
    }

    // Padding to make length divisible by n
    while(processedMessage.size() % n != 0) {
        processedMessage += 'Z';
    }

    // Encrypt each digraph
    for(int i = 0; i < processedMessage.length(); i += n) {
        string digraph = processedMessage.substr(i, n);
        vector<int> digraphMatrix = stringToMatrix(digraph, n);
        vector<int> cipherMatrix = multiplyMatrix(digraphMatrix, keyMatrix, n);
        ciphertext += matrixToString(cipherMatrix);
    }

    return ciphertext;
}

// Function to decrypt a message
string hillDecrypt(string& ciphertext, vector<vector<int>>& keyMatrix, int n) {
    string plaintext = "";
    vector<vector<int>> inverseKeyMatrix = inverseMatrix(keyMatrix, n);
    for(int i = 0; i < ciphertext.length(); i += n) {
        string s = ciphertext.substr(i, n);
        vector<int> cipherVector = stringToMatrix(s, n);
        vector<int> plainVector = multiplyMatrix(cipherVector, inverseKeyMatrix, n);
        plaintext += matrixToString(plainVector);
    }
    return plaintext;
}

// Main function
int main() {
    // Define the 2x2 key matrix
    vector<vector<int>> key2x2 = {{6, 11}, {1, 13}};

    // Define the 3x3 key matrix
    vector<vector<int>> key3x3 = {{17, 17, 5}, {21, 18, 21}, {2, 2, 19}};

    string message;
    cout << "Enter the message to encrypt: ";
    getline(cin, message);

    // Encrypt and decrypt with 2x2 matrix
    string ciphertext2x2 = hillEncrypt(message, key2x2, 2);
    cout << "Encryption and Decryption using 2x2 key matrix: " << endl;
    cout << "Ciphertext: " << ciphertext2x2 << endl;
    string decrypted2x2 = hillDecrypt(ciphertext2x2, key2x2, 2);
    cout << "Decrypted Text: " << decrypted2x2 << endl;

    // Encrypt and decrypt with 3x3 matrix
    string ciphertext3x3 = hillEncrypt(message, key3x3, 3);
    cout << "\nEncryption and Decryption using 3x3 key matrix: " << endl;
    cout << "Ciphertext: " << ciphertext3x3 << endl;
    string decrypted3x3 = hillDecrypt(ciphertext3x3, key3x3, 3);
    cout << "Decrypted Text: " << decrypted3x3 << endl;

    return 0;
}
