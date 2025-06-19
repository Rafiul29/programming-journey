#include <bits/stdc++.h>
using namespace std;

// Function to decrypt the message using Columnar Transposition Cipher
string decryptColumnar(string& ciphertext, string& key) {
    int numColumns = key.size();
    int numRows = ceil(ciphertext.size() / (float)numColumns);

    // Determine the column order based on the key
    vector<pair<char, int>> keyOrder;
    for (int i = 0; i < numColumns; ++i) {
        keyOrder.push_back({key[i], i});
    }
    sort(keyOrder.begin(), keyOrder.end());

    // Fill the matrix with ciphertext characters
    vector<string> matrix(numRows, string(numColumns, ' '));
    int index = 0;
    for(pair<char, int> p : keyOrder) {
        int col = p.second;
        for(int i = 0; i < numRows; i++) {
            if(index < ciphertext.size() && i * numColumns + col < ciphertext.size())
                matrix[i][col] = ciphertext[index++];
        }
    }

    // Reconstruct the plaintext row by row
    string plaintext = "";
    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j < numColumns; j++) {
            if(matrix[i][j] != ' ')
                plaintext += matrix[i][j];
        }
    }

    return plaintext;
}

// Function to encrypt the message using Columnar Transposition Cipher
string encryptColumnar(string& message, string& key) {
    // Prepare the message (remove white space && convert into uppercase)
    string processedMessage = "";
    for(int i = 0; i < message.size(); i++) {
        if (message[i] == ' ')
            continue;

        processedMessage.push_back(toupper(message[i]));
    }

    int numColumns = key.size();
    int numRows = ceil(processedMessage.size() / (float)numColumns);

    // Create a 2D grid (matrix) for the message
    vector<vector<char>> grid(numRows, vector<char>(numColumns, ' '));

    // Fill the grid with the message
    int index = 0;
    for(int i = 0; i < numRows; i++) {
        for(int j = 0; j < numColumns; j++) {
            if(index < processedMessage.size()) {
                grid[i][j] = processedMessage[index++];
            }
        }
    }

    // Create an order for the columns based on the key
    vector<pair<char, int>> keyOrder;
    for(int i = 0; i < numColumns; i++) {
        keyOrder.push_back({key[i], i});
    }
    sort(keyOrder.begin(), keyOrder.end());

    // Read the grid column by column in the order determined by the key
    string ciphertext = "";
    for(pair<char, int> p : keyOrder) {
        int col = p.second;
        for(int i = 0; i < numRows; ++i) {
            if(grid[i][col] != ' ') {
                ciphertext += grid[i][col];
            }
        }
    }
    return ciphertext;
}

int main() {
    string message, key = "ADECBF";

    // Input: Message and Key
    cout << "Enter the message: ";
    getline(cin, message); // Allow spaces for input

    // Encryption
    string ciphertext = encryptColumnar(message, key);
    cout << "Encrypted Message: " << ciphertext << endl;

    // Decryption
    string decryptedMessage = decryptColumnar(ciphertext, key);
    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}

