//����: �Ǻ���ġ ����
//���: ���ǹ�,�ݺ���
//�����̸�: HW1Fibonacci.cpp
//������¥: 2016��9��27��
//�ۼ���: �ε�ȫ
#include <stdio.h>
int main() {
	// �� ���� ��а� �����ϼ���.
	int x=1,y=1,count=1; 
	int temp;  
	while (count<=40) {
		printf("%d, ",x);
		temp=x;
		x=y;
		y=temp+y;
		count++;
	}
	
	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}
