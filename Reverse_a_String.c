#TCS TR Question
#Reverse a string in C/C++/Python.
#Here is the code in C
#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Input the string with spaces
    str[strcspn(str, "\n")] = '\0';  // Remove the newline character if exists

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
