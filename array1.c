//Write a program to find the largest and smallest element in an array. 

#include<stdio.h>
int main()
{
    int a[50], i, n, largest, smallest;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(i=0;i<n;++i)
    scanf("%d",&a[i]);
    largest=smallest=a[0];
    for(i=0;i<n;++i)
    {
        if(a[i]>largest)
        largest=a[i];
        if(a[i]<smallest)
        smallest=a[i];
    }
    printf("the largest element is : %d \n",largest);
    printf("the smallest element is : %d",smallest);
    
    return 0;
}