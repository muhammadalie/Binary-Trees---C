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

struct node* insert(struct node* node, int data) {
        if (node == NULL) {
                return(newnode(data));
        }
        else {
                if (data <= node->data) node->left = insert(node->left, data);
                else node->right = insert(node->right, data);
                return(node); 
        }
}


struct node* build()
{
	struct node* h=newnode(5);
	struct node* r=newnode(8);
	struct node* l=newnode(4);
	struct node* ll=newnode(11);
        struct node* rr=newnode(4);
        struct node* llr=newnode(2);
	struct node* lll=newnode(7);
	struct node* rl=newnode(13);


	h->left=l;
	h->right=r;
	l->left=ll;
	ll->left=lll;
	ll->right=llr;
	r->right=rr;
	r->left=rl;
	return h;
}	

int disp(struct node* h,int n)
{
	if(h==NULL)  return n==0;
	else{
		int a=n-(h->data);
		return	disp(h->left, a)||
			disp(h->right,a);
	}

}

main()
{
struct node* h;
h=build();
int t=disp(h,28);
printf("%d\n",t);
}
