/*
Question: Write a loop program to print the sum of two-digit numbers whose
    one’s digit is 5.
Answer: 495

*/

#include<stdio.h>
int main(){
    int x=10;
    int y=0;
    for(x=11;x<99;x++){
        if( (x%10)==5){
            y= x+y;

            printf("%d\n", y);
        }
    }
 
}