#include <bits/stdc++.h>
using namespace std;

// Permutation Choice 1 (PC-1) table (56 bits)
int PC1[] = {57, 49, 41, 33, 25, 17,  9,
              1, 58, 50, 42, 34, 26, 18,
             10,  2, 59, 51, 43, 35, 27,
             19, 11,  3, 60, 52, 44, 36,
             63, 55, 47, 39, 31, 23, 15,
              7, 62, 54, 46, 38, 30, 22,
             14,  6, 61, 53, 45, 37, 29,
             21, 13,  5, 28, 20, 12,  4 };

// Permutation Choice 2 (PC-2) table (48 bits)
int PC2[] = {14, 17, 11, 24,  1,  5,  3, 28,
             15,  6, 21, 10, 23, 19, 12,  4,
             26,  8, 16,  7, 27, 20, 13,  2,
             41, 52, 31, 37, 47, 55, 30, 40,
             51, 45, 33, 48, 44, 49, 39, 56,
             34, 53, 46, 42, 50, 36, 29, 32};

// Left shifts for each round (depending on round number)
int shifts[] = {1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};

string leftShift(string str, int shiftCount) {
    return str.substr(shiftCount, str.size() - shiftCount) + str.substr(0, shiftCount);
}

// Function to generate the round keys for DES
vector<string> generateKeys(string& key) {
    vector<string> roundKeys;

    // Step 1: Initial Permutation (PC-1)
    string key56(56, ' ');
    for (int i = 0; i < 56; ++i) {
       key56[i] = key[PC1[i] - 1]; // Permutation is 1-indexed
    }

    // Step 2: Split into two halves (C0 and D0)
    string C0 = key56.substr(0, 28);  // Left half
    string D0 = key56.substr(28, 28); // Right half

    // Store CD pair for farther use
    vector<pair<string, string>> CD_pair;
    CD_pair.push_back({C0, D0});

    // Step 3: Generate 16 round keys
    for(int round = 0; round < 16; ++round) {
        // Step 3.1: Perform left shifts on C and D
        string C = leftShift(CD_pair.back().first, shifts[round]);
        string D = leftShift(CD_pair.back().second, shifts[round]);
        CD_pair.push_back({C, D});

        // Step 3.2: Combined C and D
        string CD = C + D;

        // Step 3.3: Apply permutation PC-2
        string key48(48, ' ');
        for (int i = 0; i < 48; ++i) {
           key48[i] = CD[PC2[i] - 1]; // Permutation is 1-indexed
        }

        roundKeys.push_back(key48);
    }

    return roundKeys;
}


int main() {
    unsigned long long hexValue;
    cout << "Enter a 64-bit initial key in hexadecimal (e.g., 133457799BBCDFF1): ";
    cin >> hex >> hexValue;

    // Convert the hexadecimal value to a binary
    string initialKey = bitset<64>(hexValue).to_string();
    cout << "Initial Key (in binary): " << initialKey << endl;

    // Generate round keys
    vector<string> roundKeys = generateKeys(initialKey);

    // Print the round keys
    cout << "\nRound keys are: \n";
    for(int i = 0; i < 16; ++i) {
        cout << "K" << i + 1 << ": " << roundKeys[i] << endl;
    }

    return 0;
}

