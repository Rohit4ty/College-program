//WACP DEMONSTRATE RECURSION WITH WITH BASE CRITERIA 
#include<stdio.h>

void display(){
    static int i=0;
    printf("Hello world!\n");
    i++;
    while(i<5)
    display();
}

int main(){
 display();
return 0;
}