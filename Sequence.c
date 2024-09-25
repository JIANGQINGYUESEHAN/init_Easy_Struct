//#include<stdio.h>
//#include <stdlib.h>
//typedef struct
//{  
//	// ָ��̬�����ָ��
//	int* data;
//	// ��ǰ�����е�Ԫ�ظ���
//	size_t size; 
//	// ��ǰ������������������ɵ����Ԫ�ظ�����
//	size_t capacity; 
//} Stu;
// //��ʼ����̬����
// void initDynamicArray(Stu* array, size_t initialCapacity) {
// 
// //�����ڴ�ռ�
//	 array->data = (int*)malloc(initialCapacity * sizeof(int));
//	 array->size = 0;
//	 array->capacity = initialCapacity;
// 
// }
// //�ͷŶ�̬�����ڴ�
// void destroyDynamicArray(Stu* array) {
//	 // �ͷŶ�̬�����ڴ�
//	 free(array->data);
//	 array->size = 0;
//	 array->capacity = 0;
// 
// }
// //������̬�����ڴ��С	
// void resizeDynamicArray(Stu* array, size_t newCapacity) {
//	 array->data = (int*)realloc(array->data, newCapacity * sizeof(int));
//	 array->capacity = newCapacity;
// }
//
// //��ȡ��̬���鳤�ȣ�Ԫ�ظ�����
// size_t getLength(Stu* array) {
//	 return  array->size;
// }
// //��ָ��λ�ò�����Ԫ��
// void insertAt(Stu* array, size_t index, int element) {
// //�ж��Ƿ�Խ��
//	 if (index<0 || index>array->size) {
//		 printf("1λ��Խ�磬����������\n");
//		 return;
//	 }
//	 //�������ݣ���ĩβ�����ڿ�����
//
//
//	// ����������㣬����
//	 if (array->size == array->capacity) {
//		 resizeDynamicArray(array, array->capacity * 2);
//	 }
//
//	 // ��ĩβ��indexλ�ã����κ���Ԫ��
//	 for (int i = array->size; i > index; i--) {
//		 array->data[i] = array->data[i - 1];
//	 }
//	 //���в�������
//	 array->data[index] = element;
//	 //���鳤�Ƚ��мӼ�
//	 array->size++;
// }
// //��ĩβ������Ԫ��
// void insertEnd(Stu* array, int element) {
//	 insertAt( array,array->size, element);
// }
// //ɾ��ָ��λ�õ�Ԫ�ز����ر�ɾ����Ԫ��
// int deleteAt(Stu* array, size_t index) {
//	 //�ж��Ƿ�Խ��
//	 if (index<0 || index>array->size) {
//		 printf("2λ��Խ�磬����������\n");
//		 return -1;
//	 }
//	 //��¼ɾ��������
//	 int temp = array->data[index];
//	 //�������ݣ������������������һ��
//
//
//	 // ��indexλ����ǰ�ƶ�Ԫ��
//	 for (int i = index; i < array->size - 1; i++) {
//		 array->data[i] = array->data[i + 1];
//	 }
//	 //���ȼ�һ
//	 array->size--;
//	 return temp;
// 
// }
// //ɾ��ĩβ��Ԫ�ز����ر�ɾ����Ԫ��
// int deleteEnd(Stu* array) {
// 
//	 return  deleteAt(array, array->size - 1);
// }
//	 //�������е�Ԫ��
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
//	// ������̬����
//	Stu stu;
//	initDynamicArray(&stu, 10);
//
//
//	// ����һЩԪ��
//	insertEnd(&stu, 1);
//	insertEnd(&stu, 2);
//	insertEnd(&stu, 3);
//	insertEnd(&stu, 4);
//	insertAt(&stu, 2, 99); // ��λ��2����99
//
//	// ��ӡԪ��
//	print(&stu);
//
//	// ɾ��Ԫ��
//	deleteAt(&stu, 2);
//	print(&stu);
//
//	// �ͷ��ڴ�
//	destroyDynamicArray(&stu);
//	return 0;
//}