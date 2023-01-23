//average 

#include<stdio.h>
int main()
{
    int a[10], i, n, sum=0;
    double avg;
    printf("enter size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter elements %d: ", i+1);
    
        scanf("%d", &a[i]);
        sum+=a[i];
    }
        avg=(double)sum/n;
        printf("%.2lf", avg);
    return 0;
}