
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
  struct node
   {
      int val;
      struct node *next;
   };
   struct node *Head=NULL;
   struct node *Tail  = NULL;
void insertFirst(int key) {
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->val = key;
   link->next = Head;
   Head = link;
}
int main(){ 
   insertFirst(1);
   insertFirst(2);
   insertFirst(3);
   insertFirst(4);
   insertFirst(5);
   insertFirst(6);
   printList();

}
void printList() {
   struct node *ptr = Head;
   while(ptr != NULL) {
      printf("%d ->",ptr->val);
      ptr = ptr->next;
   }
}