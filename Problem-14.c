/*
            Question: Write a program to get a number from user and interchange the first and 
            last digits and print the result.
Answer: Input : 123456 - Output – 623451
Input : 76895439- Output – 96895437
Input : 675 – Output - 576

*/

#include<stdio.h>
#include<math.h>

int main() {
    int num, first_digit, last_digit, num_length, result;

    // Prompting the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding the number of digits in the given number
    num_length = (int)log10(num) + 1;

    // Extracting the first and last digits
    last_digit = num % 10;
    first_digit = num / pow(10, num_length - 1);

    // Calculating the result after interchanging first and last digits
    result = last_digit * (int)pow(10, num_length - 1) + num % ((int)pow(10, num_length - 1));
    result = result - last_digit + first_digit;

    // Printing the result
    printf("Result after interchanging first and last digits: %d\n", result);

    return 0;
}
