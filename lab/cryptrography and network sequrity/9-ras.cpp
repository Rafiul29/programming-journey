#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

// Function to compute GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute modular exponentiation
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

// Function to compute modular inverse
int mod_inverse(int a, int m) {
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1)
            return x;
    }
    return -1; // No modular inverse found
}

// RSA Key Generation
void generate_keys(int &e, int &d, int &n) {
    int p = 61; // Example prime 1
    int q = 53; // Example prime 2
    n = p * q;  // Compute n
    int phi = (p - 1) * (q - 1);

    // Choose e such that gcd(e, phi) = 1
    e = 3;
    while (gcd(e, phi) != 1) {
        e += 2;
    }

    // Compute d such that (d * e) % phi = 1
    d = mod_inverse(e, phi);
}

int main() {
    int e, d, n;

    // Client generates RSA keys
    generate_keys(e, d, n);
    cout << "Public Key: (" << e << ", " << n << ")\n";
    cout << "Private Key: (" << d << ", " << n << ")\n";

    // Server encrypts the message
    int message = 42; // Example plaintext
    long long encrypted_message = mod_exp(message, e, n);
    cout << "Encrypted Message: " << encrypted_message << "\n";

    // Client decrypts the message
    long long decrypted_message = mod_exp(encrypted_message, d, n);
    cout << "Decrypted Message: " << decrypted_message << "\n";

    return 0;
}