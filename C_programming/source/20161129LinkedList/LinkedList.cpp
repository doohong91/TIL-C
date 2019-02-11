//제목: Linked List 연습
//기능: Linked List 구조체 정의 및 기본 함수 구현
//파일이름: LinkedList.cpp
//수정날짜: 2016년11월29일
//작성자: 민두홍
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* pNext; // Node* 는 안됨
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
int main() {
	// 이 위는 당분간 무시하세요.
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
	//이 아래는 당분간 무시하세요.
	printf("End of Program\n");
	return 0;
}
