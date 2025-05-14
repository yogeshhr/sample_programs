#include <cs50.h>
#include <stdio.h>

int max_of_array(int arr[], int size);

int main(void)
{
    int arr[3];

    // Asking the user to input three numbers
    for (int i = 0; i < 3; i++)
    {
        arr[i] = get_int("Enter number %d: ", i + 1);
    }

    printf("The maximum of the array is %d\n", max_of_array(arr, 3));
}

int max_of_array(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
