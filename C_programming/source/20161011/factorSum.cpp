//����: 3�ǹ���� ��
//���: ������ ���� 'num'���� ���� 3�ǹ���� ��
//�����̸�: factorSum.cpp
//������¥: 2016��10��11��
//�ۼ���: �ε�ȫ
#include <stdio.h>
//�Լ��̸�: factorSum() ������ ���� 'num'���� ���� 3�ǹ���� ��
//�Է�: ������ ����
//���: �Է��� �������� ���� 3�� ����� ��
//�μ�ȿ��: ����
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
	// �� ���� ��а� �����ϼ���.

	int sum, num = 100;

	//�Լ� factorSum(): ������ ���� 'num'���� ���� 3�ǹ���� ��
	sum = factorSum(num);
	printf("%d���� ���� 3�� ����� ���� %d�Դϴ�.\n", num, sum);
	printf("End of Program\n");
	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}
