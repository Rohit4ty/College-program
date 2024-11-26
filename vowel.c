////WACP CHECK WEATHER ENTER CHARACTER IS VOWEL OR NOT USING (SWITCH CASE)
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch (ch){
    case 'A':   
    case 'a':   
    case 'E':  
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u': printf("It's a vowel");
        break;   
    default: printf("Enter a valid value");
        break;
    }
    return 0;
}