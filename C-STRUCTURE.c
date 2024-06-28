#include<stdio.h>
#include<conio.h>

struct Student
{
    char name[100];
    char address[200];
    int phone_Number;
}S;

int main()
{
    printf("ENTER INFORMATION OF STUDENTS :\n");

printf("ENTER NAME OF THE STUDENTS : \n");
    scanf("%s", S.name);

    printf("ENTER ADDRESS OF THE STUDENTS : \n");
    scanf("%s", S.address);

    printf("ENTER PHONE NUMBER OF THE STUDENTS : \n");
    scanf("%d", &S.phone_Number);
    

    printf("DISPLAYING INFORMATION OF STUDENTS : \n");

    
        printf("NAME OF THE STUDENTS IS :%s \n ", S.name);

        printf("ADDRESS OF THE STUDENTS IS :%s \n ", S.address);

        printf("PHONE NUMBER OF THE STUDENTS IS :%d \n ", S.phone_Number);
    printf("\n");
    
    return 0;
    
}