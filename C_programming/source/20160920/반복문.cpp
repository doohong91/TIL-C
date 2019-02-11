//제목: 흐름제어
//기능: 반복문
//파일이름: 반복문.cpp
//수정날짜: 2016년9월20일
//작성자: 민두홍
#include <stdio.h>
int main() {
	// 이 위는 당분간 무시하세요.
	int a;
	a=1;
	while (a<=10) {
		if(a%2==0) {
			printf("a = %d\n", a);
		}
		a=a++;
	}

	printf("End of Program\n");

	//이 아래는 당분간 무시하세요.
	return 0;
}
