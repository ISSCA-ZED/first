#include<stdio.h>
#include<string.h>
int sum(int a[]);
int main()
{
    int a[100];
    memset(a,0  ,sizeof(a));
    int i=0,n=0;
    printf("hello");
    while(total(a)!=99)
    {
        if(i>=100)
            i-=100;
        if(a[i]==0)
            n++;
        if(n==5)
        {
            a[i]=1;
            n=0;
        }
        i++;
    }
    i=0;
    while(i<100)
    {
        if(a[i]==0)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
}
int total(int a[])
{
    int i=0,sum=0;
    while(i<100)
    {
        sum+=a[i];
        i++;
    }
    return sum;

}
