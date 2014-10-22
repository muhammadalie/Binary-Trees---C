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
	struct node* rr=newnode(9);
        h->left=l;
        h->right=r;
	r->right=rr;
        return h;
}
int count(struct node* h)
{
	if(h==NULL) return 0;
       	else{
                int a= 1+count(h->left);
                int b= 1+count(h->right); 
        return  (b+a/2);}

	

}

main()
{
struct node* h;
//h=build();
int c=count(build());
//disp(h);
printf("%d",c);
}
