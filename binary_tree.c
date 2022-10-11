#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *left;
    struct node *right;
};
struct node* createNode(int value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->val = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

int main(){
    struct node* root = createNode(1);
    /* following is the tree after above statement
         1
        / \
      NULL NULL
    */
  
    root->left = createNode(2);
    root->right = createNode(3);
    /* 2 and 3 become left and right children of 1
            1
         /    \
        2      3
      /  \    /  \
   NULL NULL NULL NULL
    */
  
    root->left->left = createNode(4);
    /* 4 becomes left child of 2
             1
         /    \
        2      3
      /  \    /  \
     4 NULL NULL NULL
    / \
 NULL NULL
    */
  
    getchar();
    return 0;

}