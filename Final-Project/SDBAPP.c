#include "STD.h"
#include "SDB.h"
#include <stdio.h>

void SDB_action(uint8 choice)
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

        SDB_action((uint8)choice);
    }
}