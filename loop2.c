// Write a program to print the Fibonacci number.
 
#include <stdio.h>

int main()
{
    int n, i;
    int t1=0, t2=1;
    int nextterm=t1+t2;
    printf("enter a number:");
    scanf("%d", &n);
    printf("fibonacci series: %d, %d, ",t1,t2);
    
    for(i=3;i<=n;++i)
    {
        printf("%d ", nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;

    }
    return 0;
}



