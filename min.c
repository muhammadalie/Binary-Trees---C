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
        struct node* r=newnode(6);
        struct node* l=newnode(4);
	struct node* rr=newnode(7);
        h->left=l;
        h->right=r;
	r->right=rr;
        return h;
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

int maxdepth(struct node* h)
{

      if(h==NULL) return 0;
       else{
		int a=maxdepth(h->left)+1;
		int b=maxdepth(h->right)+1; 
	return (a>b)? a:b;}

}
void disp(struct node* h)
{
        if(h!=NULL);
        //printf("\t%d\n",h->data);
        if(h->left!=0)
        disp(h->left);
	if(h->left==0)
	printf("%d",h->data);
        //if(h->right!=0)
        //disp(h->right);

}


main()
{
struct node* h;
//h=build();
 h=build();
insert(h,3);
insert(h,9);
insert(h,1);
disp(h);
//printf("%d",c);
}
