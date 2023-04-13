#include<stdio.h>
int main()
{
    //Question 01
    int a1,a2,a3;
    printf("enter a number-");
    scanf("%d",&a1);
    for(a2=1;a2<=a1;a2++)
    {
        for(a3=1;a3<=a2;a3++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 02
    int b1,b2,b3;
    printf("enter a number-");
    scanf("%d",&b1);
    for(a2=a1;a2>=1;a2--)
    {
        for(a3=1;a3<=a2;a3++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 03
    int c1,c2,c3,c4=0;
    printf("enter a number-");
    scanf("%d",&c3);
    for(c1=c3;c1>=1;c1--)
    {
        for(c2=1;c2<=c4;c2++)
        {
            printf(" ");
        }
        c4++;
        for(c2=1;c2<=c1;c2++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 04
    int d1,d2,d3;
    printf("enter a number-");
    scanf("%d",&d3);
    for(d1=1;d1<=d3;d1++)
    {
        for(d2=d1;d2>=1;d2--)
        {
            printf("%d",d2);
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 05
    int g1,g2=1,g3,g4,g5;
    printf("enter a number-");
    scanf("%d",&g1);
    for(g4=0;g4<=g1;g4++)
    {
        for(g3=1;g3<=g1-g4;g3++)
        printf(" ");
        for(g5=0;g5<=g4;g5++)
        {
            printf("%4d",g2);
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 06
    int f1,f2,f3;
    printf("enter a number-");
    scanf("%d",&f3);
    for(f1=1;f1<=f3;f1++)
    {
        if(f1%2==0)
        {
            for(f2=1;f2<=f1;f2++)
            printf("%d",f2);
        } else {
            for(f2=1;f2<=f1;f2++)
            printf("1");
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 08
    int k1,k2,k3;
    printf("enter a number-");
    scanf("%d",&k3);
    for(k1=1;k1<=k3;k1++)
    {
        if(k1==1||k1==k3)
        {
            for(k2=1;k2<=k1;k2++){
                printf("*");
            }
        } else {
            printf("*");
            for(k2=1;k2<=k1;k2++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 09
    int e1,e2,e3=1,e4;
    printf("enter a number-");
    scanf("%d",&e4);
    for(e1=1;e1<=e4;e1++)
    {
        for(e2=e4;e2>=e1;e2--)
        {
            printf("%3d",e3++);
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 10
    int i1,i2,i3,i4,i5;
    printf("enter a number-");
    scanf("%d",&i5);
    for(i3=i1=1;i1<=i5;i1++)
    {
        i4=i3+i1- 1;
        for(i2=1;i2<=i1;i2++)
        {
            if(i1%2==1)
            {
                printf("%d",i3);
            } else {
                printf("%d",i4);
            }
            i3++;
            i4--;
        }
        printf("\n");
    }
    printf("\n\n");

    //Question 12
    int j1,j2,j3;
    printf("enter a number-");
    scanf("%d",&j3);
    for(j1=1;j1<=j3;j1++)
    {
        for(j2=j3;j2>j1;j2--)
            printf(" ");
        for(j2=1;j2<=j1;j2++)
            printf("%d",j2);
        for(j2=j2- 2;j2>=1;j2--)
            printf("%d",j2);
        printf("\n");
    }
    printf("\n\n");

    //Question 13
    int h1,h2,h3;
    char h4='A';
    printf("enter a number-");
    scanf("%d",&h3);
    for(h1=1;h1<=h3;h1++)
    {
        for(h2=1;h2<=h1;h2++)
        {
            printf("%c",h4);
        }
        h4++;
        printf("\n");
    }
    printf("\n\n");
    return 0;
}

