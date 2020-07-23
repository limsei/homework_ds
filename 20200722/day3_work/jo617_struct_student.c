#include <stdio.h>

/**
 * jungol 617 : 구조체 - 자가진단5
 *http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=254&sca=10g0
 */

typedef struct student
{
    int num;
    char name[20];
    int tall;

} myclass;

int main()
{
    int m[12], n = 5, i, p = 0, q = 0;
    myclass stu[100];
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", stu[i].name, &stu[i].tall);
    }
    for (i = 0; i < n; i++)
    {
        if (q < stu[i].tall)
        {
            q = stu[i].tall;
            p = i;
        }
    }
    printf("%s %d", stu[p].name, stu[p].tall);
    return 0;
}
