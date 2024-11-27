#include <stdio.h>

int Search(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return Search(arr, size, target, index + 1);
}

int main() 
{
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++)
     {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int a = Search(arr, n, target, 0);

    if (a != -1) {
        printf("Element %d found at index %d\n", target, a);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
