#include "queue.h"

#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = {0 };
int w_i=0;
int r_i=0;
int size=0;

int isQueueEmpty(void)
{
    return (size == 0) ? 1 : 0;
}

int isQueueFull(void)
{
    return (size == (QUEUE_SIZE)) ? 1 : 0;
}

int Remove(void)
{
    if (!isQueueEmpty())
    {
        size--;
        r_i=(r_i+1)%(QUEUE_SIZE);
        w_i--;

        return queue_table[r_i-1];
    }

    return 0;
}

int First(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[r_i];

    }

    return 0;
}

void Add(int val)
{
    if (!isQueueFull())
    {
        size++;
        w_i=0;
        queue_table[w_i=0] = val;
        r_i++;
        w_i=(w_i+1)%(QUEUE_SIZE);
    }
}