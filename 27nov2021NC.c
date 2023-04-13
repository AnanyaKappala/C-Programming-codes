#include<stdio.h>
int main()
{
    //Question 01(a)
    int a1,a2;
    printf("enter a number:");
    scanf("%d",&a2);
    printf("natural numbers from 1 to %d-\n",a2);
    for(a1=1;a1<=a2;a1++)
    {
        printf("%d\t",a1);
    }
    printf("\n");
    
    //Question 01(b)
    int a3,a4;
    printf("enter a number:");
    scanf("%d",&a4);
    for(a3=a4;a3>=1;a3--)
    {
        printf("%d\t",a3);
    }
    printf("\n\n\n");

    //Question 02
    int b1,b2;
    printf("Enter 2 numbers\n");  
    scanf("%d%d",&b1,&b2);  
    printf("Numbers between %d and %d are:\n",b1,b2);  
    while(b1<=b2)  
    {  
        printf("%d  ",b1);  
        b1++;  
    }  
    printf("\n\n\n");

    //Question 05
    int e1,e2,e4;
    float e3=0.0;
    printf("enter the number of terms u want: ");
    scanf("%d",&e2);
    for(e1=1;e1<=e2;e4=e1);e1+=2;
    {
        if(e1<e2)
        {
            e4=e1/(e1+=2);
            printf("%d/%d + ",e1,e1+=2);
            e3+=2/(float)e4;
        }
        if(e1==e2)
        {
            e4=e1/(e1+=2);
            printf("%d/%d ",e1,e1+=2);
            e3+=2/(float)e4;
        }       
    }
    printf("\nsum of series upto %d terms = %f\n\n\n",e2,e3);
    
    //Question 06
    int f1,f2;
    int f3=0,f4=1;
    int f5=f3+f4;
    printf("enter a number:");
    scanf("%d",&f2);
    printf("Fibonacci Series: %d, %d, ",f3,f4);
    for(f1=3;f1<=f2;++f1) 
    {
        printf("%d, ",f5);
        f3=f4;
        f4=f5;
        f5=f3+f4;
    }
    printf("\n\n\n");
    return 0;
}


