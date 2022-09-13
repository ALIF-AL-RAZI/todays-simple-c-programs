#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    char city[50];
    int student_id;
};
int main()

{
    struct student stdnt1, stdnt2,stdnt3,stdnt4,stdnt5;


    strcpy(stdnt1.name,"ACB");
    stdnt1.student_id=136;
    strcpy(stdnt1.city,"Barishal");

    strcpy(stdnt2.name,"ABC");
    stdnt2.student_id=125;
    strcpy(stdnt2.city,"Sylhet");

    strcpy(stdnt3.name,"DEF");
    stdnt3.student_id=115;
    strcpy(stdnt3.city,"Dhaka");

    strcpy(stdnt4.name,"DSM");
    stdnt4.student_id=104;
    strcpy(stdnt4.city,"Chittagong");

    strcpy(stdnt5.name,"CBA");
    stdnt5.student_id=123;
    strcpy(stdnt5.city,"Rajshahi");

    printf("Name\t|\tStudent Id\t|\tCity");
    printf("\n------------------------------------------------------");
    printf("\n%s\t|\t%d\t\t|\t%s",stdnt1.name,stdnt1.student_id,stdnt1.city);
    printf("\n------------------------------------------------------");
    printf("\n%s\t|\t%d\t\t|\t%s",stdnt2.name,stdnt2.student_id,stdnt2.city);
    printf("\n------------------------------------------------------");
    printf("\n%s\t|\t%d\t\t|\t%s",stdnt3.name,stdnt3.student_id,stdnt3.city);
    printf("\n------------------------------------------------------");
    printf("\n%s\t|\t%d\t\t|\t%s",stdnt4.name,stdnt4.student_id,stdnt4.city);
    printf("\n------------------------------------------------------");
    printf("\n%s\t|\t%d\t\t|\t%s",stdnt5.name,stdnt5.student_id,stdnt5.city);
    printf("\n------------------------------------------------------\n\n");


    return 0;

}
