/*
while문을 for문처럼 이용하기
*/

#include <stdio.h>	//헤더파일 포함

int main(void)	//리턴형, 진입점함수(함수명), 매개변수(사용될 데이터값을 넘겨주기 위한 변수,변수값이 없으므로 void)
{

	int i;
	int sum = 0;	//정수형 변수 선언 변수이름:sum
	int factorial = 1;	//정수형 변수 선언 변수이름:factorial

	i = 1;
	while (i <= 10)		//while의 조건식 10보다 같거나 작을때
	{
		sum += i;	//sum+=i;는 sum=sum+i와 같다 
		factorial *= i;	//factorial=factorial*i와 같다
		i++;	//후위증감연산자: 1씩 증가한다. 홀로 쓰일때는 전위 후위상관없이 1씩증가.
	}

	printf("1~10의 합: %d\n", sum);		//%d는 정수로 출력, 두번째 값인 sum을 출력한다.
	printf("1~10의 곱: %d\n", factorial);		//%d는 정수로 출력, 두번째 값인 factorial을 출력한다.

	return 0;
	}