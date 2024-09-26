#include<stdio.h>
QuickSort(int* p, int size) {
	Sort(p, 0, size-1);
}
Sort(int* p, int start, int end) {
	int base = p[start];
	int low = start;
	int height = end;
	if (start < end) {

		while (1) {
			while (low < height && p[low] <= base) {
				low++;
			}
			while (low < height && p[height] >= base) {
				height--;
			}

			if (low > height) {
				int temp = p[low];
				p[height] = p[low];
				p[height] = temp;

			}
			else
			{
				break;
			}
		}
		int temp1 = p[start];
		p[start] = p[height];
		p[height] = temp1;


		Sort(p, 0, height - 1);
		Sort(p, height + 1, end);
	}



}

//打印数组
void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}

	printf("\n");
}

int main() {
	int arr[] = {1,3,4,5,6,7,87,85,32,44};
	int size = sizeof(arr) / sizeof(int);



	//排序前遍历数组
	print(arr, size);

	//调用快速排序
	QuickSort(&arr, size);

	//排序后遍历数组
	print(arr, size);
	return 0;
}