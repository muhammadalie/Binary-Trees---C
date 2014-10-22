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
        struct node* h=newnode(1);
        struct node* r=newnode(2);
        struct node* l=newnode(3);
        struct node* ll=newnode(1);


        h->left=l;
        h->right=r;
	l->left=ll;
	return h;
}


struct node* build1()
{
	struct node* h=newnode(1);
	struct node* r=newnode(2);
	struct node* l=newnode(3);
	h->left=l;
	h->right=r;
	return h;
}

int smtree(struct node* h,struct node* p)
{
	if(h==NULL){return (p!=NULL)?  0:1;}
	else if(p==NULL){return (h!=NULL)? 0:1;}
	else{
		return(h->data==p->data)?
		smtree(h->right,p->right)&&smtree(h->left,p->left):0;
		}
}

main()
{
struct node* h;
struct node* t;
h=build();
t=build();
printf("%d",smtree(h,t));
}
