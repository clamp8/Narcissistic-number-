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

	int num, plances = 3;
	int j, k, l, m, n, o;
	int digit;
	for (num = 100, j = 1000; num > 0 ; num++)
	{
		if (num == j)
			j *= 10, plances++;

		for (k = 0, l = num, o = 0; k < plances; k++, l /= 10)
		{
			n = digit = l % 10;
			for (m = 1; m < plances; m++, n *= digit);
			o += n;
		}
		if (o == num)
			printf("%d\n", o);
	}
	printf("结束：%d\n", num);
	return 0;
}