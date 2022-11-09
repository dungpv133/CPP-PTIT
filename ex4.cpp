#include<bits/stdc++.h>
using namespace std;
struct node{
	int key;
	node*left;
	node*right;
	node(int x)
	{
		this->key=x;
		left=right=NULL;
	}
};
struct data{
	int u,v;
	char x;
};
void addNODE(int n,data*a,node**root)
{
	map<int,node*>m;
	for(int i=0;i<n;i++)
	{
		if(m.find(a[i].u)==m.end())
		{
			(*root)=new node(a[i].u);
			if(a[i].x=='L')
			{
				(*root)->left=new node(a[i].v);
				m[a[i].v]=(*root)->left;
			}
			else
			{
				(*root)->right=new node(a[i].v);
				m[a[i].v]=(*root)->right;
			}
			m[a[i].u]=(*root);
		}
		else
		{
			if(a[i].x=='L')
			{
				m[a[i].u]->left=new node(a[i].v);
				m[a[i].v]=m[a[i].u]->left;
			}
			else
			{
				m[a[i].u]->right=new node(a[i].v);
				m[a[i].v]=m[a[i].u]->right;
			}
		}
	}
}
bool isLeaf(node *root)
{
    if(!root ) return false;
    if(!root->left  && !root->right )
        return true;
    return false;
}
int rightLeafSum(node *root){
	int sum=0;
    if(root)
	{
    if(isLeaf(root->right))
            sum = root->right->key;
 	if(root->right)
 	sum+=rightLeafSum(root->right);
    if(root->left&&!isLeaf(root->left))
    sum+=rightLeafSum(root->left);
    }
    return sum;
}


main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		data a[n]={};
		node*root=NULL;
	
		for(int i=0;i<n;i++)
		{
			cin>>a[i].u>>a[i].v>>a[i].x;
			
		}
		addNODE(n,a,&root);
		cout<<rightLeafSum(root)<<endl;
		
	}
}
