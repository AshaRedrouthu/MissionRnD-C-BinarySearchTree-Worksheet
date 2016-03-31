/*

Given a Binary Search Tree ,Calculate its Inorder ,Postorder and PreOrder

Input : A BST
Output : Copy Inorder/Postorder/Preorder into the array specified .

Note : Memory for the Array is already allocated ,Dont allocate it again using malloc
->Take help of helper functions which are actually solving the problem .
->Dont Process Invalid Inputs

Bonus Task : 
->Go to the BSTTransversals Spec File ,We have left a custom test case for you ,Try to fill
it and understand how testing works .
*/

#include <stdio.h>
#include<stdlib.h>
struct node{
	struct node * left;
	int data;
	struct node *right;
};

void inorderR(struct node *root, int *arr, int *i)
{
	if (root != NULL)
	{
		inorderR(root->left, arr, i);
		arr[(*i)++] = root->data;
		inorderR(root->right, arr, i);
	}
}
void preorderR(struct node * root, int *arr, int *i){
	if (root != NULL){
		arr[(*i)++] = root->data;
		preorderR(root->left, arr, i);
		preorderR(root->right, arr, i);

	}
}
void postorderR(struct node *root, int *arr, int *i)
{
	if (root != NULL){
		postorderR(root->left, arr, i);
		postorderR(root->right, arr, i);
		arr[(*i)++] = root->data;
	}
}
void inorder(struct node *root, int *arr){
	if (root == NULL || arr == NULL)
		return;
	int i = 0;
	inorderR(root, arr, &i);	
}
void preorder(struct node *root, int *arr){
	if (root == NULL || arr == NULL)
		return;

	int i = 0;
	preorderR(root, arr, &i);
	
}
void postorder(struct node *root, int *arr){
	if (root == NULL || arr == NULL)
		return;

	int i = 0;
	postorderR(root, arr, &i);
}

