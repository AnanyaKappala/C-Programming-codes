#include<stdio.h>
int main()
{
    //Question 01
    int a1,a2,a3=0,a4;
    printf("enter number 1-");
    scanf("%d",&a1);
    printf("enter number 2-");
    scanf("%d",&a2);
    printf("The numbers divisible by 11 between %d and %d are - \n",a1,a2);
    if(a2>a1)
    {
        while(a1<=a2)
        {
            if(a1%11==0)
            {
                printf("%d\n",a1);
            }
            a1++;
        }
    } else {
        while(a2<=a1)
        {
            if(a2%11==0)
            {
                printf("%d\n",a2);
            }
        }
        a2++;
    }
    printf("\n\n\n");

    //Question 02
    int b1,b2,b3;
    float b4=0,b5=1;
    printf("enter a number-");
    scanf("%d",&b1);
    b2=1;
    while(b2<=b1)
    {
        b3=b2;
        b5=1;
        while(b3>=b2)
        {
            b5*=b3;
            b3--;
        }
        b4+=(1.0/b5);
        b2++;
    }
    printf("the sum of 1/%d! =%f\n\n\n",b1,b4);

    //Question 03
    int c1,c2,c3;
    printf("enter a number-");
    scanf("%d",&c1);
    while(c1>0)
    {
        c3=c1%10;
        c2=c2*10+c3;
        c1=c1/10;
    }
    if(c2==0)
    {
        printf("the number is palindrone.");
    } else {
        printf("invalid");
    }
    printf("\n\n\n");

    //Question 04
    int d1=0,d2;
    printf("enter a number-");
    scanf("%d",&d1);
    while(d1>0)
    {
        d1++;
        d2/=10;
    }
    printf("number of digits=%d\n\n\n",d1);

    //Question 06
    int f1,f2;
    printf("enter year 1-");
    scanf("%d",&f1);
    printf("enter year 2-");
    scanf("%d",&f2);
    if(f1>f2)
    {
        while(f1<=f2)
        {
            if(f1%4==0 && f1%100==0)
            {
                printf("%d",f1);
            }
            f1++;
        }
    } else { 
        while(f2<=f1)
        {
            if(f2%4==0 && f2%100==0)
            {
                printf("%d",f2);
            }
            f2++;
        }
    }
    
    return 0;
}