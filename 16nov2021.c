#include<stdio.h>
int main()
{
    //Question 01(a)
    int a1,a2=1;
    printf("enter a number(descending order)-");
    scanf("%d",&a1);
    while(a1>=a2)
    {
        printf("%d\n",a1--);
    }
    //(b)
    int a3,a4=1;
    printf("enter a number(ascending order)-");
    scanf("%d",&a3);
    while(a3>=a4)
    {
        printf("%d\n",a4++);
    }
    printf("\n\n");
    
    //Question 02
    int b1,b2=1,b3=7,b4;
    printf("enter a limit for 7 multiplication table-");
    scanf("%d",&b1);
    while(b1>=b2)
    {
        b4=b3*b2;
        printf("%d*%d=%d\n",b3,b2++,b4);
    }
    printf("\n\n");
    
    //Question 03
    int c1,c2;
    printf("enter a number 1-");
    scanf("%d",&c1);
    printf("enter a number 2-");
    scanf("%d",&c2);
    while(c1>c2)
    {
        printf("%d,",c2++);
    }
    while(c2>c1)
    {
        printf("%d,",c1++);
    }
    printf("\n\n\n");
    
    //Question 04
    int d1,d2;
    printf("enter number 1-");
    scanf("%d",&d1);
    printf("enter number 2-");
    scanf("%d",&d2);
    if(d2>d1)
    {
        while(d1<=d2)
        {
            if(d1%3==0 && d1%7==0)
            {
                printf("%d\n",d1);
            }
            d1++;
        }
    } else {
        while(d2<=d1)
        {
            if(d2%3==0 && d2%7==0)
            {
                printf("%d\t",d2);
            }
        }
        d2++;
    }
    printf("\n\n\n");
    
    //Question 05
    int e1,e2=1,e3=0;  
    printf("enter a number-");  
    scanf("%d",&e1);  
    while(e1>=e2)  
    {  
       e3=e3+e2; 
       e2+=2;  
    } 
    printf("the sum of the series (1+3+5+.....+n)(n=input) is %d\n\n\n",e3);
    
    //Question 06
    int f1,f2=1,f3=1;  
    printf("enter a number-");  
    scanf("%d",&f1);  
    while(f1>=f2)  
    {  
       f3=f3*f2;
       f2++;  
    }
    printf("the value of %d factorial is %d\n\n\n",f1,f3);
    
    //Question 07
    int g1,g2=1;
    float g3=0;
    printf("enter a number-");  
    scanf("%d",&g1);  
    while(g1>=g2)  
    {  
       g3=g3 + 1.0/g1;     
       g1-=2;   
    }  
    printf("the sum pf the series (1/1+1/3+1/5+.....1/n)(n=input) is %f\n\n\n",g3);
    
    //Question 08
    int h1,h2=1;
    float h3=0;
    printf("enter a number-");
    scanf("%d",&h1);
    while(h1>h2)
    {
        h3=h3+((1.0*h1)/(h1- 1));
        h1--;
    }
    printf("the sum of the series (n/n-1+n-1/n-2+n-2/n-3+.....2/1)(n=input) is %f\n\n\n",h3);
    
    return 0;
}