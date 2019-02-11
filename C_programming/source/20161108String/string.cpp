//제목: string
//기능: 문자열
//파일이름: string.cpp
//수정날짜: 2016년11월08일
//작성자: 민두홍
#include <stdio.h>
int main() {
	// 이 위는 당분간 무시하세요.
	
	char sentence_1[4] = {'p', 's', 'i', '\0'};
	char sentence_2[4] = {'p', 's', 'i', 0};
	char sentence_3[4] = {'p', 's', 'i', NULL};
	char sentence_4[6] = "psi"; //나머지 요소에는 NULL이 입력됨
	char sentence_5[10] = {'p', 's', 'i'};
	char str1[] = "hello world"; //문자열
	char* str2 = "choi"; //문자열 immutable
	str1[0] = 'm';
//	str2[0] = 'j'; error발생
//	str1 = str2; str1은 상수(const)값이 되어 바꿀 수 없음, 문자열 변경을 하려면 각 요소별로 변경해야됨
	printf("%s\n",str1);
	printf("%s\n",str2);
	//이 아래는 당분간 무시하세요.
	printf("End of Program\n");
	return 0;
}
