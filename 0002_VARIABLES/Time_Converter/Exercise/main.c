#include <stdio.h>

int main()
{
    float millisconds = 0.0F;
    float seconds, minutes, hours, days;

    printf("Please enter a millisecond value: ");
    scanf("%f", &millisconds);

    seconds = millisconds / 1000;
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;

    printf("seconds: %f\n", seconds);
    printf("minutes: %f\n", minutes);
    printf("hours: %f\n", hours);
    printf("days: %f\n", days);

    return 0;
}