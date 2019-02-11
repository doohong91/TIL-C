//제목: 흐름제어
//기능: 반복문
//파일이름: 반복문.cpp
//수정날짜: 2016년9월20일
//작성자: 민두홍
#include <stdio.h>
int main() {
	// 이 위는 당분간 무시하세요.
	int a=1,sum=0;
	while (a<=100) {
		if(a%3==0) {
			sum=sum+a;//sum+=a;
		}
		a++;
	}
	printf("sum = %d\n", sum);
	printf("End of Program\n");

	//이 아래는 당분간 무시하세요.
	return 0;
}
