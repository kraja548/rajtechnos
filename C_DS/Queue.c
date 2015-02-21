#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"arrayQ.h"
main()
{
    struct arrayQ *queue=createQueue(5);
    enQueue(queue,5);
    enQueue(queue,15);
    enQueue(queue,10);
    enQueue(queue,25);
    enQueue(queue,54);
    printf("Front Item is %d\n",frontItem(queue));
    printf("Rear Item is %d\n",rearItem(queue));
}