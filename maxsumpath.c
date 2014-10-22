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
int disp(struct node* h,int n)
{
	if(h==0) return ;
	else{
	//if(h->left!=0){
		int a= h->data+ disp(h->left,n);//}//printf("\t%d\n",h->data);
		 //printf("%d\n",a);
	//if(h->right!=0){
		int b= h->data+disp(h->right,n);//}
		//printf("%d\t%d\n",a,b);
	return (a>b)? a:b;}
	//if(n==0){return 111;}
	 //return n;}

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
int t=disp(h,9);
printf("%d",t);
}
