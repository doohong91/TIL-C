//제목: 문자열함수
//기능: 문자열함수
//파일이름: stringfunction.cpp
//수정날짜: 2016년11월08일
//작성자: 민두홍
#include <stdio.h>
#include <string.h>
//함수: stringLen()
//입력: 문자열
//출력: 문자열의 길이
//부수효과: 없음
int stringLen(char* str) {
	int i = 0;
	while (str[i]) i++; 
	return i;
}
int main() {
	// 이 위는 당분간 무시하세요.
	char str1[100] = "hello world"; //문자열
	char* str2 = "choi"; //문자열 immutable
	printf("The length of str is %d\n",strlen(str1));
	//두 스트링  붙이기
	strcat(str1, str2);
	printf("str1 is %s\n", str1);
	//스트링 복사하기
	strcpy(str1, str2);
	printf("str1 is %s\n", str1);
	//스트링 비교하기
	printf("Compare1 %d\n", str1==str2);
	printf("Compare2 %d\n", strcmp(str1,str2));

	printf("Type within 100 characters.\n");
	scanf("%s", str1);
	printf("You just typed in: %s\n", str1);
	//이 아래는 당분간 무시하세요.
	printf("End of Program\n");
	return 0;
}
