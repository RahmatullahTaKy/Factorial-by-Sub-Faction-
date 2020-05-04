#include<stdio.h>
#include<conio.h>
int factorial();
int factorial()
{
    long int i,n,f=1;
    printf("Enter your number");
    scanf("%ld",&n);
    if(n==0)
    printf("Result is %ld",f);
    else
    {
        for(i=2;i<=n;i++)
        {
            f=f*i;
        }
    printf("Result is %ld",f);
    }
    
}
int main()
{
    factorial();
    return 0;
}