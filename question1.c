//Write the program for finding duplicate elements in array.

#include <stdio.h>

void findDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate Element: %d\n", arr[i]);
            }
        }
    }
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are:\n");
    findDuplicates(arr, size);

    return 0;
}
