//����: string
//���: ���ڿ�
//�����̸�: string.cpp
//������¥: 2016��11��08��
//�ۼ���: �ε�ȫ
#include <stdio.h>
int main() {
	// �� ���� ��а� �����ϼ���.
	
	char sentence_1[4] = {'p', 's', 'i', '\0'};
	char sentence_2[4] = {'p', 's', 'i', 0};
	char sentence_3[4] = {'p', 's', 'i', NULL};
	char sentence_4[6] = "psi"; //������ ��ҿ��� NULL�� �Էµ�
	char sentence_5[10] = {'p', 's', 'i'};
	char str1[] = "hello world"; //���ڿ�
	char* str2 = "choi"; //���ڿ� immutable
	str1[0] = 'm';
//	str2[0] = 'j'; error�߻�
//	str1 = str2; str1�� ���(const)���� �Ǿ� �ٲ� �� ����, ���ڿ� ������ �Ϸ��� �� ��Һ��� �����ؾߵ�
	printf("%s\n",str1);
	printf("%s\n",str2);
	//�� �Ʒ��� ��а� �����ϼ���.
	printf("End of Program\n");
	return 0;
}
