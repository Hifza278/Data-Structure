#include<iostream>
#include <iostream>
using namespace std;
 
struct Node {
    int data;
    Node *left, *right;
};
 class BST
 {
 	Node* temp;
 	public:
 		Node* root;
    BST()
    {
    	root=temp=NULL;
	}

Node* newNode(int key)
{
    Node* temp1 = new Node;
    temp1->data = key;
    temp1->left = temp1->right = NULL;
 
    return temp1;
}
 

void inorder(Node *temp)
{
    if (root == NULL)
        return;
 
    if( temp->left!=NULL )
    {
    	inorder(temp->left);
    }
    
  	cout<<temp->data<<"  ";
  	
  	if( temp->right!=NULL )
  	{
		inorder(temp->right);
	}
	
  return;
}
 

void insert(Node* temp, int key)
{
    //cout<<"insert<<endl"<<endl;
    if (root == NULL)
    {
        temp=newNode(key);
        root=temp;
        return;
	}
	
    if( temp->data==key )
    {
      cout<<" \n Given number is already present in tree.\n";
      return;
    }

    if (temp->data >key)
    {
    	if(temp->left !=NULL)
		{
			insert(temp->left, key);
			return;
 		}
 		else
 		{
 			temp->left=newNode(key);
 			cout<<temp->left->data<<endl;
	 		return;
		}
	}
    else
    {
    	if(temp->right!=NULL)
		{
			insert(temp->right, key);
			return;
 		}
 		else
 		{
 			temp->right=newNode(key);
 			cout<<temp->right->data<<endl;
	 		return;
		}
	}
}
Node* minimumKey(Node* curr)
{
    while (curr->left != NULL) {
        curr = curr->left;
    }
    return curr;
}

void searchKey(Node* &curr, int key, Node* &parent)
{
    
    while (curr != NULL && curr->data != key)
    {
        parent = curr;
        
        if (key < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

Node* DeleteNodeInBST(Node* root,int data)
{
    Node* parent = NULL;
    Node* curr = root;

    searchKey(curr, data, parent);
 
    if(root==NULL) 
        return root;
   
    else
    {
        //No child
        if(root->right == NULL && root->left == NULL)
        {
            delete root;
            root = NULL;   
        }
        //One child 
        else if(root->right == NULL)
        {
            Node* temp = root;
            root= root->left;
            delete temp;
        }
        else if(root->left == NULL)
        {
            Node* temp = root;
            root= root->right;
            delete temp;
        }
        //two child
        else
        {
            Node* temp = minimumKey(root->left);
            root->data = temp->data;
            root->left = DeleteNodeInBST(root->left, temp->data);
        }
    }
    return root;
}
};
int main()
{
	BST b;
        b.insert(b.root, 50);
        b.insert(b.root, 40);
        b.insert(b.root, 60);
        b.insert(b.root, 34);
        b.insert(b.root, 38);
        b.insert(b.root, 37);
        b.insert(b.root, 36);
        b.insert(b.root, 55);
        b.insert(b.root, 65);
        b.insert(b.root, 58);
        b.insert(b.root, 67);
        b.insert(b.root, 63);
        b.insert(b.root, 62);
        b.insert(b.root, 61);
        cout<<"----inordr-----"<<endl;
  b.inorder(b.root);
  cout<<"\n----delete-----"<<endl;
  cout<<"case : 1 delete node have no chlid"<<endl;
    b.DeleteNodeInBST(b.root, 36);
    b.inorder(b.root);
    cout<<"\ncase : 2 delete node have one  chlid"<<endl;
    b.DeleteNodeInBST(b.root, 34);
    b.inorder(b.root);
     cout<<"\ncase : 3 delete node have two   chlid"<<endl;
    b.DeleteNodeInBST(b.root, 60);
    b.inorder(b.root);
 
    return 0;
}
