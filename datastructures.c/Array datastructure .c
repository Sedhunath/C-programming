//Write a c programming the input consists of a sentence and output prints the same sentence

#include <stdio.h>

int main() {
    char sentence[1000]; // Assuming maximum sentence length is 1000 characters
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // Using fgets to read a sentence
   
    printf("You entered: %s", sentence);
    
    return 0;
}
