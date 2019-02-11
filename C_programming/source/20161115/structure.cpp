//제목: 
//기능: 
//파일이름: structure.cpp
//수정날짜: 2016년11월15일
//작성자: 민두홍
#include <stdio.h>
#include <stdlib.h>
typedef struct complex {
	double re; // 실수부: 멤버이름
	double im; // 허수부: 멤버이름
}Complex;
//함수: addComplex()
//입력: 두 개의 복소수의 포인터(Complex*)
//출력: 복소수의 포인터
//부수효과: 없음
//Complex* complexAdd (Complex* pC1, Complex* pC2) {
//	Complex* ptr; // STACK영역
//	//x.re = (*pC1).re + (*pC2).re;
//	//x.im = (*pC1).im + (*pC2).im;
//	ptr->re = pC1->re + pC2->re;
//	ptr->im = pC1->im + pC2->im;
//	return ptr;
//} // 함수 종료시 할당된 메모리들이 소멸되므로 원하는 값 출력하지 못함
//Complex* addComplex (Complex* pC1, Complex* pC2) {
//	static Complex x; //static: 전역변수 (DATA영역)
//	x.re = pC1->re + pC2->re;
//	x.im = pC1->im + pC2->im;
//	return &x;
//}
Complex* addComplex (Complex* pC1, Complex* pC2) {
	Complex* ptr;
	ptr = (Complex*) malloc(sizeof(Complex)); 
	//(Complex*): 형변환 
	//malloc(): 메모리 동적할당 (HEAP영역), 일반적으로 void*로 리턴, 자료형을 지정해 줄 필요 있음
	//malloc 함수의 매개변수로 sizeof(자료형)사용
	//sizeof(): 매개변수로 자료형을 입력, 자료형의 크기를 출력
	ptr->re = pC1->re + pC2->re;
	ptr->im = pC1->im + pC2->im;
	return ptr;
}
//함수: printComplex()
//입력: 복소수의 포인터(Complex*)
//출력: 없음
//부수효과: 화면에 복소수 출력
//void complexPrint (Complex a) {
//	printf("%f + j %f\n",a.re, a.im);
//}
void printComplex (Complex* ptr) {
	printf("%f + j %f\n", ptr->re, ptr->im);
}
int main() {
	// 이 위는 당분간 무시하세요.
	Complex* ptr1, *ptr2;
	Complex a, b, c, d;
	a.re = 0; 
	a.im = 1; 
	b.re = 2; 
	b.im = 3;
	ptr1 = addComplex(&a,&b);
	ptr2 = addComplex(&c,&d);
	printComplex(ptr1);
	//static을 이용한 경우 c와 d를 더한 값이 출력
	//malloc을 이용한 경우 a와 b를 더한 값이 출력
	free(ptr1);

	//이 아래는 당분간 무시하세요.
	printf("End of Program\n");
	return 0;
}
