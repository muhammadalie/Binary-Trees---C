#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node* left;
	struct node* right;
};


struct node* newnode(int data) {
	struct node* node = malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

struct node* build()
{
	struct node* h=newnode(2);
	struct node* r=newnode(3);
	struct node* l=newnode(1);
	h->left=l;
	h->right=r;
	return h;
}
void disp(struct node* h)
{
	if(h!=NULL)
	printf("\t%d\n",h->data);
	if(h->left!=0)
	disp(h->left);
	if(h->right!=0)
	disp(h->right);

}

main()
{
struct node* h;
h=build();
disp(h);
}
