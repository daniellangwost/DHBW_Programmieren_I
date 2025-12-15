#include <stdio.h>

void printRoadRow(int choice);
void printEmptyRoadRow();

int main()
{
    // definitions and declarations
    enum LaneAssociationType
    {
        LeftLane = 1,
        CenterLane = 2,
        RightLane = 3,
        UnknownLane = 4
    };

    float speed;
    int choice;
    enum LaneAssociationType currentLane;

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
    printRoadRow(choice);
    printEmptyRoadRow();

    return 0;
}

void printRoadRow(int choice)
{
    if (choice == 1)
        printf("       |        X        |                 |                 |\n");
    else if (choice == 2)
        printf("       |                 |        X        |                 |\n");
    else if (choice == 3)
        printf("       |                 |                 |        X        |\n");
    else
        printf("       |                 |                 |                 |\n");

}

void printEmptyRoadRow()
{
    printf("       |                 |                 |                 |\n");
}