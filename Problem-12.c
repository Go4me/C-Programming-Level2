/*
    Question: Write a program to get a number from user and print the sum of all digits.

        Answer: Input: 123456 - Output – 21
        Input: 76895439 - Output – 51
        Input: 675 – Output - 18
*/

#include<stdio.h>

int main() {
    int num, digit, sum = 0;

    // Prompting the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract each digit and calculate the sum
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        num /= 10; // Remove the last digit from the number
    }

    // Printing the sum of all digits
    printf("Sum of digits: %d\n", sum);

    return 0;
}
