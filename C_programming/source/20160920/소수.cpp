//����: �帧����
//���: ���ǹ�
//�����̸�: �ݶ�.cpp
//������¥: 2016��9��20��
//�ۼ���: �ε�ȫ
#include <stdio.h>
int main() {
	// �� ���� ��а� �����ϼ���.
	int a=2,num;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);
	
	//a�� �Ҽ����� Ȯ��
	while (a<=num) {
		if(num%a==0) {
			break;
		}
		a++;
	}
	if(a>=num)
		printf("%d�� �Ҽ��Դϴ�.\n", num);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", num);

	printf("End of Program\n");

	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}
