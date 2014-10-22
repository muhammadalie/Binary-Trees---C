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
	struct node* r=newnode(6);
	struct node* l=newnode(3);
	h->left=l;
	h->right=r;
	return h;
}
void disp(struct node* h)
{
	
	if(h->left!=0){
	disp(h->left);}//printf("\t%d\n",h->data);
	if(h->right!=0){
	disp(h->right);}printf("\t%d\n",h->data);

}

main()
{
struct node* h;
h=build();
//insert(h,8);
insert(h,4);
insert(h,1);
insert(h,2);
insert(h,0);
disp(h);
}
