#include<stdio.h>
int main()
{
    //Question 01
    int a1,a2=1,a3;
    printf("enter a number-");
    scanf("%d",&a1);
    A:
    printf("%d ",a1);
    a1=a1- 2;
    if(a1>=a2)
    goto A;
    printf("\n\n\n");

    //Question 02
    int b;
    printf("enter a number-");
    scanf("%d",&b);
    int b1=b,b2=0;
    B1:
    b2=b1;
    B2:
    printf("%d",b2);
    b2--;
    if(b2>=1)
    goto B2;
    b1--;
    printf("\n");
    if(b1>=1)
    goto B1;
    printf("\n\n\n");
    return 0;
}
