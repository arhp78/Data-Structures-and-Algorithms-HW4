#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};


BstNode* Insert(BstNode* root,int data) {
	if(root == NULL) {
		BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left =  NULL;
	newNode->right = NULL;
	root=newNode;
	}

	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}

	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

/*void printCorner(BstNode *root, int len)
{    long int sum=0;
     BstNode *arr1[len]={0} , *arr2[len]={0};
    if(root == NULL)
        return ;

    //queue<BstNode*> q;
    //q.push(root);
    arr1[0]=root;
    int lengh=1;
    while(!q.empty())
    {

        int n = q.size();

        for(int i =0;i<n;i++)
        {
            BstNode *temp = q.front();
            q.pop();


            if(i==0 ){
                sum=sum+temp->data;
            }

            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }

    }
    cout<<sum<<"\n";
}*/
void printCorner(BstNode *root, int len)
{    long int sum=0;
     BstNode *arr1[len]={0} , *arr2[len]={0};
    if(root == NULL)
        return ;

    //queue<BstNode*> q;
    //q.push(root);
    arr1[0]=root;
    int lengh=1;
    while(lengh)
    {
        int i=0,count=0;
        while(arr1[i]!=0){
            count++;
        }
        //int n = q.size();

        for(int i =0;i<count;i++)
        {
            BstNode *temp = arr1[i];
            //q.pop();


            if(i==0 ){
                sum=sum+temp->data;
            }

            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }

    }
    cout<<sum<<"\n";
}
bool Search(BstNode* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}
int main() {
	BstNode* root = NULL;
	int n,i,q,num,min1,min2,sum=0;
	min1=0;
	cin>>n>>q;

	int len=floor((n+q)/2);


for(i=0;i<n;i++){
        cin>>num;
        bool is=false;
        is=Search(root,num) ;
         if(is){
            continue ;
        }
        root = Insert(root,num);

	}
printCorner(root,len);
for(i=0;i<q;i++){
        bool is=false;
        cin>>num;
        is=Search(root,num) ;
        if(is){
            printCorner(root,len );
            continue ;
        }
        root = Insert(root,num);

        printCorner(root,len );

	}

        return 0;
}
