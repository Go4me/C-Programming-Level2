/*
    Question: Write a loop program to print the sum of two-digit odd numbers, whose

    ten’s digit is 7.

Answer: 375
*/
#include<stdio.h>
int main(){
    int x=10;
    int y=0;
    for(x=17;x<100;x++){
        if( (x%2 != 0) && (x/10==7)){
            y= x+y;

            printf("%d\n", y);
        }
    } 
}