#include <stdio.h>
#include <stdlib.h>
struct Qnode{
    int key;
    struct Qnode *next;
};
struct Queue {
    struct QNode *front;
    struct QNode *rear;
};
struct Queue* createQueue(){
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}
void enqueue(){


}