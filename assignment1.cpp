#include<iostream>
using namespace std;
const int length=10;
class Data_structure
{
	private:
		int *current;
		int size;
		int array[length];
		char choise;
		int num;
	public:
		Data_structure()
		{
			size=0;
			cout<<"constructure"<<endl;
			
		}
		int add(int x)
		{
			if ()
			{
				cout<<"invalid postion:"<<endl;
			}
			else
			{
				if (pos==1)
				{
					current=array;
					return *current=x;
				}
				else
				{
					for (int i = 1; i < (length - 1); i++)
					{
						current = current++;
					}
					return *current=x;
				}
	        }
			size++;
		//	return *current;
		}
		void add(int val)
		{
			current = array;
			*current = val;
			current++;
			size++;
			cout<<"if u add b/w array then press y otherwise press n"<<endl;
			cin>>choise;
			if (choise=='y')
			{
				cout<<"enter the number  after you add number ";
				cin >>num;
				while()
				
			}
		}
		int get()
		{
			return *current;
		}
	/*	void print()
		{
			current=array;
			for(int i=0;i<(length-1);i++)
			{
				cout<<*(current+i)<<",";
				
			}
			cout<<endl;
		}*/
		
		~Data_structure()
		{
			cout<<"distructure";
		}	
};
int main()
{
	
	Data_structure d;
	cout<<d.add(1,1)<<endl;
	cout<<d.add(2,2)<<endl;
	cout<<d.add(3,3)<<endl;
	cout<<d.add(4,4)<<endl;
	cout<<d.add(5,5)<<endl;	
	cout<<d.add(8,12)<<endl;
	cout<<d.add(6,6)<<endl;
	cout<<d.add(7,7)<<endl;
	cout<<d.add(8,8)<<endl;
	cout<<d.add(9,9)<<endl;
//	d.print();
	cout<<"get  "<<d.get()<<endl;

    cout<<d.get()<<endl;
	return 0;
}

