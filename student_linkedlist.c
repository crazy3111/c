#include<stdio.h>
#include<stdlib.h>
struct sefRefStu

{
    int reNO;
    float cgpa;
    char name[15];
    struct selRefStu*next_student;
}*current_student=NULL;
void main(){
    current_student=(struct sefRefStu*)malloc(sizeof(struct sefRefStu));
    if(current_student=NULL)
    {
        printf("memory failed");

    }
    else{
        printf("\n%d byete",sizeof(struct sefRefStu));
        printf("\n%d",current_student);
        printf("\n enter reg no");
        scanf("%d",&current_student->reNO);
        printf("cgpa");
        scanf("%f",&current_student->cgpa);

    }
}
