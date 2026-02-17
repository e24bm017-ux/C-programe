#include <stdio.h>

int main() {
    int day;
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    if (day < 1 || day > 7) {
        printf("Invalid input");
    }
    else {
        // Day name
        switch(day) {
            case 1: 
                printf("Day: Monday\n");
                printf("Type: Weekday");
                break;
            case 2: 
                printf("Day: Tuesday\n");
                printf("Type: Weekday");
                break;
            case 3: 
                printf("Day: Wednesday\n");
                printf("Type: Weekday");
                break;
            case 4: 
                printf("Day: Thursday\n");
                printf("Type: Weekday");
                break;
            case 5: 
                printf("Day: Friday\n");
                printf("Type: Weekday");
                break;
            case 6: 
                printf("Day: Saturday\n");
                printf("Type: Holiday");
                break;
            case 7: 
                printf("Day: Sunday\n");
                printf("Type: Holiday");
                break;
        }
    }

    return 0;
}
