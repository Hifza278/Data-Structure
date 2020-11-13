#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

class List
{
    private:
        node *head;
    public:
        List()
        {
            head = NULL;
        }
    
    node * get_new_node(int data){
        node* link_node = new node();
        link_node->data=data;
        link_node->next=NULL;
        return link_node;
    }

    void add_link_node_to_head(int data){
        if(head==NULL){
            head = get_new_node(data);
            return;
        }
        node* data_node = get_new_node(data);
        data_node->next = head;
        head = data_node;
    }

    void add_link_node_to_tail(int data){
        if(head==NULL){
            head = get_new_node(data);
           
            return;
        }
       
        node* data_node = get_new_node(data);
        node *tail = get_tail(head);
        tail->next = data_node;
       
    }

    node* get_head(){
        return head;
    }

    node* get_tail(node* head){
        node* tail_hunter =head;
        while(tail_hunter->next!=NULL)
        tail_hunter = tail_hunter->next;
        return tail_hunter;
    }

    // Task solution

    int get_data(node* random_node){
        if (random_node==NULL)
            return 0;
        else return random_node->data;
    }

    node* get_prev(node* random_node){
        node* temp_iter = head;
        if (random_node==NULL)
                return NULL;
        if (random_node==head)return head;
        while(temp_iter->next!=random_node){
            temp_iter=temp_iter->next;
        }
        return temp_iter;
    }        

    void print(){
        node* itera = head;
        while(itera){
            cout<<itera->data<<" ";
            itera = itera->next;
        }
    }
    // My function task codding 
    node* get_length(int key)
    {
    	int length=0;
    	node* iter = head;
    	while(iter != NULL)
    	{
    		if ((length)==key)
    		{
    			//cout<<"length is :: "<<length<<endl;
    			//cout<<"*iter data : "<<iter->data<<endl;
    			return iter;
			}
			//cout<<"length before ++ ::"<<length<<endl;
			length++;
			//cout<<"length after ++ ::"<<length<<endl;
			iter = iter->next;
		}
        return iter;
	}
	
	void find_sum(int key)
	{
		int sum = 0;
		node* temp = get_length(key);
		while(temp != NULL)
		{
			sum =sum + temp->data;
			//cout<<"sum in temp loop : "<<sum<<endl;
			temp = temp->next;
		}
		cout<<"sum is : "<< sum<<endl;
	}
    
    void odd_even()
    {
    	node* iter = head;
    	node* temp;
    	temp=NULL;
    	node* temp1;
    	temp1=NULL;
    	while(iter->next != NULL)
    	{
    		if(iter->data%2 != 0)
    		{
    			node* data_node = get_new_node(iter->data);
        		node *tail = get_tail(head);
        		tail->next = data_node;
        		cout<<data_node->data<<endl;
			}
			else
			{
				temp1 = get_new_node(iter->data);
        		node *tail = get_tail(head);
        		tail->next = temp1;
        		cout<<temp1->data<<endl;
        		temp1->next=NULL;
			}
			iter = iter->next;
			return;
		}
	}
    
    void split_add(){
        //Your code here
        int sum;
        int q;
        int rem;
        node* split =head;
        while(split != NULL)
        {

            if(split->data > 9 )
            {
                sum=split->data;
                q=sum/10;
                rem=sum%10;
                node* add=get_new_node(rem);
                node* qu=get_new_node(q);
                node* temp=get_prev(split);
                temp->next=temp->next->next;
                get_data(split);
                qu->next= add; 
                add->next=temp->next;
                temp->next=qu;
                
            }
            split=split->next;

        }

        return;
    }
    
void EvenOdd(){  
    node *end = head;  
    node *prev = NULL;  
    node *curr = head;  
  
    /* Get pointer to the last node */
    while (end->next != NULL)  
        end = end->next;  
  
    node *new_end = end;  
  
    
    while (curr->data % 2 == 0 && curr != end)  
    {  
        new_end->next = curr;  
        curr = curr->next;  
        new_end->next->next = NULL;  
        new_end = new_end->next;  
    }  
  
    if (curr->data%2 != 0)  
    {  
        head = curr;  
  
        while (curr != end)  
        {  
            if ( (curr->data) % 2 != 0 )  
            {  
                prev = curr;  
                curr = curr->next;  
            }  
            else
            {  
                
                prev->next = curr->next;  
  
                curr->next = NULL;  

                new_end->next = curr;  

                new_end = curr;  
  
                curr = prev->next;  
            }  
        }  
    }  
  
    
    else prev = curr;  
  
    if (new_end != end && (end->data) % 2 != 0)  
    {  
        prev->next = end->next;  
        end->next = NULL;  
        new_end->next = end;  
    }  
    return;  
}  
    int recervise(node* temp)
    {
        if(temp==NULL)
        {
            return 0;
        }
        return 1+recervise(temp->next);
    }
    
};
    void drevrse(string str)
    {
        cin>>str;
        if(cin.peek()=='\n')
        {
            cout<<str<<" ";
            return;
        }
        drevrse(str);
        cout<<str<<" ";
        return;
    }
    string nameR(string str,int index)
    {
        cout<<"callme"<<endl;
        string save, add;
        if (str.length()==0)
        {
            return " ";
        }
        save=nameR(str,index+1);
        add=save+str[index];
        return add;
    }

    void nameR2(string str)
    {
        //string save, add;
        if (str.size()==0)
        {
           // cout<<"me"<<endl;
            return ;
        }
        nameR2(str.substr(1));
        cout<<str<<" ";
        return ;
    }
int main(){
    List l1;
    
    l1.add_link_node_to_tail(1);
    l1.add_link_node_to_tail(2);
    l1.add_link_node_to_tail(5);
    l1.add_link_node_to_tail(4);
    l1.add_link_node_to_tail(9);
    l1.add_link_node_to_tail(6);
    l1.add_link_node_to_tail(8);
    l1.add_link_node_to_tail(7);
    l1.add_link_node_to_tail(3);
    l1.print();
    cout<<endl;
    l1.split_add();
    l1.print();cout<<endl;
    l1.find_sum(3);
    cout<<endl;
    //l1.odd_even();
    l1.EvenOdd();
    l1.print();
    cout<<endl;
    cout<<"length is : "<<l1.recervise(l1.get_head())<<endl;
    drevrse("i am hifza majeed");
    cout<<endl;
    cout<<"nameR function call:"<<endl;
   // nameR("hifza MAjeed",0);
    cout<<"\n nameR2 function call:"<<endl;
    nameR2("Ifra Majeed");
}
