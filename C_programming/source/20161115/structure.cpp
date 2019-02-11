//����: 
//���: 
//�����̸�: structure.cpp
//������¥: 2016��11��15��
//�ۼ���: �ε�ȫ
#include <stdio.h>
#include <stdlib.h>
typedef struct complex {
	double re; // �Ǽ���: ����̸�
	double im; // �����: ����̸�
}Complex;
//�Լ�: addComplex()
//�Է�: �� ���� ���Ҽ��� ������(Complex*)
//���: ���Ҽ��� ������
//�μ�ȿ��: ����
//Complex* complexAdd (Complex* pC1, Complex* pC2) {
//	Complex* ptr; // STACK����
//	//x.re = (*pC1).re + (*pC2).re;
//	//x.im = (*pC1).im + (*pC2).im;
//	ptr->re = pC1->re + pC2->re;
//	ptr->im = pC1->im + pC2->im;
//	return ptr;
//} // �Լ� ����� �Ҵ�� �޸𸮵��� �Ҹ�ǹǷ� ���ϴ� �� ������� ����
//Complex* addComplex (Complex* pC1, Complex* pC2) {
//	static Complex x; //static: �������� (DATA����)
//	x.re = pC1->re + pC2->re;
//	x.im = pC1->im + pC2->im;
//	return &x;
//}
Complex* addComplex (Complex* pC1, Complex* pC2) {
	Complex* ptr;
	ptr = (Complex*) malloc(sizeof(Complex)); 
	//(Complex*): ����ȯ 
	//malloc(): �޸� �����Ҵ� (HEAP����), �Ϲ������� void*�� ����, �ڷ����� ������ �� �ʿ� ����
	//malloc �Լ��� �Ű������� sizeof(�ڷ���)���
	//sizeof(): �Ű������� �ڷ����� �Է�, �ڷ����� ũ�⸦ ���
	ptr->re = pC1->re + pC2->re;
	ptr->im = pC1->im + pC2->im;
	return ptr;
}
//�Լ�: printComplex()
//�Է�: ���Ҽ��� ������(Complex*)
//���: ����
//�μ�ȿ��: ȭ�鿡 ���Ҽ� ���
//void complexPrint (Complex a) {
//	printf("%f + j %f\n",a.re, a.im);
//}
void printComplex (Complex* ptr) {
	printf("%f + j %f\n", ptr->re, ptr->im);
}
int main() {
	// �� ���� ��а� �����ϼ���.
	Complex* ptr1, *ptr2;
	Complex a, b, c, d;
	a.re = 0; 
	a.im = 1; 
	b.re = 2; 
	b.im = 3;
	ptr1 = addComplex(&a,&b);
	ptr2 = addComplex(&c,&d);
	printComplex(ptr1);
	//static�� �̿��� ��� c�� d�� ���� ���� ���
	//malloc�� �̿��� ��� a�� b�� ���� ���� ���
	free(ptr1);

	//�� �Ʒ��� ��а� �����ϼ���.
	printf("End of Program\n");
	return 0;
}
