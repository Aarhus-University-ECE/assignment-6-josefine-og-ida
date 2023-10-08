#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

void add(node *head, int x) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: A new node containing x is added to the end of the list
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL) {
    p = p->next;
  } // p points to the last element
  node *element = malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

// exersice 3.b
//function that returns number of elements in in the list
int size(node *l) {
    // Counting variabel set to zero: 
    int size_node = 0; 
  
    // Asses postcondition:
    assert(l != NULL);
  
    node *p = l;

    //A while loop is implented
    // The loop runs as long as p->next is not NULL
    // Iterates size_node with 1 each loop
    // It sets p to the next element 
    while (p->next != NULL) {
    size_node++;
    p = p->next;
  }
  
	return size_node;
}

// exersice 3.c and 3.d
void printout(node *l) {
  // pre:  head points to the first, empty element.
  //       The last element's next is NULL
  // post: The values of the list are printed out
  
  assert(l != NULL);

  node *p = l->next;
  while (p != NULL) {
    printf("%d, ", p->data);
    // A statement also used in b) is inserted
    // The loop needs to be initiliazed to "move" to the next element
    p = p->next;
  }
  printf("\n");
}

// exersice 3.e
int largest(node *l) {
  // pre:  head poinst to the first, empty element.
  // 	     The last element's next is NULL.
  // post: Returns the largest value of the list
    assert(l != NULL);
    
    node *p = l->next;

    // A value value_max is created
    // It is tempoaryly set to 0
    int value_max = 0;

    //A while loop is implented
    // The loop runs as long as p->next is not NULL
    while (p->next != NULL) {
        // An if statement that seraches for the the largest value (value_max)
        // With the loop it runs thru every number in the list
       // If the datapoint is greater than the current value_max, it is set to that data point
        if (value_max < p->data)
        {
            value_max = p->data;
        }
        // The loop is initiliazed to "move" to the next element
        p = p->next;
     }

// The function returns the largest value
return value_max;
}

#ifndef TEST
int main() {
  node *list = malloc(sizeof(node));
  list->next = NULL; // create first empty element

  add(list, 1);
  add(list, 3);

  // Show list here

  add(list, 2);
  // Show list here
  printf("Print out list: \n");
  printout(list); 

   printf("\nThe size of list is: \n");
  int sizeofnode = size(list);
  printf("%d\n", sizeofnode);

  printf("\nThe largest element in the list is: \n");
  printf("%d\n", largest(list));

 

  return 0;
}

#endif
