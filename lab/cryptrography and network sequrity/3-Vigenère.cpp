#include <bits/stdc++.h>
using namespace std;

// Function to modify the key by repeating or truncating it to match the message length
string modifyKey(string& message, string& key) {
    string newKey = key;
    while(newKey.size() < message.size()) {
        newKey += key;
    }
    return newKey.substr(0, message.length());
}

// Function to decrypt the ciphertext using Vigenère cipher
string decryptVigenere(string& ciphertext, string& key) {
    // Modify the repeated key matching the length of the message
    key = modifyKey(ciphertext, key);

    string plaintext = "";
    for(int i = 0; i < ciphertext.size(); i++) {
        char decryptedChar = (ciphertext[i] - key[i] + 26) % 26 + 'A';
        plaintext += decryptedChar;
    }
    return plaintext;
}

// Function to encrypt the message using Vigenère cipher
string encryptVigenere(string& message, string& key) {
    // Modify the repeated key matching the length of the message
    key = modifyKey(message, key);

    // Prepare the message (remove white space && convert into uppercase)
    string processedMessage = "";
    for(int i = 0; i < message.size(); i++) {
        if(message[i] == ' ')
            continue;

        processedMessage.push_back(toupper(message[i]));
    }

    string ciphertext = "";
    for(int i = 0; i < processedMessage.size(); i++) {
        char encryptedChar = (processedMessage[i] - 'A' + key[i] - 'A') % 26 + 'A';
        ciphertext += encryptedChar;
    }
    return ciphertext;
}

// Main function
int main() {
    string message, key = "PASCAL";
    cout << "Enter the message: ";
    getline(cin, message);

    // Encryption
    string ciphertext = encryptVigenere(message, key);
    cout << "Ciphertext: " << ciphertext << endl;

    // Decryption
    string decryptedMessage = decryptVigenere(ciphertext, key);
    cout << "Decrypted Message: " << decryptedMessage << endl;

    return 0;
}

