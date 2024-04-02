/*
        Question: Write a loop program to print sum of 6 to 1.
                Answer: 21
*/

#include<stdio.h>
int main(){
    int x=6;
    int sum=0;
    for(x=6;x>0;x--){
        
        sum= x+sum;
    }
    printf("%d",sum);
}