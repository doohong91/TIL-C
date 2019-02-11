//����: ���Ҽ� ��Ģ����
//���: ����ü �Լ�
//�����̸�: hw2.cpp
//������¥: 2016��11��12��
//�ۼ���: �ε�ȫ
#include <stdio.h>
typedef struct complex {
	double re;
	double im;
}Complex;
//�Լ�: complexAdd()
//�Է�: �� ���Ҽ�
//���: �� ���Ҽ��� ��
//�μ�ȿ��: ����
Complex complexAdd(Complex* pC1, Complex* pC2) {
	Complex x;
	x.re = pC1->re + pC2->re;
	x.im = pC1->im + pC2->im;
	return x;
}
//�Լ�: complexSubtract()
//�Է�: �� ���Ҽ�
//���: �� ���Ҽ��� ��
//�μ�ȿ��: ����
Complex complexSubtract(Complex* pC1, Complex* pC2) {
	Complex x;
	x.re = pC1->re - pC2->re;
	x.im = pC1->im - pC2->im;
	return x;
}
//�Լ�: complexMultiply
//�Է�: �� ���Ҽ�
//���: �� ���Ҽ��� ��
//�μ�ȿ��: ����
Complex complexMultiply(Complex* pC1, Complex* pC2) {
	Complex x;
	x.re = (pC1->re * pC2->re) - (pC1->im * pC2->im);
	x.im = (pC1->re * pC2->im) + (pC1->im * pC2->re);
	return x;
}
//�Լ�: complexDivide
//�Է�: �� ���Ҽ�
//���: ù��° ���Ҽ��� �ι�° ���Ҽ��� ���� ��
//�μ�ȿ��: ����
Complex complexDivide(Complex* pC1, Complex* pC2) {
	Complex x;
	x.re = ((pC1->re * pC2->re) + (pC1->im * pC2->im))/((pC2->re * pC2->re) + (pC2->im * pC2->im));
	x.im = ((pC1->im * pC2->re) - (pC1->re * pC2->im))/((pC2->re * pC2->re) + (pC2->im * pC2->im));
	return x;
}
//�Լ�: complexPrint()
//�Է�: ���Ҽ�
//���: ����
//�μ�ȿ��: ȭ�鿡 ���Ҽ� ���
void complexPrint (Complex a) {
	printf("%f + j %f\n",a.re, a.im);
}
int main() {
	// �� ���� ��а� �����ϼ���.
	Complex a,b;
	a.re = 1;
	a.im = 3;
	b.re = 2;
	b.im = 4;
	complexPrint(complexAdd(&a,&b));
	complexPrint(complexSubtract(&a,&b));
	complexPrint(complexMultiply(&a,&b));
	complexPrint(complexDivide(&a,&b));
	//�� �Ʒ��� ��а� �����ϼ���.
	printf("End of Program\n");
	return 0;
}
