#include <stdio.h>

int main() {
    int hours;
    char gender;
    int totalSalary = 0;

    printf("Enter gender (M for Male, F for Female): ");
    scanf(" %c", &gender);

    printf("Enter number of hours worked: ");
    scanf("%d", &hours);

    if (hours <= 0) {
        printf("Invalid hours");
    }
    else {
        if (hours <= 8) {
            if (gender == 'M' || gender == 'm')
                totalSalary = hours * 80;
            else if (gender == 'F' || gender == 'f')
                totalSalary = hours * 60;
            else {
                printf("Invalid gender");
                return 0;
            }
        }
        else {
            // First 8 hours
            if (gender == 'M' || gender == 'm')
                totalSalary = 8 * 80;
            else if (gender == 'F' || gender == 'f')
                totalSalary = 8 * 60;
            else {
                printf("Invalid gender");
                return 0;
            }

            // Extra hours
            totalSalary = totalSalary + (hours - 8) * 100;
        }

        printf("Total Salary = Rs.%d", totalSalary);
    }

    return 0;
}
