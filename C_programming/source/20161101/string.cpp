//제목: 문자열 연습
//기능: 문자열 관련 함수 예제
//파일이름: string.cpp
//수정날짜: 2016년11월01일
//작성자: 민두홍
#include <stdio.h>
//함수: stringLen()
//입력: 문자열 
//출력: 문자열의 길이
//부수효과: 없음
int stringLen(char str[]) {
	for (int index=0; ;index++) {
		if (str[index] == '\0') return index;
	}
}
int main() {
	// 이 위는 당분간 무시하세요.
	char ch1, ch2, ch3; // 문자형(char)
	ch1 = 40;
	ch2 = 50;
	ch3 = ch1+ch2; 
	ch3 = '\n'; // single qoute에 포함 된 문자는 아스키 코드로 저장
	printf("ch3 = %d\n", ch3);
	char arr1[5]; // 문자의 배열
	arr1[0] = 'c';
	arr1[1] = 'h';
	arr1[2] = 'o';
	arr1[3] = 'i';

	//문자열은 맨 마지막에 널(NULL) 문자, '\0'이 추가된다
	//이러한 이유로 함수에 문자열을 전달할 경우, 
	//그 길이를 전달할 필요가 없다.

	char arr2[10] = {'c','h','o','i'}; // 문자열
	arr2[0] = 's';
	printf("arr2 is %s\n", arr2);
	printf("length of arr2 is %d\n", stringLen(arr2)); 

	char str[] = "hello world"; // 문자열 (double quote를 사용하여 문자를 쉽게 초기화)
	char *str2 = "kim"; // 으로도 초기화 가능. 단, 
	str2[0] = 'g';// 처럼 값 변경 불가능 (immutable)
	str[0] = 'c';
	printf("str is %s\n", str);
	printf("length of str is %d\n", stringLen(str));
	
	//이 아래는 당분간 무시하세요.
	printf("End of Program\n");
	return 0;
}
