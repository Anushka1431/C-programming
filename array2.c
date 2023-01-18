//Write a program to find the sum of odd index numbers in an array. 

#include<stdio.h>
int main()
{
    int a[10], i, sum=0;
    printf("enter elements of array (max 10): ");
    for(i=0;i<5;i++)
    scanf("%d", &a[i]);
    for(i=0;i<5;i++)
    {
        if(a[i]%2==1)
        sum=sum+a[i];

    }
    printf("sum of odd index numbers in your array is : %d ", sum);

    return 0;
}