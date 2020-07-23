#include <stdio.h>

void main()
{
	int i, n = 0, *ptr;
	int scores[2][2][4] = {{{270, 350, 320, 330},
							{380, 390, 401, 405}},
						   {{300, 301, 290, 305},
							{385, 400, 405, 410}}};

	ptr = &scores[0][0][0]; //첫번째 주소
	for (i = 0; i < 16; i++)
	{
		printf("\n address : %u scores %2d = %3d", ptr, i, *ptr);
		ptr++;
	}
	getchar();
}