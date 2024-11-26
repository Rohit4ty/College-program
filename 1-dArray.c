#include<stdio.h>
int main(){

int arr[10];
//input
printf("Enter a 10 numbers: ");
    for(int i=0; i<5; i++){
        scanf(" %d ",&arr[i]);
    }
printf("-----------------\n");
//output
    for(int j=0; j<5; j++){
        printf("%d ",arr[j]);
    }
return 0;
}