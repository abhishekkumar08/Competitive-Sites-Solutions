#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
};

int main()
{
    struct student obj;
    printf("Enter information of student:\n");

    // storing information
    printf("\nFor roll number\n");
    scanf("%d", &obj.roll);
    printf("Enter first name: ");
    scanf("%s", obj.firstName);
    printf("Enter marks: ");
    scanf("%f", &obj.marks);

    printf("Displaying Information:\n\n");

    // displaying information
    printf("\nRoll number: %d\n", obj.roll);
    printf("First name: ");
    printf("%s\n", obj.firstName);
    printf("Marks: %.1f", obj.marks);
    printf("\n");
    return 0;
}