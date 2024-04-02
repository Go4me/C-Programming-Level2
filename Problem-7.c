/*
Question: Write a loop program to print the two-digit odd numbers, who’s sum of

digits are 7.

Answer: 25
43
61
*/

#include<stdio.h>
int main(){
    int x=10;
   
    for(x=11;x<99;x++){
        if((x%10)+(x/10)==7){
            printf("%d\n", x);
        }
    }
 
}