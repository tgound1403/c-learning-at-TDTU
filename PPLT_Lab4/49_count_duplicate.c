#include<stdio.h>
#define size 100
int main()
{
    int arr[size];
    int i, j, n, count = 0;

    /* Input n of array */
    printf("Enter n of the array : ");
    scanf("%d", &n);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Find all duplicate elements in array
     */
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}