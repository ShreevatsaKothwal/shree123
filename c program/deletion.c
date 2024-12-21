#include <stdio.h>

int main() {
    int n, index;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements in the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    
    printf("Enter index :");
    scanf("%d",&index);

    for(int i = index; i<n ; i++){
        arr[i] = arr[i+1];
    }



    printf("Updated array: ");
    for (int i = 0; i < n -1 ; i++) {
        printf("%d ", arr[i]);
    }




    return 0;
}
