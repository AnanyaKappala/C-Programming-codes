#include <stdio.h>

int main(void) 
{
	//Question 03
    int a1[5][5];
	int c=1;
	for(int i=0;i<5;i++){
	    for(int j=0;j<5;j++)
	        a1[i][j]=c++;
	}
	int a=0,b=0;
	for(int i=0;i<5;i++){
	    int spaces=i<=2?2-i:i-2;
	    for(int j=1;j<=spaces;j++)
	        printf(" ");
	    a=i<=2?2-i:i-2;
	    b=i<=2?2+i:2+(4-i);
	    for(;a<=b;a++)
	        printf("/");
	}
	return 0;
}
