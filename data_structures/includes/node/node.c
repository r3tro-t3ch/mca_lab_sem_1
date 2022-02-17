/**
 * @file node.c
 * @author Vishnu Joshi (joshi.vishnu1994@gmail.com)
 * @brief Implementation of node operations
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdlib.h>
#include "./node.h"

// create node
node_t* new_node(int data){
    node_t *node = (node_t*) calloc(1, sizeof(node_t));
    node->data = data;
    node->next = NULL;
    return node;
}

// free node
void free_node(node_t* node){
    free(node);
}