//WACP PERFORM ARITHMETIC OR RELATIONAL OR LOGICAL OR BITWISE OPERATOR

#include<stdio.h>
int main()
{
//ARITHMETIC OPERATORS
    int a=10, b=5;
    printf("%d + %d =%d\n",a,b,a+b);
    printf("%d - %d =%d\n",a,b,a-b);
    printf("%d X %d =%d\n",a,b,a*b);
    printf("%d / %d =%d\n",a,b,a/b);
    printf("%d %% %d =%d\n",a,b,a%b);

//RELATIONAL OPERATORS
printf("------------------------------------------\n");
    int a1=10, b1=20;
    printf("%d < %d= %d\n",a1,b1,a1<b1);
    printf("%d > %d= %d\n",a1,b1,a1>b1);
    printf("%d <= %d= %d\n",a1,b1,a1<=b1);
    printf("%d >= %d= %d\n",a1,b1,a1>=b1);
    printf("%d == %d= %d\n",a1,b1,a1==b1);
    printf("%d != %d= %d\n",a1,b1,a1!=b1);

//LOGICAL OPERATORS
printf("------------------------------------------\n");
    int c= 30, d=20, e=30, f=40;
    int c1=(c<d) && (e<f);
    printf("(c<d) && (e<f)= %d\n",c1);
    int c2=(c<d) || (e<f);
    printf("(c<d) || (e<f)= %d\n",c2);
    int c3=!(c==f);
    printf("!(c==f)= %d\n",c3);

//BITWISE OPERATORS
printf("------------------------------------------\n");

return 0;
}