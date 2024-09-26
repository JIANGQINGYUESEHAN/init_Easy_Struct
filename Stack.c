//#include<stdio.h>
//#include <stdlib.h>
//typedef struct
//{
//    int* data;       // 动态数组存储栈元素
//    size_t size;     // 栈内元素个数
//    size_t capacity; // 动态数组的容量
//} Stack;
////初始化栈
//void initStack(Stack* stack, size_t capacity) {
//////开辟空间
////    stack->data = (int*)malloc(capacity * sizeof(int));
////    stack->capacity = capacity;
//
//        stack->data = (int*)malloc(capacity * sizeof(int)); // 分配内存
//    if (stack->data == NULL) {
//        printf("内存分配失败\n");
//        exit(1);
//    }
//    stack->size = 0;        // 初始化栈大小为0
//    stack->capacity = capacity; // 设置初始容量
//    printf("栈已经初始化，容量为 %zu\n", capacity);
// 
//}
//
////扩容
//void spaceScaling(Stack* stack) {
//    stack->capacity *= 2; // 容量翻倍
//    stack->data = (int*)realloc(stack->data, stack->capacity * sizeof(int));
//}
////返回栈内元素个数
//size_t getSize(const Stack* stack) {
//    return  stack->size;
//}
////添加新元素
//void push(Stack* stack, int element) {
// //判断是否栈满
//    if (stack->size == stack->capacity) {
//    //扩容
//        spaceScaling(stack);
//    //报错
//        printf("栈已满，已扩容");
//    }
//
//    stack->data[stack->size] = element;
//    stack->size++;
//   
//}
//////在末尾插入元素
////void insertEnd(Stack* stack, int element) {
////    // 判断是否栈满
////    if (stack->size == stack->capacity) {
////        // 扩容
////        spaceScaling(stack);
////        // 报告扩容
////        printf("栈已满，已扩容\n");
////    }
////
////    // 从栈顶到栈底，逐个元素向后移动
////    for (int i = stack->size - 1; i >= 0; i--) {
////        stack->data[i + 1] = stack->data[i];
////    }
////    // 插入新元素到栈底
////    stack->data[0] = element;
////
////    stack->size++; // 更新栈大小
////}
//void insertEnd(Stack* stack, int element) {
//    //判断是否栈满
//    if (stack->size == stack->capacity) {
//        //扩容
//        spaceScaling(stack);
//        //报错
//        printf("栈已满，已扩容");
//    }
//   // 如果栈为空时
//    if (stack->size == 0) {
//        stack->data[0] = element;
//    }
//    else {
//        for (int i = 0; i < stack->size; i++)
//        {
//            //记录栈底数据
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
//    stack->size++; // 更新栈大小
//}
////栈顶元素出栈并返回
//int pop(Stack* stack) {
//    //记录栈顶元素
//    int StackTop = stack->data[stack->size - 1];
//    stack->size--;
//    return StackTop;
//
//
//}
////释放栈内存
//void destroyStack(Stack* stack) {
//    stack->size = 0;
//    stack->capacity = 0;
//    free(stack->data);
//    printf("栈已经毁灭");
//
//
//}
//// 打印栈内元素
//void printStack( Stack* stack) {
//    printf("栈内元素: ");
//    for (size_t i = 0; i < stack->size; i++) {
//        printf("%d ", stack->data[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    // 初始化栈
//    Stack stack;
//    initStack(&stack, 5); // 初始化容量为5的栈
//
//    // 向栈中插入元素
//    push(&stack, 10);
//    push(&stack, 20);
//    push(&stack, 30);
//
//    // 在栈底插入元素
//    //insertEnd(&stack, 5);
//
//    // 打印栈内元素
//    printStack(&stack);
//
//    // 释放栈内存
//    destroyStack(&stack);
//
//    return 0;
//}