#include<stdio.h>
int main()
{
    //question 01
    int a,b,c,c1,c2,c3,c4,c5,c6,c7,c8;
    printf("enter 2 numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    c=(a<b);
    c1=(a>b);
    c2=(a<=b);
    c3=(a>=b);
    c4=(a!=b);
    c5=(a==b);
    c6=(a<10 && b>5);
    c7=(a>7 || b>0);
    c8=(a>b)?a:b;
    printf("relational operator-\n(a)%d\n(b)%d\n(c)%d\n(d)%d\n(e)%d\n(f)%d\nlogical operator:\n(a)%d\n(b)%d\nbinary operator:%d\n\n\n",c,c1,c2,c3,c4,c5,c6,c7,c8);
    
    //question 02(a)
    int d,e,e1,f,f1,g,g1;
    printf("enter 2 numbers:");
    scanf("%d",&d);
    scanf("%d",&e);
    e1=(d<e)?d:e;
    printf("smallest among 2 numbers (d,e) is:%d\n",e1);
    //question 02(b)
    printf("enter 1 more number :");
    scanf("%d",&f);
    f1=(d<e)?(d<f)?d:f:(e<f)?e:f;
    printf("smallest among 3 numbers (d,e,f) is:%d\n",f1);
    //questin 02(c)
    printf("enter 1 more number:");
    scanf("%d",&g);
    g1=(d<e)?((d<f)?((d<g)?d:g):(f<g)?f:g):(e<f)?((e<g)?e:g):((f<g)?f:g);
    printf("smallest among 4 numbers (d,e,f,g) is:%d\n\n\n",g1);
    
    //question 03
    int h,h1,h2,h3,h4,h5,h6;
    printf("enter 6 numbers:");
    scanf("%d",&h1);
    scanf("%d",&h2);
    scanf("%d",&h3);
    scanf("%d",&h4);
    scanf("%d",&h5);
    scanf("%d",&h6);
    h=(h1>h2)?((h1>h3)?((h1>h4)?((h1>h5)?((h1>h6)?h1:h6):((h5>h6)?h5:h6)):((h4>h5)?((h4>h6)?h4:h6):((h5>h6)?h5:h6))):(h3>h4)?((h3>h5)?((h3>h6)?h3:h6):((h5>h6)?h5:h6)):((h4>h5)?((h4>h6)?h4:h6):((h5>h6)?h5:h6))):((h2>h3)?((h2>h4)?((h2>h5)?((h2>h6)?h2:h6):((h5>h6)?h5:h6)):((h4>h5)?(h4>h6)?h4:h6:((h5>h6)?h5:h6))):((h3>h4)?((h3>h5)?((h3>h6)?h3:h6):((h5>h6)?h5:h6)):((h4>h5)?((h4>h6)?h4:h6):((h5>h6)?h5:h6))));
    printf("the largest number among 6 numbers is:%d\n\n\n",h);
    
    //question 04(a)
    int i,i1,i2,i3,i4,j;
    printf("enter 3 numbers:");
    scanf("%d",&i1);
    scanf("%d",&i2);
    scanf("%d",&i3);
    i=(i1>=i2&&i1>=i3)?((i2>=i3)?i2:i3):((i2>=i3)?((i1>=i3)?i1:i3):((i1>=i2)?i1:i2));
    printf("the second largest number among 3 numbers is:%d\n",i);
    //question 04(b)
    printf("enter 1 more number:");
    scanf("%d",&i4);
    j=
    printf("the second largest number among 4 numbers is:%d\n\n\n",j);
    
    //question 05
    int k,k1,k2,k3,k4,k5,k6;
    printf("enter a four digit integer and enter each digit separately:");
    scanf("%d",&k1);
    scanf("%d",&k2);
    scanf("%d",&k3);
    scanf("%d",&k4);
    k5=k2*k3;
    k6=k1*k3;
    k=(k5*k5==k6);
    printf("verification of (bc)^2=a*d when the number is %d%d%d%d(abcd) is :%d\n\n\n",k1,k2,k3,k4,k);
    
    return 0;
}