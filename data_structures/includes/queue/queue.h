/**
 * @file queue.h
 * @author Vishnu Joshi (joshi.vishnu1994@gmail.com)
 * @brief Queue definition using linked list
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../node/node.h"

typedef struct QUEUE_T{
    node_t *front, *rear;
    int size;
} queue_t;


// create queue
queue_t* new_queue();

// insert
void enqueue(int element, queue_t* queue);

// delete
node_t* dequeue(queue_t* queue);

// print queue
void print_queue(queue_t* queue);