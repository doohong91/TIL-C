//����: ���ڿ��Լ�
//���: ���ڿ��Լ�
//�����̸�: stringfunction.cpp
//������¥: 2016��11��08��
//�ۼ���: �ε�ȫ
#include <stdio.h>
#include <string.h>
//�Լ�: stringLen()
//�Է�: ���ڿ�
//���: ���ڿ��� ����
//�μ�ȿ��: ����
int stringLen(char* str) {
	int i = 0;
	while (str[i]) i++; 
	return i;
}
int main() {
	// �� ���� ��а� �����ϼ���.
	char str1[100] = "hello world"; //���ڿ�
	char* str2 = "choi"; //���ڿ� immutable
	printf("The length of str is %d\n",strlen(str1));
	//�� ��Ʈ��  ���̱�
	strcat(str1, str2);
	printf("str1 is %s\n", str1);
	//��Ʈ�� �����ϱ�
	strcpy(str1, str2);
	printf("str1 is %s\n", str1);
	//��Ʈ�� ���ϱ�
	printf("Compare1 %d\n", str1==str2);
	printf("Compare2 %d\n", strcmp(str1,str2));

	printf("Type within 100 characters.\n");
	scanf("%s", str1);
	printf("You just typed in: %s\n", str1);
	//�� �Ʒ��� ��а� �����ϼ���.
	printf("End of Program\n");
	return 0;
}
