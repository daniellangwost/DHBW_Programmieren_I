#include <stdio.h>

typedef enum
{
    LeftLane = 1,
    CenterLane = 2,
    RightLane = 3,
    UnknownLane = 4
} LaneAssociationType;

void printRoadRow(LaneAssociationType lane);
void printEmptyRoadRow();

int main()
{
    // definitions and declarations
    float speed;
    int choice;
    LaneAssociationType currentLane;

    // input
    printf("Create the properties of a vehicle.\n");
    printf("Speed in m/s: ");
    scanf("%f", &speed);
    printf("Lane (1=Left, 2=Center, 3=Right): ");
    scanf("%d", &choice);
    currentLane = choice >= 1 && choice <= 3 ? choice : 4;

    // output
    printf("                L                 C                 R         \n");
    printEmptyRoadRow();
    printRoadRow(currentLane);
    printEmptyRoadRow();

    return 0;
}

void printRoadRow(LaneAssociationType choice)
{
    if (choice == LeftLane)
        printf("       |        X        |                 |                 |\n");
    else if (choice == CenterLane)
        printf("       |                 |        X        |                 |\n");
    else if (choice == RightLane)
        printf("       |                 |                 |        X        |\n");
    else
        printf("       |                 |                 |                 |\n");

}

void printEmptyRoadRow()
{
    printf("       |                 |                 |                 |\n");
}