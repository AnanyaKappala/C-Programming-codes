#include <stdio.h>
 
int main()
{
   //Question 01
   int a1,a2,*a3,*a4,a5;
   printf("Enter the values-");
   scanf("%d%d",&a1,&a2);
   a3=&a1;
   a4=&a2;
   a5=*a4;
   *a4=*a3;
   *a3=a5;
   printf("Swapped values\na = %d\nb = %d\n",a1,a2);
   printf("\n\n\n");

   //Question 02
   int b[5],b1,*b2,b3;
   for(b1=0;b1<=4;b1++)
   {
       printf("enter value-");
       scanf("%d",&b[b1]);
   }
   for(b1=0;b1<=4;b1++)
   {
       printf("%d",b[b1]);
   }
   printf("\n");
   b2=&b[2];
   printf("\nenter a new value-");
   scanf("%d",&b3);
   *b2=b3;
   for(b1=0;b1<=4;b1++)
   {
       printf("%d",b[b1]);
       
   }
   printf("\n\n\n");
   return 0;
}
