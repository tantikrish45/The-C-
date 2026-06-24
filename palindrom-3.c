#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1; // 1 means true, 0 means false

    printf("Input: Enter any string: ");
    scanf("%s", str);

    // Step 1: Find the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Step 2: Check for palindrome using two-pointer approach
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        start++;
        end--;
    }

    // Step 3: Print Output
    if (isPalindrome) {
        printf("Output: The given string is a Palindrome\n");
    } else {
        printf("Output: The given string is NOT a Palindrome\n");
    }

    return 0;
}
