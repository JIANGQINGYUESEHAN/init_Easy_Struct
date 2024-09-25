//#include<stdio.h>
//#include <stdlib.h>
//typedef struct
//{  
//	// 指向动态数组的指针
//	int* data;
//	// 当前数组中的元素个数
//	size_t size; 
//	// 当前数组的容量（可以容纳的最大元素个数）
//	size_t capacity; 
//} Stu;
// //初始化动态数组
// void initDynamicArray(Stu* array, size_t initialCapacity) {
// 
// //开辟内存空间
//	 array->data = (int*)malloc(initialCapacity * sizeof(int));
//	 array->size = 0;
//	 array->capacity = initialCapacity;
// 
// }
// //释放动态数组内存
// void destroyDynamicArray(Stu* array) {
//	 // 释放动态数组内存
//	 free(array->data);
//	 array->size = 0;
//	 array->capacity = 0;
// 
// }
// //调整动态数组内存大小	
// void resizeDynamicArray(Stu* array, size_t newCapacity) {
//	 array->data = (int*)realloc(array->data, newCapacity * sizeof(int));
//	 array->capacity = newCapacity;
// }
//
// //获取动态数组长度（元素个数）
// size_t getLength(Stu* array) {
//	 return  array->size;
// }
// //在指定位置插入新元素
// void insertAt(Stu* array, size_t index, int element) {
// //判断是否越界
//	 if (index<0 || index>array->size) {
//		 printf("1位置越界，请重新输入\n");
//		 return;
//	 }
//	 //遍历数据，从末尾进行腾空数据
//
//
//	// 如果容量不足，扩容
//	 if (array->size == array->capacity) {
//		 resizeDynamicArray(array, array->capacity * 2);
//	 }
//
//	 // 从末尾到index位置，依次后移元素
//	 for (int i = array->size; i > index; i--) {
//		 array->data[i] = array->data[i - 1];
//	 }
//	 //进行插入数据
//	 array->data[index] = element;
//	 //数组长度进行加加
//	 array->size++;
// }
// //在末尾插入新元素
// void insertEnd(Stu* array, int element) {
//	 insertAt( array,array->size, element);
// }
// //删除指定位置的元素并返回被删除的元素
// int deleteAt(Stu* array, size_t index) {
//	 //判断是否越界
//	 if (index<0 || index>array->size) {
//		 printf("2位置越界，请重新输入\n");
//		 return -1;
//	 }
//	 //记录删除的数据
//	 int temp = array->data[index];
//	 //遍历数据，将后面的数据往后提一下
//
//
//	 // 从index位置往前移动元素
//	 for (int i = index; i < array->size - 1; i++) {
//		 array->data[i] = array->data[i + 1];
//	 }
//	 //长度减一
//	 array->size--;
//	 return temp;
// 
// }
// //删除末尾的元素并返回被删除的元素
// int deleteEnd(Stu* array) {
// 
//	 return  deleteAt(array, array->size - 1);
// }
//	 //遍历所有的元素
// void print(Stu* array) {
// 
//	 for (int i = 0; i < array->size; i++)
//	 {
//		 printf("%d\n",array->data[i]);
//	 }
//	 printf("\n");
// 
// }
//
//
//
//int main() {
//
//	// 声明动态数组
//	Stu stu;
//	initDynamicArray(&stu, 10);
//
//
//	// 插入一些元素
//	insertEnd(&stu, 1);
//	insertEnd(&stu, 2);
//	insertEnd(&stu, 3);
//	insertEnd(&stu, 4);
//	insertAt(&stu, 2, 99); // 在位置2插入99
//
//	// 打印元素
//	print(&stu);
//
//	// 删除元素
//	deleteAt(&stu, 2);
//	print(&stu);
//
//	// 释放内存
//	destroyDynamicArray(&stu);
//	return 0;
//}