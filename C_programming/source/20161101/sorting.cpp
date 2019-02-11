//����: ��������
//���: ���������� �Լ��� �����
//�����̸�: sorting.cpp
//������¥: 2016��11��01��
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
//�Է�: �迭, �迭�� ����(int)
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
//�Է�: �迭, �迭�� ����(int len)
//���: ����
//�μ�ȿ��: �迭�� ������������ ��������
void selectionSort(int arr[] ,int len) {
	int iMin;
	for (int i=0; i<len; i++) {
		iMin = findMinIndex(&arr[i],len-i);
		swapElement(&arr[i],0,iMin);
	}	
}
//�Լ�: insertPartial()
//�Է�: �迭, ������ ����� �ε���(int index)
//���: ����
//�μ�ȿ��: arr[i]�� �κй迭 arr[0...i]�� ������ �ڸ��� ��ġ�Ѵ�.
//preconsdition: �迭�� (i-1)��°������ ������ �����̵Ǿ��ִ�.(��������/��������)
void insertPartial(int arr[], int index) {
	for (int i = index; i>0; i--) {
		if(arr[i]<arr[i-1]) {
			swapElement(arr,i,i-1);
		}
		else break;
	}
}
//�Լ�: insertionSort()
//�Է�: �迭, �迭�� ����
//���: ����
//�μ�ȿ��: �迭�� ������ ������ ���ĵȴ�.
void insertionSort(int arr[], int len){
	for (int i = 1 ; i < len; i++) {
		insertPartial(arr, i);
	}
}
int main() {
	// �� ���� ��а� �����ϼ���.
	int arr[] = {3,7,9,6,2}; 
	int len = 5;
	int index = 4;
	//int iMin = findMinIndex(&arr[0],len);
	//int iMin = findMinIndex(arr,len);// arr = &arr[0] (�迭�� �̸��� �� �迭 ù ����� �ּ�)
	//swapElement(arr, 1, 3);
	//selectionSort(arr,len);
	//insertPartial(arr,index);
	insertionSort(arr,len);
	printArray(arr,len);
	//printf("�ּҰ��� �ε����� %d �Դϴ�.\n",iMin); 
	//printf("%d\n",arr[0]); // �迭�� �Ű������� �� ������ ���� �������� ����
	//�� �Ʒ��� ��а� �����ϼ���.
	return 0;
}