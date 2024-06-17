#include <stdio.h>
#include <string.h>

struct student
{
    char name[10];
    float gpa;
};

int main()
{
    struct student student1 = {"Carlo", 9.0};
    struct student student2 = {"Victor", 4.0};
    struct student student3 = {"Andrew", 8.0};
    struct student student4 = {"Sara", 6.0};

    struct student students[] = {student1, student2, student3, student4};
    
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%s \n", students[i].name);
        printf("%.1f \n", students[i].gpa);
        printf("\n");

    }
    return 0;
}