//제목: 3의배수의 합
//기능: 임의의 정수 'num'보다 작은 3의배수의 합
//파일이름: factorSum.cpp
//수정날짜: 2016년10월11일
//작성자: 민두홍
#include <stdio.h>
//함수이름: factorSum() 임의의 정수 'num'보다 작은 3의배수의 합
//입력: 임의의 정수
//출력: 입력한 정수보다 작은 3의 배수의 합
//부수효과: 없음
int factorSum(int a) {
	int i = 1,sum = 0 ;
	while(i<a) {
		if(!(i%3)) {
			sum+=i;
		}
		i++;
	}
	return sum;
}
int main() {
	// 이 위는 당분간 무시하세요.

	int sum, num = 100;

	//함수 factorSum(): 임의의 정수 'num'보다 작은 3의배수의 합
	sum = factorSum(num);
	printf("%d보다 작은 3의 배수의 합은 %d입니다.\n", num, sum);
	printf("End of Program\n");
	//이 아래는 당분간 무시하세요.
	return 0;
}
