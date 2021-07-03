#include<stdio.h>

struct student
{
    int roll_no;
    float cgpa;
    char name[25];
}stud[100],t;

void main()
{
    int i,j,n;
    printf("Enter the no of students\n");
    scanf("%d",&n);
    printf("enter student info as roll_no , name , cgpa\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %f",&stud[i].roll_no,stud[i].name,&stud[i].cgpa);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(stud[j].cgpa<stud[j+1].cgpa)
            {
                t=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=t;
            }
            if(stud[j].cgpa==stud[j+1].cgpa){
            if(stud[j].name<stud[j+1].name)
            {
                t=stud[j+1];
                stud[j+1]=stud[j];
                stud[j]=t;
            }
            }

        }
    }

    printf("\nStudent info in terms of marks from highest to lowest\n");
    printf("NAME\n");
    printf("-------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",stud[i].name);
    }
}
