#include "SDB.h"
#include "STD.h"
#include <stdio.h>

static STUDENT arr[10] = {0};
uint32 counter_Student = 0;
uint32 index_i = 0;

uint32 SDB_GetUsedSize(void)
{
    uint32 counter = 0;
    for (uint32 i = 0; i < 10; i++)
    {
        if (arr[i].ID != 0)
            counter++;
    }
    return counter;
}

bool SDB_IsFull(void)
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

bool SDB_AddEntry(void)
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
{
    *count = SDB_GetUsedSize();
    for (uint8 i = 0; i < *count; i++)
    {
        list[i] = arr[i].ID;
    }
}