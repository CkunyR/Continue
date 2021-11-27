#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;//终止循环中本次循环后面的代码---‘继续’   终止本次循环，直接跳转到该循环的判断部分，进行下一次的入口判断
		printf("%d\n", i);
		i++;
	}
	return 0;
}