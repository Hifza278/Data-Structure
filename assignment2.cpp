#include<iostream>

using namespace std;

class node
{
    public:
        int data;
        node* next;
    
        node(int val)
        {
            data = val;
            next = NULL;        
        }
};

class List
{
    private:
        node* head;
        int length;
        int info;
    public:
        List()
        {
            head = NULL;
            length = 0;
        }
        void insert(int val, int pos);
        void printList();
        void deleteFrom(int pos);
        bool search(int val);
        bool isEmpty();  
};
void List::insert(int val)
{
	if(head==NULL)
	{
		head = new node;
		cin>>ifo;
		
	}
    if (pos < 1 || pos >  (length+1))
    {
        cout<<"Invalid position!"<<endl;
        return;
    }
    
    node* n = new node(val);

    if(pos == 1)
    {
        n->next = head;
        head = n;
    }
    else
    {
        node* curr = head;

        for (int i = 1; i < (pos - 1); i++)
        {
            curr = curr->next;
        }
        
        n->next = curr->next;
        curr->next = n;        
    }
    length++;    
}
void List::printList()
{
    if(isEmpty()) 
    {
        cout<<"List is empty!"<<endl;
        return;
    }

    node* curr = head;
    while (curr != NULL)
    {
        cout<<curr->data<<"\t";
        curr = curr->next;
    }
    cout<<endl;
}

bool List::isEmpty()
{
    if(head == NULL)
        return true;
    else
        return false;
}

bool List::search(int val)
{
    if (isEmpty())
        cout<<"List is empty!"<<endl;
    else
    {
        node* curr = head;
        while (curr != NULL)
        {
            if(curr->data == val)
                return true;
            curr = curr->next;
        }
        return false;       
    }
}
void List::deleteFrom(int pos)
{
    if (head == NULL)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    node* curr = head;
    
    if(cur == head) 
    {
       // head = curr->next;
        delete curr;
    }
    else
    {
        for (int i = 1; i < (pos-1); i++) 
            curr = curr->next;

        node* delptr = curr->next; 
        curr->next = curr->next->next;
        delete delptr;
    }
    length--;
}
int main()
{
	List l;
	
    l.insert(2,1);
    l.insert(4,2);
    l.insert(7, 3);
    l.insert(-1, 4);
    l.insert(10,5);
    l.insert(8, 5);
    cout<<"print LL"<<endl;
    l.printList();
    cout<<" \n searching "<<endl;
    if(l.search(7))
        cout<<"found! \n"<<endl;
    else
        cout<<"not found!\n"<<endl;
        
    cout<<"\n delete by  position "<<endl; 
    l.deleteFrom(4);
    l.printList();
	cout<<endl;
	return 0;
}
