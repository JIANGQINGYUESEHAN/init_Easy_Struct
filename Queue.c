#include <stdio.h>
#include <stdlib.h>

// ���нṹ
typedef struct
{
    int* data;       // ��̬����洢����Ԫ��
    size_t size;     // ������Ԫ�ظ���
    size_t capacity; // ��̬���������
    size_t front;    // ����ͷָ��
    size_t rear;     // ����βָ��
} Queue;


//��ʼ������{
void initQueue(Queue* queue, size_t capacity) {
//�����ڴ��ַ
    queue->data = (int*)malloc(capacity * sizeof(int));
    queue->size = 0;
    queue->capacity = capacity;
    queue->front = 0;
    queue->rear = 0;


}
//���ض�����Ԫ�ظ���
size_t getSize(const Queue* queue) {

    return queue->size;

}
//�����Ԫ��
void enqueue(Queue* queue, int element) {
//�ж��Ƿ����
    if (queue->size == queue->capacity) {
        printf("����������ɾ��");
        printf("\n");
        return;
    }
    //��ĩβ���в���
    queue->data[queue->rear] = element;
    queue->size++;
    queue->rear = (queue->rear + 1) % queue->capacity;


}
//Ԫ�س�����
int dequeue(Queue* queue) {
//�ж��Ƿ�ӿ�
    if (queue->size == 0) {
        printf("����Ϊ�գ���Ԫ��");
        return -1;
    }
   //��¼�����ӵ�����
    int DeleteQueue = queue->data[queue->front];
    //���ȼ�һ
    queue->size--;
    queue->front== (queue->front + 1) % queue->capacity;

    return DeleteQueue;


}
//�ͷŶ����ڴ�
void destroyQueue(Queue* queue) {
  
      free(queue->data);
      queue->data = NULL;
      queue->size = 0;
      queue->front = 0;
      queue->capacity = 0;
      queue->rear = 0;
  
}
//��������
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

        // ��ʼ������
        initQueue(&myQueue, 7);
        printf("��ʼ������,��ʼ����Ϊ2\n");

        // ���Ԫ��
        enqueue(&myQueue, 1);
        enqueue(&myQueue, 2);
        enqueue(&myQueue, 3);
        enqueue(&myQueue, 4);  
        enqueue(&myQueue, 5);
        enqueue(&myQueue, 7);


    // ����Ԫ��
    printf("����Ԫ��:%d\n", dequeue(&myQueue));
    printQueue(&myQueue);


    printf("������Ԫ�ظ���:%zu\n", getSize(&myQueue));
    // �ͷŶ����ڴ�
    destroyQueue(&myQueue);


    printf("�����ڴ����ͷ�\n");
    return 0;
}
