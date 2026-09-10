#include "SDB.h"
#include "STD.h"
#include <stdio.h>

static STUDENT arr[10] = {0};
uint32 counter_Student = 0;
uint32 index_i = 0;

uint32 SDB_GetUsedSize() /*
                              * Function: SDB_GetUsedSize
                              * How it works: It loops through the static student array. Since the array is initially zeroed out, it checks the ID. If the ID is not 0, it increments a counter.
                              * Why this way: This accurately calculates the actual number of stored students based on valid data, and returns the final count.
                              */
{
    uint32 counter = 0;
    for (uint32 i = 0; i < 10; i++)
    {
        if (arr[i].ID != 0)
            counter++;
    }
    return counter;
}

bool SDB_IsFull() /*
                       * Function: SDB_IsFull
                       * How it works: It calls SDB_GetUsedSize() to check if the database has reached the maximum limit (10 students).
                       * Why this way: The return type is boolean because we only need a simple True/False answer to determine if there is space available.
                       */
{
    if (SDB_GetUsedSize() == 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool SDB_AddEntry()
{
    if (SDB_GetUsedSize() == 10)
    {
        printf("SORRY WE DONT HAVE ANY MEMORY TO USE IT : \n");
        return false;
    }

    if (arr[index_i].ID == 0)
    {
        printf("Enter the ID of STUDENT number %u \n", index_i + 1);
        scanf("%u", &arr[index_i].ID);
        for (uint32 i = 0; i < 10; i++)
        {
            if (i == index_i)
            {
                continue;
            }
            if (arr[index_i].ID == arr[i].ID)
            {
                printf("THIS IS A REPEATED ID : PLEASE ENTER ANOTHER ONE : \n");
                arr[index_i].ID = 0;
                return false;
            }
        }
        printf("Enter the YEAR of STUDENT number %u \n", index_i + 1);
        scanf("%u", &arr[index_i].Student_year);
        printf("Enter the COURSE1_ID of STUDENT number %u \n", index_i + 1);
        scanf("%u", &arr[index_i].Course1_ID);
        printf("Enter the COURSE1_GRADE of STUDENT number %u \n", index_i + 1);
        scanf("%u", &arr[index_i].Course1_grade);
        printf("Enter the COURSE2_ID of STUDENT number %u \n", index_i + 1);
        scanf("%u", &arr[index_i].Course2_ID);
        printf("Enter the COURSE2_GRADE of STUDENT number %u \n", index_i + 1);
        scanf("%u", &arr[index_i].Course2_grade);
        printf("Enter the COURSE3_ID of STUDENT number %u \n", index_i + 1);
        scanf("%u", &arr[index_i].Course3_ID);
        printf("Enter the COURSE3_GRADE of STUDENT number %u \n", index_i + 1);
        scanf("%u", &arr[index_i].Course3_grade);

        printf("THANK YOU SUCCESSFUL ENTER \n");
        index_i += 1;
        return true;
    }
    else
    {
        return false;
    }
}

void SDB_DeletEntry(uint32 id)
/*
 * Function: SDB_DeletEntry
 *
 * How it works:
 * It searches for the target ID. Once found, it uses a nested loop
 * starting from that index to shift all subsequent elements one step
 * to the left (arr[j] = arr[j + 1]). It stops shifting at the last
 * index to avoid out-of-bounds errors. Finally, it zeroes out the
 * last element, decrements the global index, and updates a boolean
 * flag to print a success message.
 *
 * Why this way:
 * Simply setting a deleted element to 0 creates gaps in the array,
 * which breaks the insertion logic and causes out-of-bounds errors
 * when adding new students. The shifting algorithm keeps the data
 * contiguous. The boolean flag ensures the user gets accurate
 * feedback if the ID doesn't exist.
 */

{
    uint32 id_x = id;
    bool is_deleted = false;

    for (uint32 i = 0; i < 10; i++)
    {
        if (id_x == arr[i].ID)
        {

            for (uint32 j = i; j < 10; j++)
            {
                if (j == 9)
                {
                    break;
                }
                arr[j] = arr[j + 1];
            }
            arr[index_i - 1] = (STUDENT){0};
            index_i -= 1;

            is_deleted = true;
            printf("\n>> STUDENT WITH ID [%u] DELETED SUCCESSFULLY! <<\n", id);
            break;
        }
    }

    if (is_deleted == false)
    {
        printf("\n>> ERROR: STUDENT WITH ID [%u] NOT FOUND IN DATABASE! <<\n", id);
    }
}

bool SDB_ReadEntry(uint32 id)
/*
 * Function: SDB_ReadEntry
 *
 * How it works:
 * It takes a student ID as an argument and uses a for loop
 * to iterate through the database. Once it finds a matching ID,
 * it immediately prints all the stored information (academic year,
 * courses IDs, and grades) for that specific student.
 *
 * Why this way:
 * A linear search is the most straightforward and efficient
 * method for finding an element in a small static array.
 * Printing the data directly upon finding the match keeps
 * the function simple and provides immediate output.
 */
{
    uint32 id_x = id;
    for (uint32 i = 0; i < 10; i++)
    {
        if (id_x == arr[i].ID)
        {
            printf("The YEAR of the STUDENT is %u \n", arr[i].Student_year);
            printf("The COURSE1_ID of the STUDENT is %u \n", arr[i].Course1_ID);
            printf("The COURSE1_GRADE of the STUDENT is %u \n", arr[i].Course1_grade);
            printf("The COURSE2_ID of the STUDENT is %u \n", arr[i].Course2_ID);
            printf("The COURSE2_GRADE of the STUDENT is %u \n", arr[i].Course2_grade);
            printf("The COURSE3_ID of the STUDENT is %u \n", arr[i].Course3_ID);
            printf("The COURSE3_GRADE of the STUDENT is %u \n", arr[i].Course3_grade);
            printf("\n>>>>> SUCCESSFUL READING >>>>>>\n");
            return true;
        }
    }
    return false;
}

bool SDB_IsIdExist(uint32 id)
/*
 * Function: SDB_IsIdExist
 *
 * How it works:
 * It loops through the array to search for the given ID.
 * If a match is found, it immediately returns true. If the
 * loop finishes without finding the ID, it returns false.
 *
 * Why this way:
 * It uses a boolean return type because its only job is to
 * verify existence, not to print results. Returning true
 * or false allows the frontend (the switch case in SDBAPP)
 * to decide what message to display, which keeps the backend
 * logic perfectly isolated from the user interface.
 */
{
    for (uint32 i = 0; i < 10; i++)
    {
        if (id == arr[i].ID)
        {
            return true;
        }
    }
    return false;
}

void SDB_GetList(uint8 *count, uint32 *list)
/*
 * Function: SDB_GetList
 *
 * How it works:
 * It collects all the currently stored student IDs from the
 * database and populates them into a single array (list).
 * It also uses SDB_GetUsedSize() to determine exactly how
 * many IDs need to be extracted.
 *
 * Why this way:
 * Passing an array by reference allows the backend to gather
 * the data without interfering with the UI. It gives the
 * frontend a clean, consolidated list of IDs so they can be
 * easily printed stacked on top of each other, exactly as
 * required by the project specifications.
 */
{
    *count = SDB_GetUsedSize();
    for (uint8 i = 0; i < *count; i++)
    {
        list[i] = arr[i].ID;
    }
}