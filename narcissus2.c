#include<stdio.h>

int main(void)
{
	printf("Hello world!\n");

	int isize = sizeof(int);
	printf("int型长度：%d\n", isize);

	int i;
	unsigned int imaximum = 1;
	for (i = 0; i < isize * 8 - 1; i++, imaximum *= 2);
	imaximum--;
	printf("int型上限：%d\n", imaximum);

	int num, lg;
	register int j, k, l, m;
	int ptable[10] = { 0, 1 };
	for (num = j = 100, lg = 2; num > 0; num++)
	{
		if (num == j)
		{
			j *= 10, lg++;
			for (i = 2; i < 10; i++)
			{
				ptable[i] = i;
				for (k = 1; k < lg; k++, ptable[i] *= i);
			}
		}
		for (k = 0, l = num, m = 0; k < lg; k++, l /= 10)
			m += ptable[l % 10];
		if (m == num)
			printf("%d\n", m);
	}
	printf("结束：%d\n", num);
	return 0;
}