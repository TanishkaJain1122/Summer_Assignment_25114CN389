//Program to create marksheet generation system
#include <stdio.h>

int main()
{
    int roll;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 5 Subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &m1);
    printf("Subject 2: ");
    scanf("%f", &m2);
    printf("Subject 3: ");
    scanf("%f", &m3);
    printf("Subject 4: ");
    scanf("%f", &m4);
    printf("Subject 5: ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("--------------------------------\n");
    printf("Subject 1 : %.2f\n", m1);
    printf("Subject 2 : %.2f\n", m2);
    printf("Subject 3 : %.2f\n", m3);
    printf("Subject 4 : %.2f\n", m4);
    printf("Subject 5 : %.2f\n", m5);
    printf("--------------------------------\n");
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 75)
        printf("Grade : A\n");
    else if (percentage >= 60)
        printf("Grade : B\n");
    else if (percentage >= 50)
        printf("Grade : C\n");
    else if (percentage >= 33)
        printf("Grade : D\n");
    else
        printf("Grade : F (Fail)\n");

    return 0;
}