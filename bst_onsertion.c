
#include <stdio.h>

#include <stdlib.h>

struct node* newNode(int data);

struct node* insert(struct node* node, int data);

void inorderTraversal(struct node* node);

struct node
{

int data;

    struct node* left;

    struct node* right;

};

int  main()
 {

    struct node* root = NULL;

    root = insert(root, 5);

    insert(root, 3);

    insert(root, 2);

    insert(root, 4);

    insert(root, 7);

    insert(root, 6);

    insert(root, 8);

    inorderTraversal(root);

    return 0;

}







struct node* newNode(int data)
{

    struct node* node = (struct node*)malloc(sizeof(struct node));

    node->data = data;

    node->left = NULL;

    node->right = NULL;

    return node;

}



struct node* insert(struct node* node, int data)
 {

    if (node == NULL)
    {

        return newNode(data);

    }

    if (data < node->data)
    {

        node->left = insert(node->left, data);

    }

    else if (data > node->data)
    {

        node->right = insert(node->right, data);

    }

    return node;

}



void inorderTraversal(struct node* node)
 {

    if (node != NULL)
    {

        inorderTraversal(node->left);

        printf("%d ", node->data);

        inorderTraversal(node->right);

    }

}

