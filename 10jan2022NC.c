#include<stdio.h>
float average(int a, int b, int c);
int main()
{
    int x,y,z;
    printf("x: ");
    scanf("%d",&x);
     printf("y: ");
    scanf("%d",&y);
     printf("z: ");
    scanf("%d",&z);
    printf("average of x,y,z is-  %f",average(x,y,z));
   return 0;
}
float average(int a, int b, int c)
{
    float result;
    result=(a+b+c)/3;
    return result;
}
#include<stdio.h>
void fibonacciSeries(int range)
{
    int a=0,b=1,c;
    while(a<=range)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int range;
    printf("enter range:");
    scanf("%d",&range);
    printf("the fibonacci series is:\n");
    fibonacciSeries(range);
    return 0;
}

#include <stdio.h>

int fact(int n){
    int p=1;
    for(int i=2;i<=n;i++)
        p*=i;
    return p;
}
int main(void) {
    int n;
    scanf("%d",&n);
    int s=0;
    for(int i=1;i<=n;i++){
        if(i%2)
            s+=fact(i);
        else
            s+=1/fact(i);
    }
    printf("%d",s);
	return 0;
}
#include <stdio.h>
void print_ch(char ch,int row,int col){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++)
            printf("%c",ch);
        printf("\n");
    }
}
int main(void) {
	print_ch('-',2,3);
	printf("AB\n");
	print_ch('=',3,6);
	printf("DF\n");
	print_ch('*',3,2);
	return 0;
}
#include <stdio.h>
int AM(int a,int b, char c)
{
    int z;
    if(c=='+')
    {
        z = a+b;    
    }
    if(c=='*')
    {
        z= a*b;
    }
    return z;
}

int main()
{
    int a,b;
    char c = '*';
    printf("\nEnter the 1st number : ");
    scanf("%d",&a);
    printf("\nEnter the 2nd number : ");
    scanf("%d",&b);
    printf("The required answer is %d", AM(a,b,c));
    

    return 0;
}
#include <stdio.h>

int avg(int a,int b,int c){
    return (a+b+c)/3;
}
int main(void) {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",avg(a,b,c));
	return 0;
}

//******Question No.7******
#include <stdio.h>
char pattern(int n,char c)
{
    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
}
int main()
{
    char ch; int n;
    printf("Enter the character you want to print : ");
    scanf("%c",&ch);
    printf("\nEnter a number for rows and columns : ");
    scanf("%d",&n);
    pattern(n,ch);
    return 0;
}