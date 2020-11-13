#include<iostream>

using namespace std;

class Stack
{
    private:
        int *arr;
        int *top;
        int size;
        int count;
    public:
        Stack(int s)
        {
            arr = new int[s];
            size = s;
            count = -1;
            top = arr;
        }

        bool isFull()
        {
            if(count == (size-1))
                return true;
            else
                return false;
        }

        void push(int val)
        {
        	
            if(isFull())
            {
            	cout<<"Overflow!"<<endl;
            //	return;
			}
                
            //	*top=val;
            //	cout<<"top data when array is empty : "<<*top<<endl;
			else
			{
				count++;
				top++;
				*top = val;
				cout<<"top data : "<<*top<<endl;
				   
        	}
        	
        	
        	//top++;
        	
        }

        bool isEmpty()
        {
            if(count == -1)
                return true;
            else
                return false;
        }

        int pop()
        {
            if(isEmpty())
            {
                cout<<"Underflow!"<<endl;
                return -1;
            }
            else
            {
                int *val = top;
                top--;
                count--;
                return *val;
            }
            
        }

        int peek()
        {
            if(isEmpty())
                cout<<"Stack is empty!"<<endl;
            else
                return *top;
        }

        ~Stack()
        {
            delete[] arr;
        }
};

int main()
{
    Stack s(5);
    s.push(5);
    s.push(1);
    s.push(4);
    s.push(3);
    s.push(1);
    s.push(99);
   cout<<"pop"<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    //cout<<"peek"<<endl;
    cout<<"peek"<<endl;
    cout<<s.peek()<<endl;
    cout<<"pop"<<endl;
    cout<<s.pop()<<endl;
     s.push(9);
    s.push(4);
     cout<<"peek"<<endl;
    cout<<s.peek()<<endl;
    cout<<"pop"<<endl;
    cout<<s.pop()<<endl;
    
    return 0;
}
