/*C program  of conditional statement find grade */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int marks;
    char grade;
    printf("\nEnter your marks : ");
    scanf("%d",&marks);
    if ( marks>=85  &&  marks<=100)
        grade='A';
    else if (marks>=70  &&  marks<=84)
        grade='B';
     else if (marks>=55  &&  marks<=69)
        grade='C';
    else if (marks>=40  &&  marks<=54)
        grade='D';
    else
        grade='F';
    printf("\nYour grade is %c\n",grade);
   system("pause");
	return 10;
}
