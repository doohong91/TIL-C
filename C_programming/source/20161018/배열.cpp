//제목: 배열
//기능: 배열
//파일이름: 배열.cpp
//수정날짜: 2016년10월18일
//작성자: 민두홍
#include <stdio.h>
int main() {
	// 이 위는 당분간 무시하세요.
	
	int a[4];// 배열 선언 : 1. 배열의 이름, 2. 배열의 길이, 3. 각 요소의 자료형
	int b = 0;// 변수 선언 + 초기화
	int c[3] = {1,3,5};// 배열의 선언 + 초기화
	int d[] = {0, 4, 8, 4, 2, -5, 12};// 배열의 크기는 4
	a[b] = 30;// 정수형 변수 b를 인덱스로 사용(인덱스는 반드시 정수형이어야 한다.)
	int len = 7;
	//배열 d의 각 요소를 화면에 출력하는 프로그램
	for(int i=0; i<len; i++){
		printf("d[%d] = %d\n",i,d[i]);
	}
	//배열 d의 각 요소의 합을 구하는 프로그램
	int sum = 0;
	for(int i=0;i<len;i++) {
		//sum = sum + d[i];
		sum += d[i];
	}
	printf("The sum of d = %d\n",sum);
	//배열 d의 요소 중 가장 작은 값을 구하는 프로그램
	int min = d[0];
	for(int i = 1; i < len; i++) {
		if(d[i]<min) {
			min = d[i];
		}
	}
	printf("The minimun element is %d\n", min);
	//배열 d의 요소 중 가장 작은 값의 인덱스를 구하는 프로그램
	int iMin = 0;
	for(int i = 0; i<len; i++) {
		if(d[i]<d[iMin]) {
			iMin = i;
		}
	}
	printf("The index of minimun element is %d\n", iMin);
	printf("End of Program");
	//이 아래는 당분간 무시하세요.
	return 0;
}
