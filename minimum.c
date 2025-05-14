#include <cs50.h>
#include <stdio.h>

int min_of_array(int arr[], int size);

int main(void)
{
    int arr[3];

    // Asking the user to input three numbers

    for (int i=0; i<3; i++)
    {

        arr[i]=get_int("Enter number %d: ",i+1);
    }
    printf("The minimum of the array is %d\n", min_of_array(arr, 3));
}

int min_of_array(int arr[], int size)
{
    int min = arr[0];
    for(int i=1; i<size; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

