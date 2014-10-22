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
	struct node* h=newnode(2);
	struct node* r=newnode(3);
	struct node* l=newnode(1);
	//struct node* ll=newnode(1);
        //struct node* rr=newnode(4);
        //struct node* llr=newnode(2);
	//struct node* lll=newnode(7);
	//struct node* lr=newnode(3);


	h->left=l;
	h->right=r;
	//l->left=ll;
	//l->right=lr;
	//ll->left=lll;
	//ll->right=llr;
	//r->right=rr;
	//r->left=rl;
	return h;
}

void dup(struct node* h)
{	struct node* temp;
	if(h==NULL){return ;}

		 dup(h->left);
		 dup(h->right);
		//swaping from last node
		temp=h->left;
		h->left=newnode(h->data);
		h->left->left=temp;
}

void play(struct node* h)
{	if(h==NULL){ printf("\n");return;}
	printf("%d",h->data);
        if(h->left!=0){
        play(h->left);}
        if(h->right!=0){
       play(h->right);}


}
main()
{
struct node* h;
h=build();
//int t=

play(h);
dup(h);
printf("\n***\n");
play(h);
//printf("%d\n",t);
}
