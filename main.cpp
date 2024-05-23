#include <stdio.h>
#include "queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - Add a number to the queue (Push)\n");
    printf("2 - Read the first value from the TOP\n");
    printf("3 - Delete a value from the queue (POP)\n");
    printf("4 - Check if the queue is empty\n");
    printf("5 - Check if the queue is full\n");
    printf("6 - Exit the program\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("Queue- implementation in a static array\n");
    while (1)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                if ( !isQueueFull() ){
                    printf("Enter a value: ");
                    scanf("%d", &temp);
                    Add(temp);
                }
                else {
                    printf("Action not allowed, the queue is full!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = First();
                    printf("The read value: %d", temp);
                }
                else {
                    printf("Action now allowed, the queue is empty!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Remove();
                    printf("The read value: %d", temp);
                }
                else {
                    printf("Action now allowed, the queue is empty!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("The queue is empty.\n");
                }
                else {
                    printf("The queue is NOT empty.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("The queue is full.\n");
                }
                else {
                    printf("The queue is NOT full.\n");
                }
                break;

            case 6:

                return 0;

            default:
                printf("Choose a right option.\n\n");
                break;
        }
    }

    return 0;
}