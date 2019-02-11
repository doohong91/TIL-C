//����: Linked List ����
//���: Linked List ����ü ���� �� �⺻ �Լ� ����
//�����̸�: LinkedList.cpp
//������¥: 2016��11��29��
//�ۼ���: �ε�ȫ
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* pNext; // Node* �� �ȵ�
}Node;
//�Լ�: createNode()
//�Է�: ����(int)
//���: ����� ������(Node*)
//�μ�ȿ��: ��� ������ �����Ҵ�޾� ������ ���� ���� �� ������ ��ȯ
Node* createNode(int number) {
	Node* pNode;
	pNode = (Node*) malloc(sizeof(Node));
	pNode->data = number;
	pNode->pNext = NULL;
	return pNode;
}
//�Լ�: countLL()
//�Է�: Linked List�� ��� ������(Node*)
//���: Linked List ����� ��
//�μ�ȿ��: ����
int countLL(Node* pHead) {
	int i = 0;
	while(pHead != NULL) {
		i++;
		pHead = pHead->pNext;
	}
	return i;
}
//�Լ�: printLL()
//�Է�: Linked List�� ��� ������(Node*)
//���: ����
//�μ�ȿ��: ȭ�鿡 ����� �����Ͱ��� ������� ������
void printLL(Node* pHead) {
	while(pHead != NULL) {
		printf("%d\n",pHead->data);
		pHead = pHead->pNext;
	}
}
int main() {
	// �� ���� ��а� �����ϼ���.
	Node* pHead;/* *pNode1, *pNode2;
	pNode1 = (Node*) malloc(sizeof(Node));
	pNode1->data = 10;
	pNode1->pNext = NULL;
	pNode2 = (Node*) malloc(sizeof(Node));
	pNode2->data = 7;
	pNode2->pNext = NULL;
	pNode1->pNext = pNode2;*/
	pHead = createNode(10);
	pHead->pNext = createNode(7);
	printLL(pHead);
	//�� �Ʒ��� ��а� �����ϼ���.
	printf("End of Program\n");
	return 0;
}
