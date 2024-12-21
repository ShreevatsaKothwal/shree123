#include <stdio.h>
int main(){

    int m,n,p,q;
    
    printf("Enter row & col of matrix 1:");
    scanf("%d %d",&m,&n);

    printf("Enter row & col of matrix 2:");
    scanf("%d %d",&p,&q);
    int a[m][n],b[p][q],c[m][q];
    if(n!=p){
        printf("Multiplication is not possible!");
    }
    else{
        

        printf("Input elements of matrix 1:");
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                scanf("%d ",&a[i][j]);
            }
            printf("\n");
        }


        printf("Input elements of matrix 2:");
        for (int i=0;i<p;i++){
            for (int j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
            printf("\n");
        }

        //Multiplication

        for (int i=0;i<m;i++){
            for (int j=0;j<q;j++){
                c[i][j] = 0;
                for (int k=0;k<n;k++){
                    c[i][j] += a[i][k] * b[k][j]; 
                }
            }
        }

    }

    

     printf("Resultant Matrix:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) { 
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }






