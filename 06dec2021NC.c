#include<stdio.h>
int main()
{
    //Question 01
    int b[10]={1,1,2,1,2,3,1,2,3,4};
    int B;
    for(B=0;B<10;B++)
    {
        printf("%d ",b[B]);
    }
    printf("\n\n\n");
    //Another version for 01
    int e[10]={1,1,2,1,2,3,1,2,3,4};
    int E;
    for(E=0;E<10;E++)
    {
        printf("%d ",e[E]);
    }
    printf("\n\n\n");
    
    //Question 02
    int a[2][3];
    int a1,a2;
    for(a1=0;a1<2;a1++)
    {
        for(a2=0;a2<3;a2++)
        {
            printf("enter number for [%d][%d]-",a1,a2);
            scanf("%d",&a[a1][a2]);
        }
    }
    printf("two dimension-\n");
    for(a1=0;a1<2;a1++)
    {
        for(a2=0;a2<3;a2++)
        {
            printf("%d ",a[a1][a2]);
            if(a2==2)
            {
                printf("\n");
            }
        }
    }
    printf("\n\n\n");

    //Question 03
    int d[1000],d1,d2;
    printf("enter a number for size-");
    scanf("%d",&d2);
    printf("enter %d numbers-",d2);
    for(d1=0;d1<d2;d1++)
    {
        scanf("%d",&d[d1]);
    }
    printf("\n numbers are-");
    for(d1=0;d1<d2;d1++)
    {
        printf("%d ",d[d1]);
    }
    printf("\n\n\n");

    //Question number unknown 
    int c1,c2,c3;
    printf("enter a number-");
    scanf("%d",&c1);
    int c[c1];
    for(c2=0;c2<=c1;c2++)
    {
        scanf("%d",&c[c1]);
    }
    for(c3=0;c3<=c2;c3++)
    {
        printf("%d ",c[c3]);
    }
    printf("\n\n\n");
    return 0;
}