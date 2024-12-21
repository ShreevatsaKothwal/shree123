#include <stdio.h>
#include <string.h>

struct student {
    int studentRoll;
    char name[20];
    char grade;
    float marks[5];
    float avgMarks;
};


void calculateAvg(struct student *s){
    float totalMarks =0;
    for(int i=0;i<5;i++){
        totalMarks +=s->marks[i];
    }
    s->avgMarks = totalMarks/5;
}



void grade(struct student *s){
    if (s->avgMarks>=90 && s->avgMarks<100){
        s->grade = 'A';
    }
    else if(s->avgMarks>=80 && s->avgMarks<90){
        s->grade = 'B';
    }
    else if(s->avgMarks>=70 && s->avgMarks<80){
        s->grade = 'C';
    }
    else if(s->avgMarks>=60 && s->avgMarks<70){
        s->grade = 'D';
    }
    else{
        s->grade = 'F';
    }
}

int main (){
     
    struct student s[5];
    for(int i=0;i<5;i++){
        printf("Enter student roll:");
        scanf("%d",&s[i].studentRoll);
        printf("Enter name:");
        scanf("%s",s[i].name);

        printf("Enter marks for five subjects:\n");
        for (int j=0;j<5;j++){
            printf("%d----->\n",i+1);
            scanf("%f",&s[i].marks[j]);
        }
        calculateAvg(&s[i]);
        grade(&s[i]);

    }


    printf("Student Info:");
    for (int i=0;i<5;i++){
        printf("Student roll:%d\n",s[i].studentRoll);
        printf("Student name:%s\n",s[i].name);
        printf("Grade:%c\n",s[i].grade);
        printf("Average marks:%f\n",s[i].avgMarks);
    }


    return 0;
}





