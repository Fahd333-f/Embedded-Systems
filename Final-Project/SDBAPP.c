#include "STD.h"
#include "SDB.h"
#include <stdio.h>

void SDB_action(uint8 choice)
/*
 * Function: SDB_action
 *
 * How it works:
 * This function acts as the main dispatcher. It takes the user's
 * choice and uses a switch-case statement to call the required
 * backend function. It also handles necessary user inputs, like
 * asking for a specific ID before calling Read or Delete functions.
 *
 * Why this way:
 * Using a switch-case keeps the logic highly organized. It separates
 * the menu display from the execution of commands, which perfectly
 * follows the modular programming concept.
 */
{
    uint32 ID_2;
    uint32 LIST[10];
    uint8 counter;
    uint32 size_of_array;
    switch (choice)
    {
    case 1:
        SDB_AddEntry();
        break;
    case 2:
        size_of_array = SDB_GetUsedSize();
        printf("THE NUMBER OF STUDENTS IS %d : \n ", size_of_array);

        break;
    case 3:
        printf("ENTER THE ID  : \n");
        scanf("%d", &ID_2);
        SDB_ReadEntry(ID_2);
        break;
    case 4:
        SDB_GetList(&counter, LIST);
        for (int i = 0; i < counter; i++)
        {
            printf("\t%d\t\n", LIST[i]);
        }
        break;
    case 5:
        printf("ENTER THE ID TO CHECK \n");
        scanf(" %d", &ID_2);
        if (SDB_IsIdExist(ID_2) == 1)
        {
            printf("YES THIS ID NUMBER[%d] WAS EXISTED  : \n", ID_2);
        }
        else
        {
            printf("THIS ID NUMBER [%d] NOT EXISTED : \n ", ID_2);
        }
        break;
    case 6:
        printf("ENTER THE ID THAT U WANT TO DELETE IT : \n");
        scanf("%d", &ID_2);
        SDB_DeletEntry(ID_2);
        break;
    case 7:
        printf("\n---------------------------------------------------\n");
        if (SDB_IsFull() == true)
        {
            printf(">>> THE MEMORY IS FULL! PLEASE CALL DELETE FUNCTION. <<<\n");
        }
        else
        {
            printf(">>> NO, IT IS NOT FULL. YOU CAN CALL ADD FUNCTION. <<<\n");
        }
        printf("---------------------------------------------------\n");
        break;
    case 8:
        break;
    default:
        printf("INVALID CHOICE! PLEASE TRY AGAIN.\n");
        break;
    }
}
void SDB_APP(void)
/*
 * Function: SDB_APP
 *
 * How it works:
 * It uses a while(1) infinite loop to keep the program running
 * and continuously displays the main menu. It scans the user's
 * choice and passes it to SDB_action().
 *
 * The Exit Trick (Choice 8):
 * If the user chooses 8, an 'if' condition catches it early
 * and breaks the loop immediately before calling SDB_action().
 *
 * Why this way:
 * Catching the exit command before the function call is highly
 * efficient. It saves the processor from making an unnecessary
 * call just to do nothing. The program simply breaks the loop
 * and returns to main() to exit gracefully.
 */
{

    uint8 choice = 0;

    while (1)
    {

        printf("\n========== WELCOME TO STUDENT DATABASE ==========\n");
        printf("1. Add Entry\n");
        printf("2. Get Used Size\n");
        printf("3. Read Entry\n");
        printf("4. Get List of all student IDs\n");
        printf("5. Check if ID exists\n");
        printf("6. Delete Entry\n");
        printf("7. Check if memory is full\n");
        printf("8. Exit\n");
        printf("=================================================\n");
        printf("Please enter your choice: ");

        scanf("%u", &choice);

        if (choice == 8)
        {
            printf("Exiting the Database... Goodbye!\n");
            break;
        }

        SDB_action(choice);
    }
}