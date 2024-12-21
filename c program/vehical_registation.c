#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


bool validRegistration (char registration[]){

    if(strlen(registration)!=10){
        return false;
    }

    for(int i=0;i<2;i++){
        if(!isalpha(registration[i])){
            return false;
        }
    }
    for(int i=2;i<4;i++){
        if(!isdigit(registration[i])){
            return false;
        }
    }
    for(int i=4;i<6;i++){
        if(!isalpha(registration[i])){
            return false;
        }
    }
    for(int i=6;i<10;i++){
        if(!isdigit(registration[i])){
            return false;
        }
    }

    return true;
}

int main(){
    char registration[11];
    printf("Enter vehicle registration number:");

    scanf("%s",registration);


    if(validRegistration(registration)){
        printf("Accepted:Vehicle registration");
    }
    else{
        printf("Invalid:Try again");
    }



    return 0;
}

