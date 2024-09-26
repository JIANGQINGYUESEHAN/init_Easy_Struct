#include <stdio.h>
#include <stdlib.h>

// 队列结构
typedef struct
{
    int* data;       // 动态数组存储队列元素
    size_t size;     // 队列内元素个数
    size_t capacity; // 动态数组的容量
    size_t front;    // 队列头指针
    size_t rear;     // 队列尾指针
} Queue;


//初始化队列{
void initQueue(Queue* queue, size_t capacity) {
//开辟内存地址
    queue->data = (int*)malloc(capacity * sizeof(int));
    queue->size = 0;
    queue->capacity = capacity;
    queue->front = 0;
    queue->rear = 0;


}
//返回队列内元素个数
size_t getSize(const Queue* queue) {

    return queue->size;

}
//添加新元素
void enqueue(Queue* queue, int element) {
//判断是否队满
    if (queue->size == queue->capacity) {
        printf("队已满，请删除");
        printf("\n");
        return;
    }
    //在末尾进行插入
    queue->data[queue->rear] = element;
    queue->size++;
    queue->rear = (queue->rear + 1) % queue->capacity;


}
//元素出队列
int dequeue(Queue* queue) {
//判断是否队空
    if (queue->size == 0) {
        printf("队列为空，无元素");
        return -1;
    }
   //记录被出队的数据
    int DeleteQueue = queue->data[queue->front];
    //长度减一
    queue->size--;
    queue->front== (queue->front + 1) % queue->capacity;

    return DeleteQueue;


}
//释放队列内存
void destroyQueue(Queue* queue) {
  
      free(queue->data);
      queue->data = NULL;
      queue->size = 0;
      queue->front = 0;
      queue->capacity = 0;
      queue->rear = 0;
  
}
//遍历队列
void printQueue(Queue* queue) {
    for (int i = queue->front, j = 0; j < queue->size; i++, j++) {
        {
            /*   int data = queue->data[(i + 1) % queue->capacity];*/
            int data = queue->data[i % queue->capacity];
            printf("%d ", data);
        }
        printf("\n");


    }
}

    int main()
    {

        Queue myQueue;

        // 初始化队列
        initQueue(&myQueue, 7);
        printf("初始化队列,初始容量为2\n");

        // 入队元素
        enqueue(&myQueue, 1);
        enqueue(&myQueue, 2);
        enqueue(&myQueue, 3);
        enqueue(&myQueue, 4);  
        enqueue(&myQueue, 5);
        enqueue(&myQueue, 7);


    // 出队元素
    printf("出队元素:%d\n", dequeue(&myQueue));
    printQueue(&myQueue);


    printf("队列内元素个数:%zu\n", getSize(&myQueue));
    // 释放队列内存
    destroyQueue(&myQueue);


    printf("队列内存已释放\n");
    return 0;
}
