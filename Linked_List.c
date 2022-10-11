
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
   struct node *newnode=(struct node *)malloc(sizeof(struct node));
   newnode->next=Head;
   newnode->val=key;
   Head=newnode;
}
// void insertlast(int key) {
//    struct node *newnode = (struct node*) malloc(sizeof(struct node));
//    struct node *ptr;
//    ptr=Head;
//    while(ptr!=NULL){
//       ptr=ptr->next;
//    }
//    ptr->next=newnode;
//    newnode->next=NULL;
//    newnode->val = key;
// }
void printList() {
   struct node *ptr = Head;
   while(ptr != NULL) {
      printf("%d ->",ptr->val);
      ptr = ptr->next;
   }
}
void display(){
    struct node *ptr;
    ptr=Head;
    while (ptr != NULL)
    { 
        printf("%d->",ptr->val);
        ptr=ptr->next;
    }
    printf("END");
 
}
void customPrint(int key){
   struct node *ptr;
   ptr=Head;
   while(key-1>0){
     ptr=ptr->next;
     key--;
   }
   printf("%d ",ptr->val);

}

int main(){ 
   insertFirst(1);
   insertFirst(2);
   insertFirst(3);
   insertFirst(4);
   insertFirst(5);
   insertFirst(6);
   customPrint(3);
}
