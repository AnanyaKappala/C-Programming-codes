#include <stdio.h>

int main(void) {
	int a[5]={1,2,3,4,5};
	int *p=&a[0];
	for(int i=0;i<5;i++)
	    printf("%d\t",*(p+i));
	
	return 0;
}
#include <stdio.h>

int main(void) {
	int a[5]={1,2,3,4,5};
	int *p=&a[4];
	for(int i=0;i<5;i++){
	    printf("%d\t",*p);
	    p--;
	}
	return 0;
}
#include <stdio.h>

int main(void) {
    int a[10];
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    int *p=&a[0],*q=&a[5];
    for(int i=0;i<5;i++){
        int temp=p[i];
        p[i]=q[i];
        q[i]=temp;
    }
    
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
	return 0;
}
#include <stdio.h>

int main(void) {
	char s[20];
	char *a=&s[4],*b=&s[8],*c=&s[12],*d=&s[16];
	scanf("%s%s%s%s%s",s,a,b,c,d);
	//printf("%s\t%s\t%s\t%s\t%s",s,a,b,c,d);
	for(int i=1;i<=5;i++){
	    for(int j=0;j<4;j++){
	        if(i==1)
	            printf("%c",s[j]);
	        else if(i==2)
	            printf("%c",a[j]);
	        else if(i==3)
	            printf("%c",b[j]);
	        else if(i==4)
	            printf("%c",c[j]);
	       else
	        printf("%c",d[j]);
	    }
	    printf("\n");
	}
	return 0;
}
#include <stdio.h>

int main(void) {
	int a[3][3]={
	    {1,2,3},
	    {4,5,6},
	    {7,8,9}
	};
	int *p=&a[0][0];
	for(int i=0;i<9;i++)
	    printf("%d  ",p[i]);
	printf("\n");
	for(int i=8;i>=0;i--)
	    printf("%d  ",p[i]);
	return 0;
}