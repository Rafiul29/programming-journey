#include <bits/stdc++.h>
using namespace std;

// Find the position of a character in the key matrix
pair<int, int> findPosition(char keyMatrix[5][5], char c)
{
    c = toupper(c);
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(keyMatrix[i][j] == c)
                return {i, j};
        }
    }
}

// Generate the Playfair cipher key matrix
void generateKeyMatrix(string& key, char keyMatrix[5][5])
{
    map<char, int> taken;

    // Convert the key to uppercase
    transform(key.begin(), key.end(), key.begin(), ::toupper);

    // Fill the matrix with the key
    for(int i = 0; i < key.size(); i++)
    {
        if(key[i] == 'J')
            key[i] = 'I';

        if(taken[key[i]] == 0)
        {
            keyMatrix[i / 5][i % 5] = key[i];
            taken[key[i]]++;
        }
    }

    // Fill the remaining cells with the alphabet
    char c = 'A';
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(keyMatrix[i][j] == '.')
            {
                while(taken[c] != 0)
                    c++;

     if(c == 'J')
                    c++;

                keyMatrix[i][j] = c;
                taken[c]++;
            }

        }
    }
}

// Decrypt a ciphertext using the Playfair cipher
string playfairDecrypt(string& ciphertext, string& key) {
    char keyMatrix[5][5];
    memset(keyMatrix, '.', sizeof(keyMatrix));
    generateKeyMatrix(key, keyMatrix);
    string plaintext = "";

    // Decrypt each digraph
    for(int i = 0; i < ciphertext.length(); i = i + 2) {
        char a = ciphertext[i];
        char b = ciphertext[i + 1];
        pair<int, int>  pos1 = findPosition(keyMatrix, a);
        pair<int, int>  pos2 = findPosition(keyMatrix, b);
        int row1 = pos1.first;
        int col1 = pos1.second;
        int row2 = pos2.first;
        int col2 = pos2.second;

        if(row1 == row2) {
            plaintext += keyMatrix[row1][(col1 + 4) % 5];
            plaintext += keyMatrix[row2][(col2 + 4) % 5];
        } else if(col1 == col2) {
            plaintext += keyMatrix[(row1 + 4) % 5][col1];
            plaintext += keyMatrix[(row2 + 4) % 5][col2];
        } else {
            plaintext += keyMatrix[row1][col2];
            plaintext += keyMatrix[row2][col1];
        }
    }

    // Convert the plaintext to lowercase
    transform(plaintext.begin(), plaintext.end(), plaintext.begin(), ::tolower);

    return plaintext;
}

// Encrypt a message using the Playfair cipher
string playfairEncrypt(string& message, string& key) {
    char keyMatrix[5][5];
    memset(keyMatrix, '.', sizeof(keyMatrix));
    generateKeyMatrix(key, keyMatrix);
    string processedMessage = "";
    string ciphertext = "";

    // Convert the message to lowercase
  transform(message.begin(), message.end(), message.begin(), ::tolower);

    // Prepare the message
    // replace 'j' with 'i'
    for(int i = 0; i < message.size(); i++) {
        if(message[i] == 'j')
            message[i] = 'i';
    }

    // Form digraphs, padding with 'x' or 'z' if needed
    for(int i = 0; i < message.size(); i++) {
        if(i == message.size() - 1) {
            processedMessage.push_back(message[i]);
            processedMessage.push_back('z');
        } else if(message[i] == message[i+1]) {
            processedMessage.push_back(message[i]);
            processedMessage.push_back('x');
        } else {
            processedMessage.push_back(message[i]);
            processedMessage.push_back(message[i+1]);
            i++;
        }
    }

    // Encrypt each digraph
    for(int i = 0; i < processedMessage.size(); i = i + 2) {
        char a = processedMessage[i];
        char b = processedMessage[i + 1];
        pair<int, int>  pos1 = findPosition(keyMatrix, a);
        pair<int, int>  pos2 = findPosition(keyMatrix, b);
        int row1 = pos1.first;
        int col1 = pos1.second;
        int row2 = pos2.first;
        int col2 = pos2.second;

        if(row1 == row2) {
            ciphertext += keyMatrix[row1][(col1 + 1) % 5];
            ciphertext += keyMatrix[row2][(col2 + 1) % 5];
        } else if(col1 == col2) {
            ciphertext += keyMatrix[(row1 + 1) % 5][col1];
            ciphertext += keyMatrix[(row2 + 1) % 5][col2];
        } else {
            ciphertext += keyMatrix[row1][col2];
            ciphertext += keyMatrix[row2][col1];
        }
    }

    // Convert the ciphertext to lowercase
    transform(ciphertext.begin(), ciphertext.end(), ciphertext.begin(), ::tolower);

    return ciphertext;
}

int main()
{
   vector<string> keys = {"ATHENS", "MONARCHY", "PLAYFAIR"};
    string message;
    cout << "Enter the message to encrypt: ";
    getline(cin, message);

    // Encrypt and print key-ciphertext pairs
    cout << "\nEncryption:\n";
    vector<pair<string, string>> keyCipherPairs;
    for(string key : keys) {
        string ciphertext = playfairEncrypt(message, key);
        keyCipherPairs.push_back({key, ciphertext});
        cout << "Key: " << key << "\t Ciphertext: " << ciphertext << endl;
    }

    // Decrypt and print the original message
    cout << "\nDecryption:\n";
    for(auto keyCipherPair : keyCipherPairs) {
        string key = keyCipherPair.first;
        string ciphertext = keyCipherPair.second;
        string decryptedMessage = playfairDecrypt(ciphertext, key);
        cout << "Key: " << key << "\t Decrypted Message: " << decryptedMessage << endl;
    }

    return 0;
}

