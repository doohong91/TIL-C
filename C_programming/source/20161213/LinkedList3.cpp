//제목: Linked List 연습
//기능: 이중포인터를 사용한 Linked List  
//파일이름: LinkedList3.cpp
//수정날짜: 2016년12월13일
//작성자: 민두홍
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* pNext;
}Node;
//함수: createNode()
//입력: 정수(int)
//출력: 노드의 포인터(Node*)
//부수효과: 노드 공간을 동적할당받아 데이터 값을 설정 후 포인터 반환
Node* createNode(int number) {
	Node* pNode;
	pNode = (Node*) malloc(sizeof(Node));
	pNode->data = number;
	pNode->pNext = NULL;
	return pNode;
}
//함수: countLL()
//입력: Linked List의 헤드 포인터(Node*)
//출력: Linked List 노드의 수
//부수효과: 없음
int countLL(Node* pHead) {
	int i = 0;
	while(pHead != NULL) {
		i++;
		pHead = pHead->pNext;
	}
	return i;
}
//함수: printLL()
//입력: Linked List의 헤드 포인터(Node*)
//출력: 없음
//부수효과: 화면에 노드의 데이터값을 순서대로 보여줌
void printLL(Node* pHead) {
	while(pHead != NULL) {
		printf("%d\n",pHead->data);
		pHead = pHead->pNext;
	}
}
//함수: addHead()
//입력: Linked List의 헤드 포인터의 포인터(Node**), 추가하려는 노드의 포인터(Node*)
//출력: 없음
//부수효과: Linked List에 새로운 헤드노드를 추가
void addHead(Node** ppHead, Node* pNode) {
	pNode->pNext = *ppHead;
	*ppHead = pNode;
}
//함수: addTail()
//입력: Linked List의 헤드 포인터(Node**), 추가하려는 노드의 포인터(Node*)
//출력: 없음
//부수효과: Linked List의 마지막에 노드를 추가
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
	// 이 위는 당분간 무시하세요.
	Node* pHead, *pNode;
	pHead = createNode(10);
	pHead->pNext = createNode(20);
	pNode = createNode(30);
	//addHead(&pHead,pNode);
	addTail(pHead,pNode);
	printLL(pHead);
	printf("The number of nodes is %d\n",countLL(pHead));
	//이 아래는 당분간 무시하세요.
	printf("End of Program\n");
	return 0;
}