/*
Question: Write a loop program to print the two-digit even numbers, who’s sum of

digits are 6.

Answer: 
24
42
60
*/
#include<stdio.h>
int main(){
    int x=10;
   
    for(x=11;x<99;x++){
        if((x%2==0) && (x%10)+(x/10)==6 ){
            printf("%d\n", x);
        }
    }
 
}