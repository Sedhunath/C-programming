#include <stdio.h>
#include <string.h>

unsigned long long calculateMagicValue(const char* str) {
    unsigned long long magicValue = 1;  // Initialize magic value to 1
    int i;

    // Iterate over each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        magicValue *= (unsigned long long)str[i];  // Multiply ASCII value of each character
    }

    return magicValue;
}

int main() {
    char inputString[100];

    // Get input string from user
    printf("Enter a string: ");
    scanf("%99s", inputString);

    // Calculate the magic value
    unsigned long long result = calculateMagicValue(inputString);

    // Print the result
    printf("The magic value of the string \"%s\" is: %llu\n", inputString, result);

    return 0;
