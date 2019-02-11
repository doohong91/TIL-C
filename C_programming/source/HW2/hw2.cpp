//제목: 복소수 사칙연산
//기능: 구조체 함수
//파일이름: hw2.cpp
//수정날짜: 2016년11월12일
//작성자: 민두홍
#include <stdio.h>
typedef struct complex {
	double re;
	double im;
}Complex;
//함수: complexAdd()
//입력: 두 복소수
//출력: 두 복소수의 합
//부수효과: 없음
Complex complexAdd(Complex* pC1, Complex* pC2) {
	Complex x;
	x.re = pC1->re + pC2->re;
	x.im = pC1->im + pC2->im;
	return x;
}
//함수: complexSubtract()
//입력: 두 복소수
//출력: 두 복소수의 차
//부수효과: 없음
Complex complexSubtract(Complex* pC1, Complex* pC2) {
	Complex x;
	x.re = pC1->re - pC2->re;
	x.im = pC1->im - pC2->im;
	return x;
}
//함수: complexMultiply
//입력: 두 복소수
//출력: 두 복소수의 곱
//부수효과: 없음
Complex complexMultiply(Complex* pC1, Complex* pC2) {
	Complex x;
	x.re = (pC1->re * pC2->re) - (pC1->im * pC2->im);
	x.im = (pC1->re * pC2->im) + (pC1->im * pC2->re);
	return x;
}
//함수: complexDivide
//입력: 두 복소수
//출력: 첫번째 복소수를 두번째 복소수로 나눈 값
//부수효과: 없음
Complex complexDivide(Complex* pC1, Complex* pC2) {
	Complex x;
	x.re = ((pC1->re * pC2->re) + (pC1->im * pC2->im))/((pC2->re * pC2->re) + (pC2->im * pC2->im));
	x.im = ((pC1->im * pC2->re) - (pC1->re * pC2->im))/((pC2->re * pC2->re) + (pC2->im * pC2->im));
	return x;
}
//함수: complexPrint()
//입력: 복소수
//출력: 없음
//부수효과: 화면에 복소수 출력
void complexPrint (Complex a) {
	printf("%f + j %f\n",a.re, a.im);
}
int main() {
	// 이 위는 당분간 무시하세요.
	Complex a,b;
	a.re = 1;
	a.im = 3;
	b.re = 2;
	b.im = 4;
	complexPrint(complexAdd(&a,&b));
	complexPrint(complexSubtract(&a,&b));
	complexPrint(complexMultiply(&a,&b));
	complexPrint(complexDivide(&a,&b));
	//이 아래는 당분간 무시하세요.
	printf("End of Program\n");
	return 0;
}
