/*
while���� for��ó�� �̿��ϱ�
*/

#include <stdio.h>	//������� ����

int main(void)	//������, �������Լ�(�Լ���), �Ű�����(���� �����Ͱ��� �Ѱ��ֱ� ���� ����,�������� �����Ƿ� void)
{

	int i;
	int sum = 0;	//������ ���� ���� �����̸�:sum
	int factorial = 1;	//������ ���� ���� �����̸�:factorial

	i = 1;
	while (i <= 10)		//while�� ���ǽ� 10���� ���ų� ������
	{
		sum += i;	//sum+=i;�� sum=sum+i�� ���� 
		factorial *= i;	//factorial=factorial*i�� ����
		i++;	//��������������: 1�� �����Ѵ�. Ȧ�� ���϶��� ���� ����������� 1������.
	}

	printf("1~10�� ��: %d\n", sum);		//%d�� ������ ���, �ι�° ���� sum�� ����Ѵ�.
	printf("1~10�� ��: %d\n", factorial);		//%d�� ������ ���, �ι�° ���� factorial�� ����Ѵ�.

	return 0;
	}