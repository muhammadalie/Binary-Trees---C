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
        struct node* h=newnode(5);
        struct node* r=newnode(7);
        struct node* l=newnode(2);
        struct node* ll=newnode(1);
	struct node* lr=newnode(6);


        h->left=l;
        h->right=r;
	l->left=ll;
	l->right=lr;
	return h;
}


struct node* build1()
{
	struct node* h=newnode(5);
	struct node* r=newnode(7);
	struct node* l=newnode(6);
	h->left=l;

	h->right=r;
	return h;
}
int max(struct node* h)
{
        if(h->right==NULL)return h->data ;
        max(h->right); 

}

int min(struct node* h)
{
        if(h->left==NULL)return h->data ;
        min(h->left); 

}



int bst1(struct node* h)
{
	if (h->left==NULL&&h->right==NULL) return 1;

	if(h->left!=0)
		if( h->data > max(h->left) && h->data > min(h->left))
			 bst1(h->left);
		else return 0;
	if(h->right!=0)
		if(h->right!=0 && h->data < min(h->right) && h->data < min(h->right))
        		bst1(h->right);

		else return 0;
}



main()
{
struct node* h;
struct node* t;
h=build();
//t=build();
printf("%d",bst1(h));
}
