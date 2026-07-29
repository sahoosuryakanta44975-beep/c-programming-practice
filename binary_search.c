#include <stdio.h>

int main()
{
    int a[] = {3, 7, 12, 19, 25, 31, 40};
    int n = 7;
    int target;

    printf("Enter target: ");
    scanf("%d", &target);

    int low = 0;
    int high = n - 1;
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == target)
        {
            printf("Found at index %d\n", mid);
            return 0;
        }
        else if(target > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Not Found\n");

    return 0;
}