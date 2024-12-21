#include <stdio.h>

int main() {
    int n, val, index;

    
    printf("Enter size of array: ");
    scanf("%d", &n);

   
    int arr[n + 1];  
   
    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter index to insert at: ");
    scanf("%d", &index);

    
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];  
    }

    
    arr[index] = val;

    
    printf("Updated array: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
