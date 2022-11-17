#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0;  //������ ��
	int x = 0, y = 0;  //�������� x��ǥ, y��ǥ
	int i = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x < 0 || x > 90)
		{
			break;
		}
		if (y < 0 || y > 90)
		{
			break;
		}
		
	}

	return 0;
}