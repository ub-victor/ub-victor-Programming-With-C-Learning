#include <stdio.h>

int main() {
    char firstName[50], middleName[50], lastName[50];
    int age, id;
    char goals[3][100];

    printf("Enter your first name: ");
    scanf("%49s", firstName);

    printf("Enter your middle name: ");
    scanf("%49s", middleName);

    printf("Enter your last name: ");
    scanf("%49s", lastName);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your ID: ");
    scanf("%d", &id);

    getchar(); // Clear newline left by previous scanf

    for (int i = 0; i < 3; i++) {
        printf("Enter goal #%d for this semester: ", i + 1);
        fgets(goals[i], sizeof(goals[i]), stdin);
        // Remove newline character from fgets
        size_t len = strlen(goals[i]);
        if (len > 0 && goals[i][len - 1] == '\n') {
            goals[i][len - 1] = '\0';
        }
    }

    printf("\nYour name is: %s %s %s\n", firstName, middleName, lastName);
    printf("Your age is: %d\n", age);
    printf("Your ID is: %d\n", id);
    printf("Your goals for this semester are: %s, %s, %s\n", goals[0], goals[1], goals[2]);
    printf("Thank you for visiting us\n");

    return 0;
}