//����: �帧����
//���: �ݺ���
//�����̸�: �ݺ���.cpp
//������¥: 2016��9��20��
//�ۼ���: �ε�ȫ
#include <stdio.h>
int main() {
	// �� ���� ��а� �����ϼ���.
	int a=1,sum=0;
	while (a<=100) {
		if(a%3==0) {
			sum=sum+a;//sum+=a;
		}
		a++;
	}
	printf("sum = %d\n", sum);
	printf("End of Program\n");

	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}
