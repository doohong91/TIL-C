//제목: 흐름제어
//기능: 조건문
//파일이름: 콜라.cpp
//수정날짜: 2016년9월20일
//작성자: 민두홍
#include <stdio.h>
int main() {
	// 이 위는 당분간 무시하세요.
	int a,b;
	printf("숫자를 입력하세요: ");
	scanf("%d", &a);//키보드에서 값을 입력받음
	if (a%2) {
		//(a%2==1)과 같은 결과,a%2의 값은 1이고 참을 나타내기 때문에
		// if 다음에는 괄호, 괄호 안에는 조건식
		b=100;
		printf("a=%d 는 홀수 입니다\n",a);
	}//중괄호 안에 있는 여러문장을 한 문장으로 간주 : 복합문
	else {
		//else 다음에는 조건문이 안나와도 됨
		b=-100;
		printf("a=%d 는 짝수입니다\n",a);
	}
	//if부터 여기까지가 조건문
	printf("End of Program\n");

	//이 아래는 당분간 무시하세요.
	return 0;
}
