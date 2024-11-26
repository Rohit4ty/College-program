//PRINT A-Z USING (FOR, WHILE, DO-WHILE LOOP)
#include<stdio.h>

int main(){
//USING FOR LOOP
    for (char i='A'; i<='Z'; i++){
        printf("%c ",i);
    }

//USING DO WHILE LOOP
printf("\n---------------------------------------------------\n");
    char j='A';
    do{
        printf("%c ",j);
        j++;
    }while(j<='Z');

//USING WHILE LOOP
printf("\n---------------------------------------------------\n");
    char k='A';
    while (k<='Z'){
        printf("%c ",k);
        k++;
    }
return 0;
}