//����: call by pointer
//���: �� ������ ���� ����
//�����̸�: swap.cpp
//������¥: 2016��10��11��
//�ۼ���: �ε�ȫ
#include <stdio.h>
//�Լ�: swap() �� �Ű������� ���� ��ȯ
//�Է�: �� ������ ������
//���: ����
//�μ�ȿ��: �� ���� ���� ��ȯ
void swap(int* ptr1, int* ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int main() {
	// �� ���� ��а� �����ϼ���.
	int a=10, b=20;
	int* ptr;
	ptr =&a;
	//�Լ� swap(): �� �Ű������� ���� ��ȯ
	swap(ptr,&b);

	printf("a=%d, b=%d\n",a,b);
	printf("End of Program");

	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}
