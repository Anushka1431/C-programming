// Write a program to reverse an array with an auxiliary array. 


#include <stdio.h>
#define N 1000

int main()
{
    int arr[N];

    int n;
    // Inputting the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Inputting the array
    printf("Enter an array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rarr[N];
    // Reversing the array using an auxiliary array
    for (int i = 0; i < n; i++)
    {
        rarr[i] = arr[n - i - 1];
    }

    // Copying the reversed array to the original array
    for(int i=0; i<n; i++){
        arr[i] = rarr[i];
    }

    // Printing the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// reverse array in c
// reverse an array in c
