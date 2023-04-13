#include<stdio.h>
int main()
{
   //question 01
   int a1,a2;
   printf("enter a year (using switch case):");
   scanf("%d",&a1);
   a2=((a1%4==0)&&((a1%400==0)||(a1%100!=0)));
   switch(a2)
   {
       case 1:printf("it is a leap year\n");break;
       case 0:printf("it is not a leap year\n");break;
       default:printf("enter a valid year\n");
   }
   int a;
   printf("enter a year (using if else):");
   scanf("%d",&a);
   if (a%400==0)
   {
      printf("%d is a leap year\n\n\n",a);
   } else if (a%100==0) {
      printf("%d is not a leap year\n\n\n",a);
   } else if (a%4==0) {
      printf("%d is a leap year\n\n\n",a);
   } else {
      printf("%d is not a leap year\n\n\n",a);
   }
   
   //question 02
   int b1,b2,b3;
    printf("enter a date:");
    scanf("%d/%d/%d",&b1,&b2,&b3);
    switch(b2)
    {
        case 1:b2=1;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1);break;
        case 2:b2=2;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 31);break;
        case 3:b2=3;
        if(b3%400==0)
        {
            printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 60);
        } else if(b3%100==0) {
            printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 59);
        } else (b3%4==0); {
            printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 60);
        }
        break;
        case 4:b2=4;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 90);break;
        case 5:b2=5;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 121);break;
        case 6:b2=6;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 151);break;
        case 7:b2=7;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 181);break;
        case 8:b2=8;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 212);break;
        case 9:b2=9;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 243);break;
        case 10:b2=10;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 273);break;
        case 11:b2=11;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 304);break;
        case 12:b2=12;printf("number of days (from 1st Jan of that year)=%d\n\n\n",b1+ 334);break;
    }
    
    //question 03
    int c,c1,c2,d,d1,d2;
    printf("enter time 1-");
    scanf("%d:%d",&c1,&c2);
    printf("enter time 2-");
    scanf("%d:%d",&d1,&d2);
    c=c1*60+c2;
    d=d1*60+d2;
    switch(c)
    {
        case 1:c>d;
        printf("the difference in time is %d min\n\n\n",c-d);break;
        case 2:c<d;
        printf("the difference in time is %d min\n\n\n",d-c);break;
        case 3:c,d>1440;
        printf("the times you entered are invalid\n\n\n");break;
        default:printf("the time you entered in invalid\n\n\n");break;
    }
    
    //qusetion 04
    int e1,e2;
    printf("enter a two digit number-");
    scanf("%d%d",&e1,&e2);
    switch(e1)
    {
        case 1:e1=10;printf("ten");break;
        case 2:e1=2;printf("twenty\t");break;
        case 3:e1=3;printf("thirty\t");break;
        case 4:e1=4;printf("forty\t");break;
        case 5:e1=5;printf("fifty\t");break;
        case 6:e1=6;printf("sixty\t");break;
        case 7:e1=7;printf("seventy\t");break;
        case 8:e1=8;printf("eighty\t");break;
        case 9:e1=9;printf("ninety\t");break;
        default:printf("the number you have entered is not valid\t");
    }
    switch(e2)
    {
        case 0:e2=0;break;
        case 1:e2=1;printf("one\n\n\n");break;
        case 2:e2=2;printf("two\n\n\n");break;
        case 3:e2=3;printf("three\n\n\n");break;
        case 4:e2=4;printf("four\n\n\n");break;
        case 5:e2=5;printf("five\n\n\n");break;
        case 6:e2=6;printf("six\n\n\n");break;
        case 7:e2=7;printf("seven\n\n\n");break;
        case 8:e2=8;printf("eight\n\n\n");break;
        case 9:e2=9;printf("nine\n\n\n");break;
        default:printf("the number you have entered is not valid\n\n\n");
    }
    
    //question 05(a)
    int f1,f2,f3;
    printf("cost of item 1:");
    scanf("%d",&f1);
    printf("cost of item 2:");
    scanf("%d",&f2);
    printf("cost of item 3:");
    scanf("%d",&f3);
    int totalamount=f1+f2+f3;
    printf("item\tamount\t\n");
    printf("item1\t%d\n",f1);
    printf("item2\t%d\n",f2);
    printf("item3\t%d\n",f3);
    printf("---------------\n");
    printf("total\t%d\n",totalamount);
    
    int g1,g2,g3;
    g1=totalamount*30/100;
    g2=totalamount*20/100;
    g3=totalamount*10/100;
    switch(totalamount) 
    {
        case 1:totalamount>5000;printf("discount (30):%d\npayment\t%d\n\n\n",g1,totalamount-g1);break;
        case 2:totalamount>3000;printf("discount (20):%d\npayment\t%d\n\n\n",g2,totalamount-g2);break;
        case 3:totalamount>1000;printf("discount (10):%d\npayment\t%d\n\n\n",g3,totalamount-g3);break;
        default: printf("no discount");
    }

    //question 05(b)
    int h,h1,h2,h3,i1,i2;
    printf("enter price of item 1-");
    scanf("%d",&h1);
    printf("enter price of item 2-");
    scanf("%d",&h2);
    printf("enter price of item 3-");
    scanf("%d",&h3);
    printf("\nITEMS\t  AMOUNT\tDISCOUNT\tFINAL AMOUNT\n");
    switch(i1)
    {
        case 1:h1>3000;i1=h1*5/100;break;
        case 2:h2>2000,i1=h1*2/100;break;
        case 3:h3>1000,i1=h1*1/100;break;
        default:i1=0;
    }
    printf("item 1\t   %d\t\t    %d\t\t    %d\n",h1,i1,h1-i1);
    printf("item 2\t   %d\t\t    %d\t\t    %d\n",h2,i1,h2-i1);
    printf("item 3\t   %d\t\t    %d\t\t    %d\n",h3,i1,h3-i1);
    printf("----------------------------------------------------\n");
    h=(h1-i1)+(h2-i1)+(h3-i1);
    printf("\t\t\t\tTOTAL       %d\n",h);
    switch(h)
    {
        case 1:h>5000;i2=h*30/100;
        case 2:h>3000;i2=h*20/100;
        case 3:h>1000;i2=h*10/100;
        default:i2=0;
    }
    printf("\t\t\t\tDISCOUNT    %d\n",i2);
    printf("----------------------------------------------------\n");
    printf("\t\t\t\tPAYMENT     %d\n\n",h-i2);
    printf("\t\tT H A N K     Y O U\t\t\n\n\n");
   
   return 0;
}



