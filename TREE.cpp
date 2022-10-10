#include<stdio.h>
#include<stdlib.h>
// BINary TREE CODE
struct node{
	struct node*left;
	struct node*right;
	int data;	
};
//struct node*root=NULL;
struct node* create_node(int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
struct node*insert(struct node*head,int data){
	struct node*temp=create_node(data);
	if(head==NULL){
		head=temp;
		return head;
	}
else{
	if(head->data>data)
	{	
		return (head->left=insert(head->left,data));
	}
	else{
		return (head->right=insert(head->right,data));
	}

}
	printf("INserted");
}
//traversal
//inorder traversal (LDR)
struct node* inorder(struct node*root){
	if(root==NULL){
		return root;}
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

//POSTORDER (LRD)
/*struct node* postoder(struct node* root){
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	printf("%d",root->data;)
}
//PREORDER (DLR)
void preorder(struct node*root){
	if(root==NULL)
	return ;
	printf("%d",data);
	preorder(root->left);
	preorder(root->right);
}*//*
void search(int key){
	int flag=0;
	if(root==key){
	flag=1;
	break;
	}
	else if(key<root)
	root=root->left;
	else
	root=root->right;
	if(flag==0)
	printf("Not found");
	else
	printf("Found but dont know where ");
}*/
struct node* search_right(struct node*root){
	root=root->right;
	while(root->left!=NULL){
		root=root->left;
	}
	return root;
}
struct node* search_left(struct node*root){
	root=root->left;
	while(root->right!=NULL){
		root=root->right;
	}
	return root;
}
/*void delete(int key){
	if(root==key)
	return;
	else{
		if(root->left!=NULL)
			root=search_left(root->left);
			else
			root=search_right(root->right);
	}
	
}*/
int main(){
	int i,n,data,key;
	struct node*root=NULL;
	printf("How many node syou want you insert ");
	scanf("%d",&n);
	root=insert(root,20);
	for(i=0;i<n;i++){
		printf("Enter the data");
		scanf("%d",&data);
		insert(root,data);
	}
		inorder(root);
}

