//����: Linked List ����
//���: ���������͸� ����� Linked List  
//�����̸�: LinkedList3.cpp
//������¥: 2016��12��13��
//�ۼ���: �ε�ȫ
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* pNext;
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
//�Լ�: addHead()
//�Է�: Linked List�� ��� �������� ������(Node**), �߰��Ϸ��� ����� ������(Node*)
//���: ����
//�μ�ȿ��: Linked List�� ���ο� ����带 �߰�
void addHead(Node** ppHead, Node* pNode) {
	pNode->pNext = *ppHead;
	*ppHead = pNode;
}
//�Լ�: addTail()
//�Է�: Linked List�� ��� ������(Node**), �߰��Ϸ��� ����� ������(Node*)
//���: ����
//�μ�ȿ��: Linked List�� �������� ��带 �߰�
void addTail(Node* pHead, Node* pNode) {
	Node* pTail;
	while(pHead != NULL) {
		pTail = pHead;
		pHead = pHead->pNext;
	}
	pTail->pNext = pNode;
	pNode->pNext = NULL;
}
int main() {
	// �� ���� ��а� �����ϼ���.
	Node* pHead, *pNode;
	pHead = createNode(10);
	pHead->pNext = createNode(20);
	pNode = createNode(30);
	//addHead(&pHead,pNode);
	addTail(pHead,pNode);
	printLL(pHead);
	printf("The number of nodes is %d\n",countLL(pHead));
	//�� �Ʒ��� ��а� �����ϼ���.
	printf("End of Program\n");
	return 0;
}