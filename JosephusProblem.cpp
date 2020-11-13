#include<bits/stdc++.h> 
using namespace std; 
  
/* structure for a node in circular 
   linked list */
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
  

Node *newNode(int data) 
{ 
   Node *temp = new Node; 
   temp->next = temp; 
   temp->data = data; 
} 
  
void getJosephusPosition(int m, int n) 
{ 
 
    Node *head = newNode(1); 
    Node *prev = head; 
    for (int i = 2; i <= n; i++) 
    { 
        prev->next = newNode(i); 
        prev = prev->next; 
    } 
    prev->next = head; 
    
    Node *ptr1 = head, *ptr2 = head; 
    while (ptr1->next != ptr1) 
    { 
        // Find m-th node 
        int count = 1; 
        while (count != m) 
        { 
            ptr2 = ptr1; 
            ptr1 = ptr1->next; 
            count++; 
        } 
  
        /* Remove the m-th node */
        ptr2->next = ptr1->next; 
        free(ptr1); 
        ptr1 = ptr2->next; 
    } 
  
     cout<<"Last person left standing "
            <<"Josephus Position,"<<ptr1->data; 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int n = 14, m = 2; 
    getJosephusPosition(m, n); 
    return 0; 
} 
