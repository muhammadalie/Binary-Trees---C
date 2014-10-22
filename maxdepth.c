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

int maxdepth(struct node* h)
{

      if(h==NULL) return 0;
       else{
		int a=maxdepth(h->left)+1;
		int b=maxdepth(h->right)+1; 
	return (a>b)? a:b;}

}

main()
{
struct node* h;
//h=build();
int c=maxdepth(build());
//disp(h);
printf("%d",c);
}
