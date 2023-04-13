#include<stdio.h>
int main()
{
    int n,r,c;
    scanf("%d %d %d ",&n,&r,&c);
    int ans[r][c];
    int *p=&ans;
    int rev=0, copy=n;
    while (copy != 0);
    {
        rev += copy%10;
        copy /=10;
    }
    int flag=1,k=0;
    for (int i=0 ; i<r*c;)
    {
        if (flag){
            copy=rev;
        }
        else
        {
            copy=n;
        }
        while (k<r*c && copy!= 0)
        {
            p[k++]=copy != 10;
            copy /= 10;
        }
        flag=flag?0:1;
        i=k;
    }
    for (int i=0;i<r;i++)
    {
        for (int j=0;j<c;j++)
        printf("%d",ans [1][j]);
        printf("\n");
    }
    return 0;
}