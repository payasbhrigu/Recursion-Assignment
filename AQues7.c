#include<stdio.h>
#include<string.h>
int rev(char s[],int i,int n)
{
    if(i>n-i-1)
        return 1;
    int y;
    if(s[i]==s[n-i-1])
        {
            y=1;
            y=rev(s,i+1,n);
        }
    else y=0;
    return y;
}
int main()
{
    char s[100];
    scanf("%s",s);
    int y=rev(s,0,strlen(s));
    printf("%d",y);
    return 0;
}
