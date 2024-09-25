//#include<stdio.h>
//#include <stdlib.h>
//// 链表节点结构
//typedef struct Node
//{   // 节点存储的数据
//	int data; 
//	// 指向下一个节点的指针
//	struct Node* NextAdress;
//
//} Node;
//
//
//// 链表结构
//typedef struct
//{
//	// 链表头节点指针
//	Node* NextAdress;
//	// 链表中的节点个数
//	size_t size;
//} LinkedList;
//
//
//int getElementAt(const LinkedList* list, size_t index) {
//	int TargetElement = 0;
//
//	//判断是否合法
//	if (index < 0 || index >= list->size) {
//		printf("5位置越界，请重新输入\n");
//		// 返回 -1 表示错误
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
//			//记录 index所存储的信息
//			HeadNode = HeadNode->NextAdress;
//		}
//		TargetElement = HeadNode->data;
//	}
//
//	return TargetElement;
//}
////修改指定位置的元素
//void modifyAt(LinkedList* list, size_t index, int newValue) {
//
//
//	//判断是否合法
//	if (index < 0 || index >= list->size) {
//		printf("2位置越界，请重新输入\n");
//		// 返回 -1 表示错误
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
//			//记录 index所存储的信息
//			HeadNode = HeadNode->NextAdress;
//		}
//		HeadNode->data = newValue;
//	}
//
//
//
//}
//
////删除指定位置的元素并返回被删除的元素
//int deleteAt(LinkedList* list, size_t index) {
//
//	//判断是否合法
//	if (index < 0 || index >= list->size) {
//		printf("3位置越界，请重新输入\n");
//		// 返回 -1 表示错误
//		return -1; 
//	}
//
//
//	int a = 0;
//	Node* HeadNode = list->NextAdress;
//	//去掉的节点是最后一个
//	if (index == 0) {
//		//记录 index-1所存储的信息
//		a = HeadNode->data;
//		list->NextAdress = HeadNode->NextAdress;
//		//释放空间
//		free(HeadNode);
//
//
//	}
//	else {
//		Node* PrevNode = NULL;
//
//		for (int i = 0; i < index; i++) {
//		
//			//记录index-1节点
//			PrevNode = HeadNode;
//			//记录 index所存储的信息
//			HeadNode = HeadNode->NextAdress;
//		}
//		a = HeadNode->data;
//		PrevNode->NextAdress = HeadNode->NextAdress;
//		//释放内存
//		free(HeadNode);
//
//	}
//	
//
//	list->size--; // 更新链表大小
//	return a; // 返回被删除的节点的数据
//
//
//	}
//
//
//
//
////初始化链表
//void initLinkedList(LinkedList* list) {
//	// 初始化头节点为空
//	list->NextAdress = NULL;
//	// 初始化节点个数为0
//	list->size = 0;
//
//}
////在指定位置插入元素
//void insertAt(LinkedList* list, size_t index, int element) {
////判断是否合法
//	if (index<0 || index>list->size) {
//		printf("4位置越界，请重新输入\n");
//
//		return;
//	}
//
//	//开辟新的节点（将要插入的数据打包到新节点中）
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
//	//从头节点开始
//		Node* PrevNode = list->NextAdress;
//		//开始遍历
//		for (int i = 0; i < index-1; i++)
//		{  //记录着index地址的信息
//			PrevNode = PrevNode->NextAdress;
//		}
//		//新节点的地址记录原来index位置信息
//		NewNode->NextAdress = PrevNode->NextAdress;
//		//将原来的信息记录变成新节点的信息
//		PrevNode->NextAdress = NewNode;
//		//长度加一
//		list->size++;
//		
//	
//	}
//	
//
//}
//
//
//// 打印链表
//void printList(const LinkedList* list) {
//	Node* current = list->NextAdress;
//	while (current != NULL) { // 修正这里的条件
//		printf("%d\n", current->data);
//		current = current->NextAdress; // 移动到下一个节点
//	}
//	printf("NULL\n"); // 打印链表结束标志
//}
//
//// 释放动态数组内存
//void destroyDynamicArray(LinkedList* list) {
//	Node* current = list->NextAdress;
//	while (current != NULL) { // 修正这里的条件
//		Node* temp = current;
//		current = current->NextAdress; // 移动到下一个节点
//		free(temp); // 释放当前节点
//	}
//	list->NextAdress = NULL; // 清空链表头指针
//	list->size = 0; // 重置大小
//}
//
////返回链表的长度
//size_t getLength(const LinkedList* list) {
//	return list->size;
//}
//
////在末尾插入元素
//void insertEnd(LinkedList* list, int element) {
//
//	insertAt(list, list->size, element);
//}
//
//// 删除末尾元素
//int deleteEnd(LinkedList* list) {
//	if (list->size == 0) {
//		printf("链表为空，无法删除元素\n");
//		return -1; // 或者返回其他适当值
//	}
//	return deleteAt(list, list->size - 1); // 删除最后一个元素
//}
////获取指定位置的元素
//
//
//int main() {
//	
//	LinkedList myList; // 声明链表
//	initLinkedList(&myList); // 初始化链表
//
//	// 示例操作
//	insertEnd(&myList, 10);
//	insertEnd(&myList, 20);
//	insertEnd(&myList, 30);
//	printList(&myList);
//
//	printf("删除位置 1 的元素: %d\n", deleteAt(&myList, 1));
//	printList(&myList);
//
//	destroyDynamicArray(&myList); // 释放内存
//	return 0;
//}
//
