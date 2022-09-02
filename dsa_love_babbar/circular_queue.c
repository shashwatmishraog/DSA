#include<stdio.h>
#include<stdlib.h>
struct circularqueue
{
    int size;
    int f;
    int r;
    int* arr;
};
int isfull(struct  circularqueue *q)
{
    if((q->r+1)%(q->size) == q->f)
    {
        return 1;
    }
    return 0;
}
int isempty(struct  circularqueue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct circularqueue *q,int t)
{
    if(isfull(q))
    {
        printf("queue is full\n");
    }
    else{
        q->r = (q->r+1)%(q->size);
        q->arr[q->r]=t;
    }
}
int dequeue( struct circularqueue *q)
{
    int a = -1;
    if(isempty(q))
    {
        printf("underflow\n");
        return 0;
    }
    else {
        q->f = (q->f+1)%q->size;
        a = (q->arr[q->f]);
    }
    return a;
}
int main()
{
    struct circularqueue q;
    q.size=4;
    q.f = q.r = 0;
    q.arr=(int *)malloc(q.size*sizeof(int));
    ///enqueue few elements
    // enqueue(&q,12);
    // enqueue(&q,15);
    // enqueue(&q,16);
    // enqueue(&q,17);
    printf("The element %d dequed\n",dequeue(&q));
    printf("The element %d dequed\n",dequeue(&q));
    printf("The element %d dequed\n",dequeue(&q));
    enqueue(&q,18);
    printf("The element %d dequed\n",dequeue(&q));
    return 0;
}