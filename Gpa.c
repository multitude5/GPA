#include<stdio.h>
#include<string.h>
#include<conio.h>

double main(void)
{
    double quiz[4] = {10,10,10,10};
    double assignments[4] = {10,10,10,10};
    double sessional_1 = 10;
    double sessional_2 = 15;
    double finals = 50;
    double total_marks ;
    double t_quiz,t_assignment;
    double gpa;
    char grade[5] = "";

    for (int i=0 ; i < 4 ; i++)
    {
        t_quiz = t_quiz + quiz[i];
        t_assignment = t_assignment + assignments[i];
    }

    t_quiz = t_quiz/40 * 10 ;

    t_assignment = t_assignment * 0.375;


    total_marks = t_quiz + t_assignment + sessional_1 + sessional_2 + finals ;
    printf("%lf",total_marks);
    int total_marks = 90.99;


    if(total_marks >= 90.00)
    {
        strcat(grade,"A");
        gpa = 4;
    }
    else if (total_marks >= 85 )
    {
        strcat(grade,"A-");
        gpa = 3.7;
    }
    else if (total_marks >= 80 )
    {
        strcat(grade,"B+");
        gpa = 3.3;
    }
    else if (total_marks >= 75 )
    {
        strcat(grade,"B");
        gpa = 3.0;
    }
    else if (total_marks >= 70 )
    {
        strcat(grade,"  B-");
        gpa = 2.7;
    }
    else if (total_marks >= 65 )
    {
        strcat(grade,"C+");
        gpa = 2.3;
    }
    else if (total_marks >= 60 )
    {
        strcat(grade,"C");
        gpa = 2.0;
    }
    else if (total_marks >= 55 )
    {
        strcat(grade,"C-");
        gpa = 1.7;
    }
    else if (total_marks >= 50 )
    {
        strcat(grade,"D");
        gpa = 1.3;
    }
    else
    {
        strcat(grade,"F");
        gpa = 0.0;
    }
    printf("%s",grade);
    printf("%f",gpa);


}
