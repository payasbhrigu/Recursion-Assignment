#include<stdio.h>
int func(int a[],int m,int n)
{
    if(n<0)
        return -1;
    int y=(a[n]>m)?a[n]:m;
    int x=func(a,y,n-1);
    return (y>x)?y:x;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",func(a,0,n-1));
    return 0;
}
