#include <stdio.h>
int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;
    int num;
    printf("Enter the source file name: ");
    scanf("%s", sourceFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Failed to open the source file.\n");
        return 1;
    }
    printf("Enter the destination file name: ");
    scanf("%s", destinationFilename);
    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
    fseek(sourceFile, 0, SEEK_SET);
    while (fscanf(sourceFile, "%d", &num) == 1) {
        fprintf(destinationFile, "%d ", num);
    }
    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}