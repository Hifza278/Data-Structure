#include <iostream>
using namespace std;
struct node
{
	int data;
	node* left,*right;
};
class BSTzig
{
	//node* temp;
	int count ;
	public:
		node *root;

		BSTzig()
		{
			root=NULL;
			count=1;
		}
		node* Create(int data) 
		{
			node *Node = new node();
			Node->data = data;
			Node->left == NULL;
			Node->right == NULL;
			return Node;
	    }
		void insert(node* temp,int data)
		{
			//cout<<"function call"<<endl;
			
			if(root==NULL)
			{
				root=Create(data);
				count++;
				cout<<"root : "<<root->data<<endl;
				//cout<<"count ++ in 1st"<<endl;
				temp=root;
				return;
			}
			//cout<<"after root data"<<endl;
			//count ++;
			if(count%2==0)
			{
				
				node* x =Create(data);
				temp->right=x;
				cout<<"eright side data : "<<temp->right->data<<endl;
				count++;
				return;
			}
			
			if(count%2 != 0)
			{
				temp->left=Create(data);
				cout<<"left side data : "<<temp->left->data<<endl;
				count++;
				return;
			}
			
			
			
		}
		node *Get_Root() 
		{
			return root;
		}
		node *GetRoot() 
		{
			cout<<root->data;
			return root;
		}
		void print(node *temp) 
		{
			if (temp == NULL)
				return;
			print(temp->left);
			cout << temp->data << " ";
			print(temp->right);
	   }
};
int main()
{
	BSTzig b;
	b.insert(b.Get_Root(),14);
	b.insert(b.Get_Root(),12);
	b.insert(b.Get_Root(),3);
	b.insert(b.Get_Root(),9);
	cout<<"\nget root : "<<b.GetRoot()<<endl;
	b.print(b.Get_Root());
	return 0;
}