/*
    Question: Write a loop program to print sum of 1 to 5.
            Answer: 15
*/
#include<stdio.h>
int main(){
    int x=1;
    int sum=0;
    for(x=1;x<6;x++){
        
        sum= x+sum;
    }
    printf("%d",sum);
}