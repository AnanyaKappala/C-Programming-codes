#include <stdio.h>
 int main()
{
   int m,n,*p,*q,r;
   printf("Enter the values\n");
   scanf("%d %d", &m,&n);
   p = &m;
   q = &n;
   r = *q;
   *q = *p;
   *p = r;
   printf("Swapped values\na = %d\nb = %d\n", m,n);
   return 0;
}
#include<stdio.h>
int main()
{
    int a[5],i,*p,x;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    p=&a[2];
    printf("\n enter a new value: ");
    scanf("%d",&x);
    *p=x;
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
int main()
{
    int a, b, *p, *q, t;
    p = &a;
    q = &b;
    printf("\n Enter the value of a : ");
    scanf("%d", p);
    printf("\n Enter the value of b : ");
    scanf("%d", q);
    printf("\n a = %d", *p);
    printf("\n b = %d", *q);
    return 0;
}
#include <stdio.h>
int main()
{
    int a, b,c, *p, *q, *r, max, min; 
    printf("\n Enter the value of a : ");
    scanf("%d", &a);
    printf("\n Enter the value of b : ");
    scanf("%d", &b);
    printf("\n Enter the value of c : ");
    scanf("%d", &c);
    printf("\n a = %d", a); 
    printf("\n b = %d", b);
    printf("\n b = %d", c);
    p=&a;
    q=&b; 
    r=&c;
    if((*p>*q) && (*p>*r))
    max = *p; 
    else if((*q>*p) && (*q>*r))
    max = *q;
    else
    max = *r; 
    if((*p<*q) && (*p<*r))
    min = *p; 
    else if((*q<*p) && (*q<*r)) 
    min = *q;
    else
    min = *r; 
    printf("\n max = %d", max);
    printf("\n min = %d", min);
    return 0;
}
#include <stdio.h>
int main()
{
    int a[5], i, *p, x;
    p = &a[0];
    printf("\n Enter the value of the first element: "); 
    scanf("%d", p);
    for(i=1; i<=4; i++)
    {
        *(p+i)= *(p+i-1) + 2;
        
    }
    printf("\n The new array is: "); 
    for(i=0; i<=4; i++)
    {
        printf("%d ", *(p+i));
    } 
    printf("\n");
    return 0;
}
#include <stdio.h>
int main()
{
    char a[15], *p;
    int i;
    printf("\n Enter a string: ");
    scanf("%s", a);
    p = &a[1];
    printf("\n The string from the second position is: "); 
    printf("\n%s", p);
    return 0;

}