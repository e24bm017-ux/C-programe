#include <stdio.h>

int main() {
    int steps;
    float time, speed;

    printf("Enter number of steps taken: ");
    scanf("%d", &steps);

    printf("Enter time taken (in minutes): ");
    scanf("%f", &time);

    if (time <= 0) {
        printf("Invalid time");
    }
    else {
        speed = steps / time;   // steps per minute

        printf("Steps per minute: %.2f\n", speed);

        if (speed < 50)
            printf("Fitness Level: Low");
        else if (speed >= 50 && speed < 100)
            printf("Fitness Level: Moderate");
        else
            printf("Fitness Level: High");
    }

    return 0;
}
