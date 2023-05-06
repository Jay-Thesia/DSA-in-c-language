#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int item;
  struct node* left;
  struct node* right;
}bintree;

// Inorder traversal
void inorderTraversal(bintree* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->item);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(bintree* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(bintree* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->item);
}

// Create a new Node
bintree* createNode(int value) {
  bintree* newNode = malloc(sizeof(bintree));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
bintree* insertLeft(bintree* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
bintree* insertRight(bintree* root, int value) {
  root->right = createNode(value);
  return root->right;
}

int check=0;
int  search(bintree*root,int val){
  if(root->item==NULL) printf("tree is empty");
else{
  if(root->item==val){
    check++;
    return check;
  }
  if(root->left!=NULL)
  search(root->left,val);

  if(root->right!=NULL)
  search(root->right,val);
}


}

int main() {
  bintree* root = createNode(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);
  insertRight(root->left,5);

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);

  int check= search(root,1);

  if(check==1){
    
    printf("\tYes");
    
  }
    
    else
  printf("No");
  
 }