#include <stdio.h>

int string_length(char *string) {
    int length = 0;
    while (*string != '\0') {
        length++;
        string++;
    }

    return length;
}

int string_compare(char *string1, char *string2) {
    int length1 = string_length(string1);
    int length2 = string_length(string2);

    if (length1 == length2)
        return 0;
    else
        return -1;
}

int main() {
    char string1[100], string2[100];

    printf("Enter the first string: ");
    scanf("%s", string1);

    printf("Enter the second string: ");
    scanf("%s", string2);

    if (string_compare(string1, string2) == 0)
        printf("The strings are equal in length.\n");
    else
        printf("The strings are not equal in length.\n");

    printf("The length of the first string is: %d\n", string_length(string1));
    printf("The length of the second string is: %d\n", string_length(string2));

    return 0;
}