#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int midSquareMethod(int seed) {
    // Square the seed
    long long square = static_cast<long long>(seed) * seed;

    // Convert square to a string and pad it with zeros to ensure it's long enough
    string squareStr = to_string(square);
    while (squareStr.length() < 8) {
        squareStr = "0" + squareStr;
    }

    // Extract the middle 4 digits
    int midStart = squareStr.length() / 2 - 2;
    string midDigitsStr = squareStr.substr(midStart, 4);

    // Convert the middle digits back to an integer
    int nextSeed = stoi(midDigitsStr);
    
    return nextSeed;
}

int main() {
    int seed;
    int numRandomNumbers;
    
    cout << "Enter initial seed (4 digits): ";
    cin >> seed;

    cout << "Enter the number of random numbers to generate: ";
    cin >> numRandomNumbers;

    for (int i = 0; i < numRandomNumbers; ++i) {
        seed = midSquareMethod(seed);
        cout << "Random number " << (i + 1) << ": " << setw(4) << setfill('0') << seed << endl;
    }

    return 0;
}
