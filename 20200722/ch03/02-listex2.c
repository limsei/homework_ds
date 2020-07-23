#include <stdio.h>

void main()
{
	int i, n = 0, *ptr;
	int score[2][4] = {{270, 350, 320, 330},
					   {380, 390, 401, 405}}; // 2차원 배열의 초기화

	ptr = &score[0][0];
	for (i = 0; i < 8; i++)
	{
		printf("\n address : %u Score[%d]= %d", ptr, i, *ptr);
		ptr++;
	}
	getchar();
}