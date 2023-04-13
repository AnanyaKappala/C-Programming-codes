#include<stdio.h>
int main()
{
    //question 01
    int a1,a2;
    printf("enter a number :");
    scanf("%d",&a1);
    printf("enter a number :");
    scanf("%d",&a2);
    if(a1>a2)
    {
        printf("maximum is %d\n",a1);
    } else {
            printf("maximum is %d\n",a2);
    }
    if(a1<a2)
    {
        printf("minimum is %d\n\n\n",a1);
    } else {
            printf("minimum is %d\n\n\n",a2);
    } 
    
    //question 02
    int b;
    printf("enter for odd and even:");
    scanf("%d",&b);
    if(b%2==0)
    {
        printf("even\n\n\n");
    } else {
        printf("odd\n\n\n");
    }
    
    ///question 03(a)
    int c1,c2,c3;
    getchar();
    printf("enter 3 numbers:");
    scanf("%d%d%d",&c1,&c2,&c3);
    if(c1>c2)
    {
        printf("the largest amoung 3 numbers is:%d\n",c1);
    } else {
        if(c2>c3)
        {
            printf("the largest amoung 3 numbers is:%d\n",c2);
        } else {
            printf("the largest amoung 3 numbers is:%d\n",c3);
               }
    }
    //question 03(b)
    int c4;
    printf("enter 1 more number:");
    scanf("%d",&c4);
    if(c1>c2)
    {
        printf("the largest amoung 4 numbers is:%d\n\n\n",c1);
    } else {
        if(c2>c3)
        {
            printf("the largest amoung 4 numbers is:%d\n\n\n",c2);
        } else {
            if(c3>c4)
            {
                printf("the largest amoung 4 numbers is:%d\n\n\n",c3);
            } else {
                    printf("the largest amoung 4 numbers is:%d\n\n\n",c4);
                   }    
               }
           }
    
    //question 04
    int d;
    printf("enter a number:");
    scanf("%d",&d);
    if(d<10)
    {
        printf("number of digits=1\n\n\n");
    } else {
        if(10<=d<100)
        {
            printf("number of digits=2\n\n\n");
        } else {
            if(100<=d<1000)
            {
                printf("number of digits=3\n\n\n");
            } else {
                if(1000<=d<10000)
                {
                    printf("number of digits=4\n\n\n");
                } else {
                    if(10000<=d<100000)
                    {
                        printf("number of digits=5\n\n\n");
                    } else {
                        if(100000<=d<1000000)
                        {
                            printf("number of digits=6\n\n\n");
                        } else {
                            if(1000000<=d<10000000)
                            {
                                printf("number of digits=7\n\n\n");
                            } else {
                                printf("number of digits=8\n\n\n");
                            }
                        }
                    } 
                }
            }
        }
    }
    
    //question 05
    int e1,e2,e3,f1,f2,f3;
    printf("enter a date 01:");
    scanf("%d/%d/%d",&e1,&e2,&e3);
    printf("enter a date 02:");
    scanf("%d/%d/%d",&f1,&f2,&f3);
    if(e1,e2,e3<f1,f2,f3)
    {
        printf("date which comes first is %d/%d/%d\n",e1,e2,e3);
    } else {
        printf("date which comes first is %d/%d/%d\n",f1,f2,f3);
    }
    //question 06
    if(0<e1,f1<31 && 0<e2,f2<13 && 1000<e3,f3<3000)
    {
        printf("date is valid\n\n\n");
    } else {
        printf("the date you entered is invalid . enter a valid date\n\n\n");
    }
    
    //question 07
    int g,g1,g2,h,h1,h2;
    printf("enter time 01-");
    scanf("%d:%d",&g1,&g2);
    printf("enter time 02-");
    scanf("%d:%d",&h1,&h2);
    g=(g1*60)+g2;
    h=(h1*60)+h2;
    if(g<h)
    {
        printf("the time which comes first is %d:%d\n",g1,g2);
        printf("the difference is %d min\n",h-g/60);
    } else {
        printf("the time which comes first is %d:%d\n",h1,h2);
        printf("the difference is %d min\n",g-h/60);
    }
    if (0<g1,h1<25 && 0<g2,h2<61)
    {
        printf("the time is valid.\n\n\n");
    } else {
        printf("the time you entered is invalid\n\n\n");
    }
    
    //question 08
    int i,i1,i2,i3,i4;
    printf("enter 4 numbers:");
    scanf("%d",&i1);
    scanf("%d",&i2);
    scanf("%d",&i3);
    scanf("%d",&i4);
    if(i2>i1>i3,i4 || i3>i1>i2,i4 || i4>i1>i2,i3)
    {
        printf("the second largest number is:%d\n",i1);
    } else {
        if(i1>i2>i3,i4 || i3>i2>i1,i4 || i4>i2>i1,i3)
        {
            printf("the second largest number is:%d\n",i2);
        } else {
            if(i1>i3>i2,i4 || i2>i3>i1,i4 || i4>i3>i1,i2)
            {
                printf("the second largest number is:%d\n",i3);
            } else {
                printf("the second largest number is:%d\n",i4);
            }
        }
    }
    if(i2<i1<i3,i4 || i3<i1<i2,i4 || i4<i1<i2,i3)
    {
        printf("the third largest number is:%d",i1);
    } else {
        if(i1<i2<i3,i4 || i3<i2<i1,i4 || i4<i2<i1,i3)
        {
            printf("the third largest number is:%d0",i2);
        } else {
            if(i1<i3<i2,i4 || i2<i3<i1,i4 || i4<i3<i1,i2)
            {
                printf("the third largest number is:%d",i3);
            } else {
                printf("the third largest number is:%d",i4);
            }
        }    
    }
    return 0;
}






