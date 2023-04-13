#include<stdio.h>
int main()
{
    //question 01
    int a,a1,a2,a3,a4;
    printf("enter a number :");
    scanf("%x",&a);
    a1=a&0x000000ff;
    a2=a&0x0000ff00;
    a3=a&0x00ff0000;
    a4=a&0xff000000;
    int result1=a1|a2|a3|a4;
    printf("original,byte1,byte2,byte3,byte4 for an integer are %x,%x,%x,%x,%x respectively.\n\n\n",a,a1,a2,a3,a4);
    
    //question 03
    int b,b1,b2,b3,b4;
    printf("enter a number :");
    scanf("%x",&b);
    b1=b&0x000000ff;
    b2=(b&0x0000ff00)<<4;
    b3=(b&0x00ff0000)>>4;
    b4=b&0xff000000;
    int result3=b1|b2|b3|b4;
    printf("byte1,byte3,byte2,byte4 are %x respectively.\n\n\n",result3);

    //question 04
    int c,c1,c2,c3,c4;
    printf("enter a number :");
    scanf("%x",&c);
    c1=(c&0x000000ff)<<8;
    c2=(c&0x0000ff00)<<4;
    c3=(c&0x00ff0000)>>4;
    c4=(c&0xff000000)>>8;
    int result4=c1|c2|c3|c4;
    printf("byte1,byte2,byte3,byte4 are %x respectively.\n\n\n",result4);
    
    //question 05
    int d,d1,d2,e,e1,e2;
    printf("enter an integer1 space and integer2:");
    scanf("%d",&d);
    scanf("%d",&e);
    d1=d&0x00ff;
    d2=d&0xff00;
    e1=e&0x00ff;
    e2=e&0xff00;
    int result5=d1|d2|e1|e2;
    printf("byte1a,byte2b,byte2a,byte1b are %x respectively.\n\n\n",result5);
    
    return 0;
}
