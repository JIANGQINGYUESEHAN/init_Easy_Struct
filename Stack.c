//#include<stdio.h>
//#include <stdlib.h>
//typedef struct
//{
//    int* data;       // ��̬����洢ջԪ��
//    size_t size;     // ջ��Ԫ�ظ���
//    size_t capacity; // ��̬���������
//} Stack;
////��ʼ��ջ
//void initStack(Stack* stack, size_t capacity) {
//////���ٿռ�
////    stack->data = (int*)malloc(capacity * sizeof(int));
////    stack->capacity = capacity;
//
//        stack->data = (int*)malloc(capacity * sizeof(int)); // �����ڴ�
//    if (stack->data == NULL) {
//        printf("�ڴ����ʧ��\n");
//        exit(1);
//    }
//    stack->size = 0;        // ��ʼ��ջ��СΪ0
//    stack->capacity = capacity; // ���ó�ʼ����
//    printf("ջ�Ѿ���ʼ��������Ϊ %zu\n", capacity);
// 
//}
//
////����
//void spaceScaling(Stack* stack) {
//    stack->capacity *= 2; // ��������
//    stack->data = (int*)realloc(stack->data, stack->capacity * sizeof(int));
//}
////����ջ��Ԫ�ظ���
//size_t getSize(const Stack* stack) {
//    return  stack->size;
//}
////�����Ԫ��
//void push(Stack* stack, int element) {
// //�ж��Ƿ�ջ��
//    if (stack->size == stack->capacity) {
//    //����
//        spaceScaling(stack);
//    //����
//        printf("ջ������������");
//    }
//
//    stack->data[stack->size] = element;
//    stack->size++;
//   
//}
//////��ĩβ����Ԫ��
////void insertEnd(Stack* stack, int element) {
////    // �ж��Ƿ�ջ��
////    if (stack->size == stack->capacity) {
////        // ����
////        spaceScaling(stack);
////        // ��������
////        printf("ջ������������\n");
////    }
////
////    // ��ջ����ջ�ף����Ԫ������ƶ�
////    for (int i = stack->size - 1; i >= 0; i--) {
////        stack->data[i + 1] = stack->data[i];
////    }
////    // ������Ԫ�ص�ջ��
////    stack->data[0] = element;
////
////    stack->size++; // ����ջ��С
////}
//void insertEnd(Stack* stack, int element) {
//    //�ж��Ƿ�ջ��
//    if (stack->size == stack->capacity) {
//        //����
//        spaceScaling(stack);
//        //����
//        printf("ջ������������");
//    }
//   // ���ջΪ��ʱ
//    if (stack->size == 0) {
//        stack->data[0] = element;
//    }
//    else {
//        for (int i = 0; i < stack->size; i++)
//        {
//            //��¼ջ������
//            int  stackEnd = stack->data[i];
//            if (i == 0) {
//                stack->data[i] = element;
//            }
//            stack->data[i + 1] = stackEnd;
//
//
//        }
//
//    }
//    
//    stack->size++; // ����ջ��С
//}
////ջ��Ԫ�س�ջ������
//int pop(Stack* stack) {
//    //��¼ջ��Ԫ��
//    int StackTop = stack->data[stack->size - 1];
//    stack->size--;
//    return StackTop;
//
//
//}
////�ͷ�ջ�ڴ�
//void destroyStack(Stack* stack) {
//    stack->size = 0;
//    stack->capacity = 0;
//    free(stack->data);
//    printf("ջ�Ѿ�����");
//
//
//}
//// ��ӡջ��Ԫ��
//void printStack( Stack* stack) {
//    printf("ջ��Ԫ��: ");
//    for (size_t i = 0; i < stack->size; i++) {
//        printf("%d ", stack->data[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    // ��ʼ��ջ
//    Stack stack;
//    initStack(&stack, 5); // ��ʼ������Ϊ5��ջ
//
//    // ��ջ�в���Ԫ��
//    push(&stack, 10);
//    push(&stack, 20);
//    push(&stack, 30);
//
//    // ��ջ�ײ���Ԫ��
//    //insertEnd(&stack, 5);
//
//    // ��ӡջ��Ԫ��
//    printStack(&stack);
//
//    // �ͷ�ջ�ڴ�
//    destroyStack(&stack);
//
//    return 0;
//}