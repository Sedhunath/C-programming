//Write a c program the input consist char,int, float and the output orints the value of char,int and float rounded of 2 decimals seperated by space

#include <stdio.h>

int main() {
    char character;
    int integer;
    float floating;
    printf("Enter a character, an integer, and a float separated by spaces: ");
    scanf("%c %d %f", &character, &integer, &floating);

    // Output
    printf("%.2f %.2f %.2f\n", (float)character, (float)integer, floating);

    return 0;
}
