//제목: 피보나치 수열
//기능: 조건문,반복문
//파일이름: HW1Fibonacci.cpp
//수정날짜: 2016년9월27일
//작성자: 민두홍
#include <stdio.h>
int main() {
	// 이 위는 당분간 무시하세요.
	int x=1,y=1,count=1; 
	int temp;  
	while (count<=40) {
		printf("%d, ",x);
		temp=x;
		x=y;
		y=temp+y;
		count++;
	}
	
	//이 아래는 당분간 무시하세요.
	return 0;
}
