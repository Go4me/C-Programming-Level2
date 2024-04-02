/*
Question: Write a loop program to print odd numbers 1 to 9.
Answer:
1
3
5
7
9
*/

#include<stdio.h>
int main(){
    int x=1;
   
    for(x=1;x<10;x++){
        if(x%2 != 0){
            printf("%d\n", x);
        }
    }
 
}