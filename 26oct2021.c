#include<stdio.h>
int main()
{
    //question 01
    char me='T';
    printf("%c\n",me);
    short int number1=99;
    printf("%hd\n",number1);
    int number2=999;
    printf("%d\n",number2);
    long int number3=9999;
    printf("%ld\n",number3);
    long long int number4=99999;
    printf("%lld\n",number4);
    float number5=999999;
    printf("%f\n",number5);
    double number6=9999999;
    printf("%lf\n",number6);
    long double number7=99999999;
    printf("%Lf\n\n\n",number7);
    
    //question 02
    char myself='N';
    printf("enter an escape character-");
    scanf("%c",&myself);
    printf("value of that escape character is %d\n\n\n",myself);
    
    //question 03
    int value1;
    printf("enter a decimal to change it to octal and hexadecimal :");
    scanf("%d,%d",&value1,&value1);
    printf("\nThe octal and hexadecimal value of %d is %o and %x respectively.\n\n",value1,value1,value1);
    int value2;
    printf("enter a hexadecimal to change it to decimal :");
    scanf("%x,%d",&value2,&value2);
    printf("\nThe decimal value of %x(in hexadecimal) is %d.\n\n",value2,value2);
    int value3;
    printf("enter an octal value to change it to decimal and hexadecimal :");
    scanf("%o,%d,%x",&value3,&value3,&value3);
    printf("\nThe decimal and hexadecimal value of %o is %d and %x respectively.\n\n\n",value3,value3,value3);
    
    //question 04
    int x,y,z,part1,part2,final;
    printf("enter x :");
    scanf("%d",&x);
    printf("enter y :");
    scanf("%d",&y);
    printf("enter z :");
    scanf("%d",&z);
    part1=x*x*x-3*x*x-4*z;
    part2=7+2*y;
    final=part1/part2;
    printf("the final solution of the problem is %d.\n\n\n",final);
    
    //question 05
    int a=5,b=7;
    printf("the first value of a and b are %d,%d respectively.\n",a,b);
    a=7;
    b=5;
    printf("the final value of a and b are %d,%d respectively.\n\n\n",a,b);
    
    //question 06
    int p[10],n,i;    
    printf("Enter the number to convert: ");    
    scanf("%d",&n);    
    for(i=0;n>0;i++)    
    {    
        p[i]=n%2;    
        n=n/2;    
    }    
    printf("\nBinary of Given Number is=");    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",p[i]);    
    }  
    printf("\n\n\n");  
    
    //question 07 
    int num, binary_num, decimal_num = 0, base = 1, rem;  
    printf (" Enter a binary number with the combination of 0s and 1s-");  
    scanf (" %d", &num); 
    binary_num = num;  
    while ( num > 0)  
    {  
        rem = num % 10;   
        decimal_num = decimal_num + rem * base;  
        num = num / 10; 
        base = base * 2;  
    }  
    printf ( "\nThe binary number is %d \t", binary_num);
    printf (" \n The decimal number is %d \t", decimal_num);    
    
    return 0;
}
