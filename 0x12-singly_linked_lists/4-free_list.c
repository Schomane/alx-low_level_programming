<<<<<<< HEAD
#include<stdlib.h>
=======
#include <stdlib.h>
>>>>>>> e7efd92fd56c7c2dacd6a757c12ff51e27635c55
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
<<<<<<< HEAD
 list_t *temp;

 while (head)
 {
 temp = head->next;
 free(head->str);
 free(head);
 head = temp;
 }
=======
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
>>>>>>> e7efd92fd56c7c2dacd6a757c12ff51e27635c55
}

