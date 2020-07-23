#include <stdio.h>
#include <stdlib.h>

/**
 * jungol 624 : 포인터 - 자가진단6
 * http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=261&sca=10h0
 */

int main()
{
    int n;
    scanf("%d", &n);
    double *a = (double *)malloc(sizeof(double) * n);
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%.2lf ", a[i]);
        sum += a[i];
    }
    printf("\nhap : %.2lf\n", sum);
    printf("avg : %.2lf\n", sum / n);
}