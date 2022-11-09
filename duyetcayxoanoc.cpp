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

void addNODE(int u,int v,char x,node**root)
{
	if((*root)!=NULL&&(*root)->key==u)
	{
		if(x=='L') (*root)->left= new node(v);
		else (*root)-> right=new node(v);
	}
	else
	{
	if((*root)->left!=NULL) addNODE(u,v,x,&(*root)->left);
	if((*root)->right!=NULL) addNODE(u,v,x,&(*root)->right);
	}
}
void xuly(node*root)
{
    if (root == NULL)return; 
    stack<struct node*> s1; 
    stack<struct node*> s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty()) {
	
        while (!s1.empty()) {
            struct node* temp = s1.top();
            s1.pop();
            cout << temp->key << " ";
            if (temp->right)
                s2.push(temp->right);
            if (temp->left)
                s2.push(temp->left);
        }
        while (!s2.empty()) {
            struct node* temp = s2.top();
            s2.pop();
            cout << temp->key << " ";
            if (temp->left)
                s1.push(temp->left);
            if (temp->right)
                s1.push(temp->right);
        }
    }
}

main()
{
    ios_base::sync_with_stdio(0);cout.tie(0);
	int t;cin>>t;
	while(t--)
	{
		int n,u,v;
		char x;
		cin>>n>>u>>v>>x;
		node*root=new node(u);
		addNODE(u,v,x,&root);
		for(int i=2;i<=n;i++)
		{
			cin>>u>>v>>x;
			addNODE(u,v,x,&root);
		}
		xuly(root);
		cout<<endl;
		
	}
}
