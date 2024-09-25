//#include<stdio.h>
//#include <stdlib.h>
//// ����ڵ�ṹ
//typedef struct Node
//{   // �ڵ�洢������
//	int data; 
//	// ָ����һ���ڵ��ָ��
//	struct Node* NextAdress;
//
//} Node;
//
//
//// ����ṹ
//typedef struct
//{
//	// ����ͷ�ڵ�ָ��
//	Node* NextAdress;
//	// �����еĽڵ����
//	size_t size;
//} LinkedList;
//
//
//int getElementAt(const LinkedList* list, size_t index) {
//	int TargetElement = 0;
//
//	//�ж��Ƿ�Ϸ�
//	if (index < 0 || index >= list->size) {
//		printf("5λ��Խ�磬����������\n");
//		// ���� -1 ��ʾ����
//		return -1;
//	}
//
//	Node* HeadNode = list->NextAdress;
//	if (index == 0) {
//		TargetElement = HeadNode->data;
//	}
//	else
//	{
//		for (int i = 0; i < index; i++) {
//
//
//			//��¼ index���洢����Ϣ
//			HeadNode = HeadNode->NextAdress;
//		}
//		TargetElement = HeadNode->data;
//	}
//
//	return TargetElement;
//}
////�޸�ָ��λ�õ�Ԫ��
//void modifyAt(LinkedList* list, size_t index, int newValue) {
//
//
//	//�ж��Ƿ�Ϸ�
//	if (index < 0 || index >= list->size) {
//		printf("2λ��Խ�磬����������\n");
//		// ���� -1 ��ʾ����
//		return -1;
//	}
//
//	Node* HeadNode = list->NextAdress;
//	if (index == 0) {
//		HeadNode->data = newValue;
//	}
//	else
//	{
//		for (int i = 0; i < index; i++) {
//
//
//			//��¼ index���洢����Ϣ
//			HeadNode = HeadNode->NextAdress;
//		}
//		HeadNode->data = newValue;
//	}
//
//
//
//}
//
////ɾ��ָ��λ�õ�Ԫ�ز����ر�ɾ����Ԫ��
//int deleteAt(LinkedList* list, size_t index) {
//
//	//�ж��Ƿ�Ϸ�
//	if (index < 0 || index >= list->size) {
//		printf("3λ��Խ�磬����������\n");
//		// ���� -1 ��ʾ����
//		return -1; 
//	}
//
//
//	int a = 0;
//	Node* HeadNode = list->NextAdress;
//	//ȥ���Ľڵ������һ��
//	if (index == 0) {
//		//��¼ index-1���洢����Ϣ
//		a = HeadNode->data;
//		list->NextAdress = HeadNode->NextAdress;
//		//�ͷſռ�
//		free(HeadNode);
//
//
//	}
//	else {
//		Node* PrevNode = NULL;
//
//		for (int i = 0; i < index; i++) {
//		
//			//��¼index-1�ڵ�
//			PrevNode = HeadNode;
//			//��¼ index���洢����Ϣ
//			HeadNode = HeadNode->NextAdress;
//		}
//		a = HeadNode->data;
//		PrevNode->NextAdress = HeadNode->NextAdress;
//		//�ͷ��ڴ�
//		free(HeadNode);
//
//	}
//	
//
//	list->size--; // ���������С
//	return a; // ���ر�ɾ���Ľڵ������
//
//
//	}
//
//
//
//
////��ʼ������
//void initLinkedList(LinkedList* list) {
//	// ��ʼ��ͷ�ڵ�Ϊ��
//	list->NextAdress = NULL;
//	// ��ʼ���ڵ����Ϊ0
//	list->size = 0;
//
//}
////��ָ��λ�ò���Ԫ��
//void insertAt(LinkedList* list, size_t index, int element) {
////�ж��Ƿ�Ϸ�
//	if (index<0 || index>list->size) {
//		printf("4λ��Խ�磬����������\n");
//
//		return;
//	}
//
//	//�����µĽڵ㣨��Ҫ��������ݴ�����½ڵ��У�
//	Node* NewNode = (Node*)malloc( sizeof(Node));
//	NewNode->data = element;
//
//	if (index == 0) {
//
//		NewNode->NextAdress = list->NextAdress;
//		list->NextAdress = NewNode;
//		list->size++;
//	}
//
//	else {
//	//��ͷ�ڵ㿪ʼ
//		Node* PrevNode = list->NextAdress;
//		//��ʼ����
//		for (int i = 0; i < index-1; i++)
//		{  //��¼��index��ַ����Ϣ
//			PrevNode = PrevNode->NextAdress;
//		}
//		//�½ڵ�ĵ�ַ��¼ԭ��indexλ����Ϣ
//		NewNode->NextAdress = PrevNode->NextAdress;
//		//��ԭ������Ϣ��¼����½ڵ����Ϣ
//		PrevNode->NextAdress = NewNode;
//		//���ȼ�һ
//		list->size++;
//		
//	
//	}
//	
//
//}
//
//
//// ��ӡ����
//void printList(const LinkedList* list) {
//	Node* current = list->NextAdress;
//	while (current != NULL) { // �������������
//		printf("%d\n", current->data);
//		current = current->NextAdress; // �ƶ�����һ���ڵ�
//	}
//	printf("NULL\n"); // ��ӡ���������־
//}
//
//// �ͷŶ�̬�����ڴ�
//void destroyDynamicArray(LinkedList* list) {
//	Node* current = list->NextAdress;
//	while (current != NULL) { // �������������
//		Node* temp = current;
//		current = current->NextAdress; // �ƶ�����һ���ڵ�
//		free(temp); // �ͷŵ�ǰ�ڵ�
//	}
//	list->NextAdress = NULL; // �������ͷָ��
//	list->size = 0; // ���ô�С
//}
//
////��������ĳ���
//size_t getLength(const LinkedList* list) {
//	return list->size;
//}
//
////��ĩβ����Ԫ��
//void insertEnd(LinkedList* list, int element) {
//
//	insertAt(list, list->size, element);
//}
//
//// ɾ��ĩβԪ��
//int deleteEnd(LinkedList* list) {
//	if (list->size == 0) {
//		printf("����Ϊ�գ��޷�ɾ��Ԫ��\n");
//		return -1; // ���߷��������ʵ�ֵ
//	}
//	return deleteAt(list, list->size - 1); // ɾ�����һ��Ԫ��
//}
////��ȡָ��λ�õ�Ԫ��
//
//
//int main() {
//	
//	LinkedList myList; // ��������
//	initLinkedList(&myList); // ��ʼ������
//
//	// ʾ������
//	insertEnd(&myList, 10);
//	insertEnd(&myList, 20);
//	insertEnd(&myList, 30);
//	printList(&myList);
//
//	printf("ɾ��λ�� 1 ��Ԫ��: %d\n", deleteAt(&myList, 1));
//	printList(&myList);
//
//	destroyDynamicArray(&myList); // �ͷ��ڴ�
//	return 0;
//}
//
