/**
 * @file queue.c
 * @author Vishnu Joshi (you@domain.com)
 * @brief queue implementation using linked list
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "./queue.h"

// create queue
queue_t* new_queue(){
    queue_t* queue = (queue_t*) calloc(1, sizeof(queue_t));
    queue->front = queue->rear = NULL;
    queue->size = 0;
    return queue;
}

// insert
void enqueue(int element, queue_t* queue){
    node_t* node = new_node(element);
    if(queue->size == 0){
        queue->front = queue->rear = node;
    }else{
        queue->rear->next = node;
        queue->rear = node;
    }
    queue->size++;
}

// delete
node_t* dequeue(queue_t* queue){
    if(queue->size == 0){
        return NULL;
    }
    node_t* element = queue->front;
    queue->front = queue->front->next;
    queue->size--;
    return element;
}

// print queue
void print_queue(queue_t* queue){
    printf("[");
    for(node_t* node = queue->front; node != NULL; node = node->next){
        printf(" %d ", node->data);
    }
    printf("]\n");
}