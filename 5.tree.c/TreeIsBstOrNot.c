#include<stdio.h>
#include<stdlib.h>


struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    printf("%d -> ", root->key);

    // Traverse right
    inorder(root->right);
  }
}

struct node* insertLeft(struct node* root, int value) {
  root->left = newNode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = newNode(value);
  return root->right;
}


int isBst(struct node* root)
{
    static struct node* prev=NULL;

    if(root!=NULL){
        
        if(!isBst(root->left))
            return 0;
    
        if(prev!=NULL && root->key<=prev->key){
            return 0;
        }
        prev=root;
        return isBst(root->right);
    }
    else
    {
        return 1;
    }
    

}


    int main(){
    
    struct node *root = newNode(8);

  insertLeft(root, 1);
 insertRight(root->left, 3);
  insertRight(root->left->right, 6);

 insertRight(root->left->right->right, 7);
 insertRight(root, 10);
 insertRight(root->right, 14);
  insertLeft(root->right, 4);

  printf("Inorder traversal: ");
  inorder(root);

  printf("\n ******%d",isBst(root));

    return 0;
}