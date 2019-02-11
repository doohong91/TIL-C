//제목: 유클리드 알고리듬
//기능: 조건문,반복문
//파일이름: 소스2.cpp
//수정날짜: 2016년9월27일
//작성자: 민두홍
#include <stdio.h>
int main() {
	// 이 위는 당분간 무시하세요.
	int x=78696,y=19332; 
	int temp;  //temp는 임시 저장공간
	/*
	scanf("%d",&x);
	scanf("%d",&y);
	*/
	while (y!=0) {
		temp=x;
		x=y;
		y=temp%y;
	}
	printf("%d\n",x);
	//이 아래는 당분간 무시하세요.
	return 0;
}
