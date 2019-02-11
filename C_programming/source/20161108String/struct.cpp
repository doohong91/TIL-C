//제목: 구조체
//기능: 구조체
//파일이름: struct.cpp
//수정날짜: 2016년11월08일
//작성자: 민두홍
#include <stdio.h>
//struct complex {
//	double re; // 실수부: 멤버이름
//	double im; // 허수부: 멤버이름
//};
//typedef struct complex Complex;
//앞의 두 문장을 합쳐서
typedef struct complex {
	double re; // 실수부: 멤버이름
	double im; // 허수부: 멤버이름
}Complex;
//함수: complexAdd()
//입력: 두 개의 복소수(Complex)
//출력: 복소수
//부수효과: 없음
//struct complex complexAdd(struct complex a, struct complex b) {
//Complex complexAdd (Complex a, Complex b) {
//	//struct complex x;
//	Complex x;
//	x.re = a.re + b.re;
//	x.im = a.im + b.im;
//	return x;
//}

//함수: complexAdd()
//입력: 두 개의 복소수의 포인터(Complex*)
//출력: 복소수
//부수효과: 없음
Complex complexAdd (Complex* pC1, Complex* pC2) {
	Complex x;
	//x.re = (*pC1).re + (*pC2).re;
	//x.im = (*pC1).im + (*pC2).im;
	x.re = pC1->re + pC2->re;
	x.im = pC1->im + pC2->im;
	return x;
}
//함수: complexPrint()
//입력: 복소수(Complex)
//출력: 없음
//부수효과: 화면에 복소수 출력
void complexPrint (Complex a) {
	printf("%f + j %f\n",a.re, a.im);
}
typedef int MyType;
int main() {
	// 이 위는 당분간 무시하세요.
	MyType q = 0; //==> int q = 0;
	struct complex a, b, c;// 구조체 변수선언
	// 1. a,b,c는 구조체 변수이름
	// 2. complex는 a,b,c 변수의 구조체 이름
	a.re = 0; 
	a.im = 1; 
	b.re = 2; 
	b.im = 3;
	complexPrint(complexAdd(&a,&b));
	
	//이 아래는 당분간 무시하세요.
	printf("End of Program\n");
	return 0;
}
