//제목: call by pointer
//기능: 두 변수의 값을 변경
//파일이름: swap.cpp
//수정날짜: 2016년10월11일
//작성자: 민두홍
#include <stdio.h>
//함수: swap() 두 매개변수의 값을 교환
//입력: 두 변수의 포인터
//출력: 없음
//부수효과: 두 변수 값의 교환
void swap(int* ptr1, int* ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int main() {
	// 이 위는 당분간 무시하세요.
	int a=10, b=20;
	int* ptr;
	ptr =&a;
	//함수 swap(): 두 매개변수의 값을 교환
	swap(ptr,&b);

	printf("a=%d, b=%d\n",a,b);
	printf("End of Program");

	//이 아래는 당분간 무시하세요.
	return 0;
}
