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
	struct node* h=newnode(4);
	struct node* r=newnode(5);
	struct node* l=newnode(2);
	struct node* ll=newnode(1);
        //struct node* rr=newnode(4);
        //struct node* llr=newnode(2);
	//struct node* lll=newnode(7);
	struct node* lr=newnode(3);


	h->left=l;
	h->right=r;
	l->left=ll;
	l->right=lr;
	//ll->left=lll;
	//ll->right=llr;
	//r->right=rr;
	//r->left=rl;
	return h;
}

void disp(struct node* h)
{	if(h==NULL){ ;return ;}
	//printf("%d",h->data);
	struct node* temp=h->left;
	h->left=h->right;
	h->right=temp;
	
	disp(h->left);
	disp(h->right);

}

void play(struct node* h)
{	if(h==NULL) printf("\n");
	printf("%d",h->data);
        if(h->left!=0){
        play(h->left);}//printf("%d",h->data);}
        if(h->right!=0){
        play(h->right);}


}
main()
{
struct node* h;
h=build();
//int t=

play(h);
disp(h);
printf("***\n");
play(h);
//printf("%d\n",t);
}
