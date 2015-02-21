struct arrayQ
{
    int front,rear,size;
    int capacity;
    int *array;
};
struct arrayQ *createQueue(int capacity)
{
    struct arrayQ *queue=(struct arrayQ*)malloc(sizeof(struct arrayQ));
    queue->capacity=capacity;
    queue->front=queue->size=0;
    queue->rear=capacity-1;
    queue->array=(int*)malloc(queue->capacity*sizeof(int));
    return queue;
}
int isQueueFull(struct arrayQ *queue)
{
  if(queue->size==queue->capacity)
    return 1;
  else
    return 0;
}
int isQueueEmpty(struct arrayQ *queue)
{
  if(queue->size==0)
    return 1;
  else 
    return 0;
}
void enQueue(struct arrayQ *queue,int element)
{
    queue->rear=(queue->rear+1)%queue->capacity;
    queue->array[queue->rear]=element;
    queue->size=queue->size+1;
}
int deQueue(struct arrayQ *queue)
{
    int item;
    if(isQueueEmpty(queue))
      return INT_MIN;
    item=queue->array[queue->front];
    queue->front=(queue->front+1)%(queue->capacity);
    queue->size=queue->size-1;
    return item;   
}
int frontItem(struct arrayQ *queue)
{
    return queue->array[queue->front];
}
int rearItem(struct arrayQ *queue)
{
    return queue->array[queue->rear];
}
