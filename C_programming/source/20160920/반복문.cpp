//����: �帧����
//���: �ݺ���
//�����̸�: �ݺ���.cpp
//������¥: 2016��9��20��
//�ۼ���: �ε�ȫ
#include <stdio.h>
int main() {
	// �� ���� ��а� �����ϼ���.
	int a;
	a=1;
	while (a<=10) {
		if(a%2==0) {
			printf("a = %d\n", a);
		}
		a=a++;
	}

	printf("End of Program\n");

	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}
