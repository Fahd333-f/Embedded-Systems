#include "STD.h"
typedef struct SimpleDb

{
    uint32 ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
} STUDENT;
uint32 SDB_GetUsedSize(void);
bool SDB_IsFull(void);
bool SDB_AddEntry(void);
void SDB_DeletEntry(uint32 id);
bool SDB_ReadEntry(uint32 id);
bool SDB_IsIdExist(uint32 id);
void SDB_GetList(uint8 *count, uint32 *list);
void SDB_action(uint8 choice);
void SDB_APP(void);
