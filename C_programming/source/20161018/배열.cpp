//����: �迭
//���: �迭
//�����̸�: �迭.cpp
//������¥: 2016��10��18��
//�ۼ���: �ε�ȫ
#include <stdio.h>
int main() {
	// �� ���� ��а� �����ϼ���.
	
	int a[4];// �迭 ���� : 1. �迭�� �̸�, 2. �迭�� ����, 3. �� ����� �ڷ���
	int b = 0;// ���� ���� + �ʱ�ȭ
	int c[3] = {1,3,5};// �迭�� ���� + �ʱ�ȭ
	int d[] = {0, 4, 8, 4, 2, -5, 12};// �迭�� ũ��� 4
	a[b] = 30;// ������ ���� b�� �ε����� ���(�ε����� �ݵ�� �������̾�� �Ѵ�.)
	int len = 7;
	//�迭 d�� �� ��Ҹ� ȭ�鿡 ����ϴ� ���α׷�
	for(int i=0; i<len; i++){
		printf("d[%d] = %d\n",i,d[i]);
	}
	//�迭 d�� �� ����� ���� ���ϴ� ���α׷�
	int sum = 0;
	for(int i=0;i<len;i++) {
		//sum = sum + d[i];
		sum += d[i];
	}
	printf("The sum of d = %d\n",sum);
	//�迭 d�� ��� �� ���� ���� ���� ���ϴ� ���α׷�
	int min = d[0];
	for(int i = 1; i < len; i++) {
		if(d[i]<min) {
			min = d[i];
		}
	}
	printf("The minimun element is %d\n", min);
	//�迭 d�� ��� �� ���� ���� ���� �ε����� ���ϴ� ���α׷�
	int iMin = 0;
	for(int i = 0; i<len; i++) {
		if(d[i]<d[iMin]) {
			iMin = i;
		}
	}
	printf("The index of minimun element is %d\n", iMin);
	printf("End of Program");
	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}
