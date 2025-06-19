#include <stdio.h>
#include <stdlib.h>

// Function to check if a character is a digit (0-9)
int isDigit(char ch) {
    return ch >= '0' && ch <= '9';
}

// Function to check if a character is a white space
int isWhiteSpace(char ch) {
    return ch == ' ' || ch == '\t' || ch == '\n';
}

// Function to analyze the source code
void lexicalAnalyzer(const char* filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return;
    }

    char ch;
    char currentNumber[100];  // Max length of a number
    int numberIndex = 0;
    char collectedNumbers[100][100];  // Max 100 numbers, each max length 100
    int numberCount = 0;

    // Read the source file character by character
    printf("Processed Source Code: \n");
    while ((ch = fgetc(file)) != EOF) {
        // Check if the character is part of a number
        if (isDigit(ch)) {
            currentNumber[numberIndex++] = ch;  // Build the number
        } else {
            // If a number has been collected, store it
            if (numberIndex > 0) {
                currentNumber[numberIndex] = '\0';  // Null-terminate the number

                // Copy the collected number into the array
                if (numberCount < 100) {  // Store only up to 100 numbers
                    for (int i = 0; i < numberIndex; i++) {
                        collectedNumbers[numberCount][i] = currentNumber[i];
                    }
                    collectedNumbers[numberCount][numberIndex] = '\0';  // Null-terminate the copied number
                    numberCount++;
                }
                numberIndex = 0;  // Reset for the next number
            }
            // Eliminate white spaces, but keep other characters
            if (!isWhiteSpace(ch)) {
                putchar(ch);  // Print non-white space characters
            }
        }
    }

    // Handle any trailing number at the end of the file
    if (numberIndex > 0) {
        currentNumber[numberIndex] = '\0';  // Null-terminate the last number
        
        // Copy the collected number into the array
        if (numberCount < 100) {  // Store only up to 100 numbers
            for (int i = 0; i < numberIndex; i++) {
                collectedNumbers[numberCount][i] = currentNumber[i];
            }
            collectedNumbers[numberCount][numberIndex] = '\0';  // Null-terminate the copied number
            numberCount++;
        }
    }

    fclose(file);

    // Output the collected numbers at the end
    printf("\nCollected Numbers:\n");
    for (int i = 0; i < numberCount; i++) {
        printf("%s\n", collectedNumbers[i]);
    }
}

int main() {
    const char *filename = "input.txt";  // Change to your C source file name
    lexicalAnalyzer(filename);
    return 0;
}
