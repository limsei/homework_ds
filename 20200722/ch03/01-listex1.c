#include <stdio.h>

void main()
{
	int i, score[4] = {270, 350, 320, 330};

	for (i = 0; i < 4; i++)
	{
		printf("\n address : %u Score[%d]= %d", &score[i], i, score[i]);
	}

	getchar();
}