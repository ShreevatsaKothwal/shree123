#include<stdio.h>
int main(){
    int i,j,temp;
    int arr[7] = {5,6,8,2,3,1,9};

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }



    return 0;
}

