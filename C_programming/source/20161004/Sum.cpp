//제목: 함수연습
//기능: 정수 더하기 함수
//파일이름: Sum.cpp
//수정날짜: 2016년10월04일
//작성자: 민두홍
#include <stdio.h>
int globalVariable = 100; //전역변수 or global variable
//함수 sum()
//입력: 두개의 정수
//출력: 두 정수의 합
//부수효과: 없음
int sum(int x, int y) // 함수선언
	/*
	1. 함수이름
	2. 매개변수의 수 및 각각의 자료형
	3. 반환값의 자료형

	함수선언은 함수를 사용하기 위한 모든 정보를 가지고 있다.
	*/
{
	int z;//지역변수: 함수 안에서 선언한 변수는 함수 안에서만 유효(매개변수도 마찬가지)
	static int q=0;// static 변수 : 존재기간이 영원한 변수 
	z=x+y;
	q++;
	printf("the function is clalled %d time(s)\n", q);
	return z;
}// 함수본체

// 함수정의 = 함수선언 + 함수본체
int main() {
	// 이 위는 당분간 무시하세요.
	int a=10, b=20, c;//변수선언
	c=sum(a,b) + globalVariable;//함수 호출
	/*
	1. 매개변수를 복사하기 위해 메모리 영역이 새로 생성된다.
	2. 매개변수의 값이 새로 생성된 메모리 영역으로 복사된다.
	3. 함수 내에서는 새로 생성된 메모리영역을 접근한다.
	4. 함수가 종료되면 생성된 메모리 영역이 소멸된다. 
	*/
	c=sum(a,b);
	printf("%d\n",c);

	printf("End of Program\n");
	//이 아래는 당분간 무시하세요.
	return 0;
}
