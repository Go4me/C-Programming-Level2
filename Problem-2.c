/*
    Question: Write a loop program to print 5 to 1 on one by one.
Answer: 5
4
3
2
1

*/

#include<stdio.h>
int main(){
    int x=5;
    for(x=5;x>0;x--){
        printf("%d\n",x);
    }
}