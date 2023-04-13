#include <stdio.h>
int main() 
{
	//Question 1
	int a1,a2,*a3,*a4;//a,b,*p,*q
	scanf("%d%d",&a1,&a2);
	a3=&a1;
	a4=&a2;
	int temp=*a3;
	*a3=*a4;
	*a4=temp;
	printf("%d\t%d\n",a1,a2);
	
	//Question 2
	int b1[5];//arr
	for(int i=0;i<5;i++)
	    scanf("%d",&b1[i]);
    a3=&b1[2];
    *a3=0;
    printf("%d\n",b1[2]);
	
	//Question 3
	a3=&a1;
	a4=&a2;
	scanf("%d%d",a3,a4);
	printf("%d\t%d\n",a1,a2);
	
	//Question 4
	int c1,*c2;//c,s
	scanf("%d%d%d",&a1,&a2,&c1);
	a3=&a1;
	a4=&a2;
	c2=&c1;
	int max=*a3,min=*a3;
	if(max<*a4)
	    max=*a4;
	if(max<*c2)
	    max=*c2;
	if(min>*a4)
	    min=*a4;
	if(min>*c2)
	    min=*c2;
	printf("Max: %d\tMin: %d\n",max,min);
	
	//Question 5
	int d1[5];//x
	a3=&d1[0];
	scanf("%d",a3);
	for(int i=1;i<5;i++)
	{
        (a3+i)=(a3+i- 1)+ 2;
	}
	for(int i=0;i<5;i++){
	    printf("%d\t",d1[i]);
	}
	printf("\n");
	
	//Question 6 
	char e1[50];//s
	scanf("%s",e1);
	char *a3=&e1[1];
	while(*a3!='\0')
	{
	    printf("%c",*a3);
	    a3++;
	}
	return 0;
}

