#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], longestWord[200];
    int wordCount = 0, maxLength = 0, length = 0;
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            length++;
        } else if (length > 0) {
            wordCount++;  
            if (length > maxLength) { 
                maxLength = length;
                strncpy(longestWord, &str[start], length);
                longestWord[length] = '\0'; 
            }
            length = 0; 
        }

        if (str[i] == ' ' || str[i] == '\n') {
            start = i + 1;
        }
        i++;
    }

    if (length > 0) {
        wordCount++;
        if (length > maxLength) {
            maxLength = length;
            strncpy(longestWord, &str[start], length);
            longestWord[length] = '\0';
        }
    }
    printf("Number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);
    printf("Length of the longest word: %d\n", maxLength);

    return 0;
}
