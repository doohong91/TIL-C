//����: ����ü
//���: ����ü
//�����̸�: struct.cpp
//������¥: 2016��11��08��
//�ۼ���: �ε�ȫ
#include <stdio.h>
//struct complex {
//	double re; // �Ǽ���: ����̸�
//	double im; // �����: ����̸�
//};
//typedef struct complex Complex;
//���� �� ������ ���ļ�
typedef struct complex {
	double re; // �Ǽ���: ����̸�
	double im; // �����: ����̸�
}Complex;
//�Լ�: complexAdd()
//�Է�: �� ���� ���Ҽ�(Complex)
//���: ���Ҽ�
//�μ�ȿ��: ����
//struct complex complexAdd(struct complex a, struct complex b) {
//Complex complexAdd (Complex a, Complex b) {
//	//struct complex x;
//	Complex x;
//	x.re = a.re + b.re;
//	x.im = a.im + b.im;
//	return x;
//}

//�Լ�: complexAdd()
//�Է�: �� ���� ���Ҽ��� ������(Complex*)
//���: ���Ҽ�
//�μ�ȿ��: ����
Complex complexAdd (Complex* pC1, Complex* pC2) {
	Complex x;
	//x.re = (*pC1).re + (*pC2).re;
	//x.im = (*pC1).im + (*pC2).im;
	x.re = pC1->re + pC2->re;
	x.im = pC1->im + pC2->im;
	return x;
}
//�Լ�: complexPrint()
//�Է�: ���Ҽ�(Complex)
//���: ����
//�μ�ȿ��: ȭ�鿡 ���Ҽ� ���
void complexPrint (Complex a) {
	printf("%f + j %f\n",a.re, a.im);
}
typedef int MyType;
int main() {
	// �� ���� ��а� �����ϼ���.
	MyType q = 0; //==> int q = 0;
	struct complex a, b, c;// ����ü ��������
	// 1. a,b,c�� ����ü �����̸�
	// 2. complex�� a,b,c ������ ����ü �̸�
	a.re = 0; 
	a.im = 1; 
	b.re = 2; 
	b.im = 3;
	complexPrint(complexAdd(&a,&b));
	
	//�� �Ʒ��� ��а� �����ϼ���.
	printf("End of Program\n");
	return 0;
}
