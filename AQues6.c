#include<stdio.h>
#include<string.h>
int rev(char s[],int i,int n)
{
    if(i<=(n-i-1))
    {
        char temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
        rev(s,i+1,n);
    }
    return 0;
}
int main()
{
    char s[100];
    scanf("%s",s);
    rev(s,0,strlen(s));
    printf("%s",s);
    return 0;
}
