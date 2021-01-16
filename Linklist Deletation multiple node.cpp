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
     void print(){
        node* itera = head;
        while(itera){
            cout<<itera->data<<" ";
            itera = itera->next;
        }
    }
    node* deleteKey(node *head,int x)
{
     
    
    node *tmp = head;
     
    while (head->data == x)
    {
        head = head->next;
    }
    while (tmp->next != NULL)
    {
        if (tmp->next->data == x)
        {
            tmp->next = tmp->next->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return head;
}
// same  all value deleted but one is remaining
	void removeDuplicates(Node* head) 
{ 
   
    Node* current = head; 
 
   
    Node* next_next; 
     
   
    if (current == NULL) 
    return; 
 
   
    while (current->next != NULL) 
    { 
   
    if (current->data == current->next->data) 
    { 
             
        next_next = current->next->next; 
        free(current->next); 
        current->next = next_next; 
    } 
    else
    { 
        current = current->next; 
    } 
    } 
} 
};
int main(){
    List l1;
    
    l1.add_link_node_to_tail(1);
    l1.add_link_node_to_tail(2);
    l1.add_link_node_to_tail(2);
    l1.add_link_node_to_tail(4);
    l1.add_link_node_to_tail(9);
    l1.add_link_node_to_tail(6);
    l1.add_link_node_to_tail(2);
    l1.add_link_node_to_tail(7);
    l1.add_link_node_to_tail(3);
    l1.print();
    cout<<endl;
    l1.deleteKey(l1.get_head(),2);
    l1.print();
    return 0;
}
