#include <stdlib.h>
#include <string.h>
#include "lists.h"
<<<<<<< HEAD

=======
>>>>>>> e7efd92fd56c7c2dacd6a757c12ff51e27635c55
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
<<<<<<< HEAD
 *
=======
 *i
>>>>>>> e7efd92fd56c7c2dacd6a757c12ff51e27635c55
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
<<<<<<< HEAD
 list_t *new;
 unsigned int len = 0;

 while (str[len])
 len++;

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);
 new->len = len;
 new->next = (*head);
 (*head) = new;

 return (*head);
}

=======
list_t *new;
unsigned int len = 0;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}
>>>>>>> e7efd92fd56c7c2dacd6a757c12ff51e27635c55
