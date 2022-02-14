//순서대로 나열하기 -힙 정렬-
//하나의 리스트를 피벗(pivot)을 기준으로 두 개의 비균등한 크기로 분할하고 분할된 부분 리스트를 정렬한 다음, 
//두 개의 정렬된 부분 리스트를 합하여 전체가 정렬된 리스트가 되게 하는 방법이다.
#include <stdio.h>
#include <algorithm>
using namespace std;
void Swap(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void PrintList(int list[]) {

	printf("size : %d ", list[0]);
	printf(" [");
	for (int i = 1; i <= list[0]; i++)
	{
		printf("%d ", list[i]);
	};
	printf("]");
	for (int i = list[0] + 1; i <= 8; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}
void _Sort(int list[], int left, int right)
{
	if (left <= right)
	{
		int pivot = left;
		int i = left + 1;
		int j = right;

		do
		{
			while (list[pivot] > list[i])
				++i;
			while (list[pivot] < list[j])
				--j;
			if (i <= j)
			{
				Swap(&list[i], &list[j]);
				++i;
				--j;
			}
		} while (i <= j);
		Swap(&list[pivot], &list[j]);
		_Sort(list, left, j - 1);
		_Sort(list, j + 1, right);
	}
}
void Sort(int list[], int size) {
	_Sort(list, 0, size - 1);
}
void Push_heap(int list[]) {
	++list[0];
	int size = list[0];
	int child = size;
	int parent = child / 2;

	while (parent > 0)
	{
		if (list[parent] < list[child])
		{
			Swap(&list[parent], &list[child]);
			child = parent;
			parent = child / 2;
		}
		else {
			break;
		}
	}
}
void Make_heap(int list[], int size) {
	for (int i = 0; i < size; i++)
	{
		Push_heap(list);
	}
}
void Pop_heap(int list[]) {
	int size = --list[0];
	Swap(&list[1], &list[size + 1]);
	int parent = 1;
	int child = parent * 2;

	while (child <= size)
	{

		if (child < size && list[child] < list[child + 1])
		{
			child = child + 1;
		}
		if (list[child] > list[parent])
		{
			Swap(&list[parent], &list[child]);
		}
		parent = child;
		child = parent * 2;
	}
}
void Sort_heap(int list[]) {
	int size = list[0];
	for (int i = 0; i < size; i++)
	{
		Pop_heap(list);
	}
}
int main() {

	int list[10] = { 0,70,45,35,15,20,85,75,55 };
	PrintList(list);
	Make_heap(list, 8);

	Sort_heap(list);
	PrintList(list);
	return 0;
};