#include <stdio.h>

int main(void)
{
	int i = 0;
	int arr[10] = { 0 };

	while (i < 10)
	{
		printf("정수 입력%d >", i);
		scanf("%d", &arr[i]);
		/*
		해당 주석안에 입력받은 수에대한 중복처리할 것
		*/
		i++;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	/*
	여기에 입력받은 숫자에대한 정렬 코드 작성할 것
	EX) INPUT: 9, 1, 3 ,4, 5, 7, 2, 6, 8, 10
	OUTPUT: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	*/
}
