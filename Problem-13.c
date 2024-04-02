/*
        Question: Write a program to get a number from user and print the reverse of that number

`Answer: Input : 123456 - Output – 654321
Input : 76895439- Output – 93459867
Input : 675 – Output - 576
*/
#include<stdio.h>

int main() {
    int num, reversed = 0;

    // Prompting the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number
    while (num != 0) {
        int digit = num % 10; // Extract the last digit                           
        reversed = reversed * 10 + digit; // Append the digit to the reversed number  
        num /= 10; // Remove the last digit from the number      
    }

    // Printing the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
