/*
 Question: Write a loop program to print the two-digit odd numbers, below 20.
Answer: 11
13
15
17
19
*/

#include<stdio.h>
int main(){
    int x=11;
   
    for(x=11;x<20;x++){
        if(x%2 != 0){
            printf("%d\n", x);
        }
    }
 
}