#include <stdio.h>

int main() {
    FILE *file;
    char content[] = "Hello, this is a test string written to the file.";

    file = fopen("testfile.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "%s", content);

    fclose(file);

    file = fopen("testfile.txt", "r");

    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char ch;
    printf("Contents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}
