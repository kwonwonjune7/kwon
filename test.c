#include <stdio.h>

int main(void)
{
	int i = 0;
	int arr[10] = { 0 };

	while (i < 10)
	{
		printf("���� �Է�%d >", i);
		scanf("%d", &arr[i]);
		/*
		�ش� �ּ��ȿ� �Է¹��� �������� �ߺ�ó���� ��
		*/
		i++;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	/*
	���⿡ �Է¹��� ���ڿ����� ���� �ڵ� �ۼ��� ��
	EX) INPUT: 9, 1, 3 ,4, 5, 7, 2, 6, 8, 10
	OUTPUT: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	*/
}
