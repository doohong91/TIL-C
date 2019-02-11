//����: ��������
//���: ���������� �Լ��� �����
//�����̸�: Array.cpp
//������¥: 2016��10��25��
//�ۼ���: �ε�ȫ
#include <stdio.h>
//�Լ�: swapElement()
//�Է�: �迭, ��ȯ�� ������ �� �ε���(int)
//���: ����
//�μ�ȿ��: �� ����� ���� ��ȯ��
void swapElement(int arr[] ,int a, int b) //int arr[] == int* arr (�����ͺ����� �迭�� �̸����� ��밡��)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
//�Լ�: printArray()
//�Է�: �迭, �迭�� ����(int)
//���: ����
//�μ�ȿ��: ȭ�鿡 �迭�� ��� ��� ���
void printArray(int arr[] ,int len) //int arr[] == int* arr (�����ͺ����� �迭�� �̸����� ��밡��)
{
	for (int i = 0; i < len; i++) {
		printf("%d\n",arr[i]);
	}
}
//�Լ�: findMinIndex()
//�Է�: �迭, �迭�� ����(int) // �迭�� �Լ��� �Ű������� ����� ��, �迭�� �����Ϳ� �迭�� ���̸� ���� �Ѱ��ش�.
//���: �ּҰ��� �ε���(int)
//�μ�ȿ��: ����
//int findMinInddex(int* arr, int len)
int findMinIndex(int arr[] ,int len) //int arr[] == int* arr (�����ͺ����� �迭�� �̸����� ��밡��)
{
	int iMin = 0;
	for (int i = 0; i < len; i++) {
		if (arr[iMin] > arr[i]) {
			iMin = i;
		}
	}
	//arr[0] = 100;
	return iMin;
}
//�Լ�: selectionSort()
//�Է�: �迭,�迭�� ����(int)
//���: ����
//�μ�ȿ��: �迭�� ������������ ��������
void selectionSort(int arr[] ,int len) //int arr[] == int* arr (�����ͺ����� �迭�� �̸����� ��밡��)
{
	int iMin;
	for (int i=0; i<len; i++) {
		iMin = findMinIndex(&arr[i],len-i);
		swapElement(&arr[i],0,iMin);
	}	
}
int main() {
	// �� ���� ��а� �����ϼ���.
	int arr[] = {5, 3, 22, 11, 1, 6, 4, 2, 14, 33}; 
	int len = 10;
	//int iMin = findMinIndex(&arr[0],len);
	int iMin = findMinIndex(arr,len);// arr = &arr[0] (�迭�� �̸��� �� �迭 ù ����� �ּ�)
	//swapElement(arr, 1, 3);
	selectionSort(arr,len);
	printArray(arr,len);
	//printf("�ּҰ��� �ε����� %d �Դϴ�.\n",iMin); 
	//printf("%d\n",arr[0]); // �迭�� �Ű������� �� ������ ���� �������� ����
	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}
