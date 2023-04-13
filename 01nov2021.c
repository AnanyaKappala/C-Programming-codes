#include<stdio.h>
int main()
{
    //question 01
    int a,b,c,d,e,f,g;
    printf("enter the two numbers :");
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("the number1:%d\nthe number2:%d\naddition :%d\nsubtraction :%d\nmultiplication :%d\ndivision :%d\nmodulous :%d\n",a,b,c,d,e,f,g);
    printf("increment in a type 1 : %d\nincrement in a type 2 : %d\ndecrement in a type 1 : %d\ndecrement in b type 2 : %d\n",a++,++a,a--,--a);
    printf("increment in b type 1 : %d\nincrement in b type 2 : %d\ndecrement in b type 1 : %d\ndecrement in b type 2 : %d\n\n\n",b++,++b,b--,--b);
    
    //question 02
    float h;
    printf("enter a float value:");
    scanf("%f",&h);
    int i=h;
    printf("interger in h: %d\ndecimal in h:%f\n\n\n",i,h-i);
    
    //question 03
    int j;
    printf("enter a 4 digit number:");
    scanf("%d",&j);
    printf("digit 1:%d\ndigit 2:%d\ndigit 3:%d\ndigit 4:%d\n\n\n",(j/1000)%10,(j/100)%10,(j/10)%10,j%10);
    
    //question 04
    int k;
    printf("enter a 5 digit number:");
    scanf("%d",&k);
    printf("middle digit:%d\nmiddle 3 digits:%d%d%d\n\n\n",(k/100)%10,(k/1000)%10,(k/100)%10,(k/10)%10);
    
    //question 05
    int l;
    printf("enter a 4 digit number (abcd) :");
    scanf("%d",&l);
    printf("conversion to (badc) :%d%d%d%d\n\n\n",(l/100)%10,(l/1000)%10,l%10,(l/10)%10);
    
    //question 06
    int m;
    printf("enter a 3 digit number (abc) :");
    scanf("%d",&m);
    printf("conversion to (cba) :%d%d%d\n\n\n",m%10,(m/10)%10,(m/100)%10);
    
    return 0;
}