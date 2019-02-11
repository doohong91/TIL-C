//제목: 흐름제어
//기능: 조건문
//파일이름: 콜라.cpp
//수정날짜: 2016년9월20일
//작성자: 민두홍
#include <stdio.h>
int main() {
	// 이 위는 당분간 무시하세요.
	int a=2,num;
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
	
	//a가 소수인지 확인
	while (a<=num) {
		if(num%a==0) {
			break;
		}
		a++;
	}
	if(a>=num)
		printf("%d은 소수입니다.\n", num);
	else
		printf("%d은 소수가 아닙니다.\n", num);

	printf("End of Program\n");

	//이 아래는 당분간 무시하세요.
	return 0;
}
