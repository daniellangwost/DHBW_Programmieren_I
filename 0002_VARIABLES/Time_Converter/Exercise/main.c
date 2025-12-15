#include <stdio.h>

int main()
{
    // definitions and declarations
    float millisconds = 0.0F;
    float seconds, minutes, hours, days;

    // input
    printf("Please enter a millisecond value: ");
    scanf("%f", &millisconds);

    // computation
    seconds = millisconds / 1000;
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;

    // output
    printf("seconds: %f\n", seconds);
    printf("minutes: %f\n", minutes);
    printf("hours: %f\n", hours);
    printf("days: %f\n", days);

    return 0;
}