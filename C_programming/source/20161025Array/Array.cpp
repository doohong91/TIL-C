//제목: 선택정렬
//기능: 선택절열을 함수로 만들기
//파일이름: Array.cpp
//수정날짜: 2016년10월25일
//작성자: 민두홍
#include <stdio.h>
//함수: swapElement()
//입력: 배열, 교환할 임의의 두 인덱스(int)
//출력: 없음
//부수효과: 두 요소의 값이 교환됨
void swapElement(int arr[] ,int a, int b) //int arr[] == int* arr (포인터변수를 배열의 이름으로 사용가능)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
//함수: printArray()
//입력: 배열, 배열의 길이(int)
//출력: 없음
//부수효과: 화면에 배열의 모든 요소 출력
void printArray(int arr[] ,int len) //int arr[] == int* arr (포인터변수를 배열의 이름으로 사용가능)
{
	for (int i = 0; i < len; i++) {
		printf("%d\n",arr[i]);
	}
}
//함수: findMinIndex()
//입력: 배열, 배열의 길이(int) // 배열을 함수의 매개변수로 사용할 때, 배열의 포인터와 배열의 길이를 같이 넘겨준다.
//출력: 최소값의 인덱스(int)
//부수효과: 없음
//int findMinInddex(int* arr, int len)
int findMinIndex(int arr[] ,int len) //int arr[] == int* arr (포인터변수를 배열의 이름으로 사용가능)
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
//함수: selectionSort()
//입력: 배열,배열의 길이(int)
//출력: 없음
//부수효과: 배열을 오름차순으로 선택정렬
void selectionSort(int arr[] ,int len) //int arr[] == int* arr (포인터변수를 배열의 이름으로 사용가능)
{
	int iMin;
	for (int i=0; i<len; i++) {
		iMin = findMinIndex(&arr[i],len-i);
		swapElement(&arr[i],0,iMin);
	}	
}
int main() {
	// 이 위는 당분간 무시하세요.
	int arr[] = {5, 3, 22, 11, 1, 6, 4, 2, 14, 33}; 
	int len = 10;
	//int iMin = findMinIndex(&arr[0],len);
	int iMin = findMinIndex(arr,len);// arr = &arr[0] (배열의 이름은 그 배열 첫 요소의 주소)
	//swapElement(arr, 1, 3);
	selectionSort(arr,len);
	printArray(arr,len);
	//printf("최소값의 인덱스는 %d 입니다.\n",iMin); 
	//printf("%d\n",arr[0]); // 배열을 매개변수로 할 때에는 값을 복사하지 않음
	//이 아래는 당분간 무시하세요.
	return 0;
}
