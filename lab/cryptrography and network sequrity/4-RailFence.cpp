#include <bits/stdc++.h>
using namespace std;

// Function to decrypt the message using Rail Fence Cipher
string decryptRailFence(const string& ciphertext, int key) {
    // No decryption for key <= 1
    if(key <= 1)
        return ciphertext;

    vector<string> rail(key); // Create rows for the rail pattern
    vector<int> railLengths(key, 0);
    int direction = 1, row = 0;

    // Calculate the length of each rail
    for(int i = 0; i < ciphertext.size(); ++i) {
        railLengths[row]++;
        row += direction;
        if(row == 0 || row == key - 1)
            direction *= -1;
    }

    // Populate rails with characters from the ciphertext
    int index = 0;
    for(int i = 0; i < key; ++i) {
        rail[i] = ciphertext.substr(index, railLengths[i]);
        index += railLengths[i];
    }

    // Reconstruct the original message
    string plaintext = "";
    direction = 1;
    row = 0;
    vector<int> railIndices(key, 0);

    for(int i = 0; i < ciphertext.size(); i++) {
        plaintext += rail[row][railIndices[row]++];
        row += direction;
        if(row == 0 || row == key - 1)
            direction *= -1;
    }

    return plaintext;
}

// Function to encrypt the message using Rail Fence Cipher
string encryptRailFence(string& message, int key) {
    // No encryption for key <= 1
    if(key <= 1)
        return message;

    // Prepare the message (remove white space && convert into uppercase)
    string processedMessage = "";
    for(int i = 0; i < message.size(); i++) {
        if(message[i] == ' ')
            continue;

        processedMessage.push_back(toupper(message[i]));
    }

    vector<string> rail(key); // Create rows for the rail pattern
    int direction = 1;        // 1 for down, -1 for up
    int row = 0;

    // Distribute characters into rails
    for(char ch : processedMessage) {
        rail[row] += ch;
        row += direction;
        if(row == 0 || row == key - 1)
            direction *= -1; // Change direction
    }

    // Combine characters from all rails
    string ciphertext = "";
    for(string& r : rail) {
        ciphertext += r;
    }
    return ciphertext;
}

int main() {
    int key;
    string message;

    cout << "Enter the message: ";
    getline(cin, message);

    cout << "Enter the key (number of rails): ";
    cin >> key;

    // Encrypt the message
    string ciphertext = encryptRailFence(message, key);
    cout << "Encrypted Message: " << ciphertext << endl;

    // Decrypt the ciphertext
    string decryptedMessage = decryptRailFence(ciphertext, key);
    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}

