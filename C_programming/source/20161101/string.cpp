//����: ���ڿ� ����
//���: ���ڿ� ���� �Լ� ����
//�����̸�: string.cpp
//������¥: 2016��11��01��
//�ۼ���: �ε�ȫ
#include <stdio.h>
//�Լ�: stringLen()
//�Է�: ���ڿ� 
//���: ���ڿ��� ����
//�μ�ȿ��: ����
int stringLen(char str[]) {
	for (int index=0; ;index++) {
		if (str[index] == '\0') return index;
	}
}
int main() {
	// �� ���� ��а� �����ϼ���.
	char ch1, ch2, ch3; // ������(char)
	ch1 = 40;
	ch2 = 50;
	ch3 = ch1+ch2; 
	ch3 = '\n'; // single qoute�� ���� �� ���ڴ� �ƽ�Ű �ڵ�� ����
	printf("ch3 = %d\n", ch3);
	char arr1[5]; // ������ �迭
	arr1[0] = 'c';
	arr1[1] = 'h';
	arr1[2] = 'o';
	arr1[3] = 'i';

	//���ڿ��� �� �������� ��(NULL) ����, '\0'�� �߰��ȴ�
	//�̷��� ������ �Լ��� ���ڿ��� ������ ���, 
	//�� ���̸� ������ �ʿ䰡 ����.

	char arr2[10] = {'c','h','o','i'}; // ���ڿ�
	arr2[0] = 's';
	printf("arr2 is %s\n", arr2);
	printf("length of arr2 is %d\n", stringLen(arr2)); 

	char str[] = "hello world"; // ���ڿ� (double quote�� ����Ͽ� ���ڸ� ���� �ʱ�ȭ)
	char *str2 = "kim"; // ���ε� �ʱ�ȭ ����. ��, 
	str2[0] = 'g';// ó�� �� ���� �Ұ��� (immutable)
	str[0] = 'c';
	printf("str is %s\n", str);
	printf("length of str is %d\n", stringLen(str));
	
	//�� �Ʒ��� ��а� �����ϼ���.
	printf("End of Program\n");
	return 0;
}
