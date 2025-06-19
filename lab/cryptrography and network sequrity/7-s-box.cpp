#include <bits/stdc++.h>
using namespace std;

// Expansion (E) table - maps 32-bit input to 48-bit expanded input
const int E[] = {
    32,  1,  2,  3,  4,  5,
     4,  5,  6,  7,  8,  9,
     8,  9, 10, 11, 12, 13,
    12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21,
    20, 21, 22, 23, 24, 25,
    24, 25, 26, 27, 28, 29,
    28, 29, 30, 31, 32, 1};

// Function to generate 48-bit input for S-boxes
string generateSboxInput(string prevRoundOutput, string roundKey) {
    // Create a 32-bit bitset to store the right half of the previous round's output
    string rightHalf = prevRoundOutput.substr(32, 32);

    // Expand the 32-bit right half to 48 bits using the E table
    string expandedInput(48, ' ');
    for(int i = 0; i < 48; ++i) {
        // E table uses 1-based indexing, so subtract 1 for 0-based
        expandedInput[i] = rightHalf[E[i] - 1];
    }

    // XOR the expanded input with the round key
    for(int i = 0; i < expandedInput.size(); i++) {
        if(expandedInput[i] == roundKey[i])
            expandedInput[i] = '0';
        else
            expandedInput[i] = '1';
    }
    return expandedInput;
}

int main() {
    string prevRoundOutput = "1100110000000000110011001111111111110000101010101111000010101010";
    string roundKey = "000110110000001011101111111111000111000001110010";

    // Generate S-box input
    string sboxInput = generateSboxInput(prevRoundOutput, roundKey);

    // Print the result
    cout << "S-box Input (48-bit): " << sboxInput << endl;
    return 0;
}
