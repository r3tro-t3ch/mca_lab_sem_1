/**
 * @file queue_using_lists.c
 * @author Vishnu Joshi (joshi.vishnu1994@gmail.com)
 * @brief Queue implementation using linked lists
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "./includes/queue/queue.h"

int main(int argc, char **argv){

    int choice;
    queue_t *queue = new_queue();
    while (true){
        printf("1.Enqueue\t2.Dequeue\t3.Size\t4.Print Queue\t99. Exit\n");
        scanf("%d", &choice);
        switch (choice){
            case 1:{
                int element;
                printf("Element : ");
                scanf("%d", &element);
                enqueue(element, queue);
                print_queue(queue);
                break;
            }
            case 2:{
                node_t* element = dequeue(queue);
                if( element != NULL){
                    printf("Dequeued : %d\n", element->data);
                    free_node(element);
                }else{
                    printf("Queue empty\n");
                }
                print_queue(queue);
                break;
            }
            case 3:{
                printf("Size : %d\n", queue->size);
                break;
            }
            case 4:{
                print_queue(queue);
                break;
            }
            case 99: {
                exit(0);
                break;
            }
            default:
                break;
        }
    }
    

    return 0;
}