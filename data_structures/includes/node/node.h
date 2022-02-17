/**
 * @file node.h
 * @author Vishnu Joshi (joshi.vishnu1994@gmail.com)
 * @brief definition for linked list node
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef NODE_H
#define NODE_H

// node definition for linked list
typedef struct NODE_T{
    int data;
    struct NODE_T *next;
} node_t;

// create node
node_t* new_node(int data);

// free node
void free_node(node_t* node);

#endif