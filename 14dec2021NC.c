#include<stdio.h>
int main()
{
    //01
    char a[50];
    printf("NAME-");
    scanf("%[^\n]s",a);
    printf("my name is %s.",a);
    printf("\n\n\n");
    char b1[1000],b2[1000];

    //02
    int b3,b4,b5=0;
    printf("enter a string-");
    scanf("%s",b1);
    while(b1[b5]!='\0')
      b5++;
      b4=b5- 1;
      for(b3=0;b3<b5;b3++) 
      {
      b2[b3]=b1[b4];
      b4--;
      }
    b2[b3]='\0';
    printf("the reversed string- %s\n",b2);
    printf("\n\n\n");

    //03
    char c[100];
    int c1,c2=0;
    printf("enter a string-");
    scanf("%s",c);
    c1=0;
    while(c[c1]!='\0')
    {
        if(c[c1]!=' ')
        {
            c2++;
        }
        c1++;
    }
    printf("the position at which null character is present is a[%d]",c2+ 1);
    printf("\n\n\n");

    //04
    char d[100];
    int d1,d2=0;
    printf("enter a string-");
    scanf("%s",d);
    d1=0;
    while(d[d1]!='\0')
    {
        if(d[d1]!=' ')
        {
            d2++;
        }
        d1++;
    }
    printf("the total number of characters in the string are-%d",d2);
    printf("\n\n\n");

    //05
    char e[100];//str
    int e1=0;//i
    printf("enter a string-");
    scanf("%s",e);
    while(e[e1]!='\0')
    {
        printf("character at %d index position is   %c \n",e1,e[e1]);
        e1++;
    }
    printf("\n\n\n");
    return 0;
}