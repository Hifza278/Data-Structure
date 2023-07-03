#include <iostream>
#include<fstream>
using namespace std;
class Car_parking
{
	private:
		//int input;
		
		 // r = Rickshaw
	public:
        int c=0; // c = car
		int m=0; // m = motorcycle
		int b=0; // b = Buses
		int r=0;
	    int amount=0,count=0;
	//price of per vehicles 
	void Rate()
	{
		cout<<"Rate per car is        : 100 /-Rs"<<endl;
		cout<<"Rate per Motorcycle is : 30  /-Rs"<<endl;
		cout<<"Rate per Buses is      : 200 /-Rs"<<endl;
		cout<<"Rate per Ricksh is     : 50  /-Rs"<<endl;
		
	}
	//show the manu which thing is enter in the parking 
	void Manu()
	{
		cout<<"Press 1 for cars : "<<endl;
		cout<<"Press 2 for Motorcycle : "<<endl;
		cout<<"Press 3 for Buses : "<<endl;
		cout<<"Press 4 for Rickshaw : "<<endl;
		cout<<"Press 5 for show the record : "<<endl;
		cout<<"Press 6 for Delet the record : "<<endl;
		cout<<"press 7 to exist the code :" <<endl;
	}
	//calculate the amount of car park in the parking 
	void P_car()
	{
		if(count<=100)
		{
			c++;
			amount +=100;
			count+=1;
		}
		else
			cout<<"Parking is full sorry no more parking :";
	}
	void P_motorcycle()
	{
		if(count<=100)
			{
				m++;
				amount +=30;
				count+=1;
			}
			else
				cout<<"Parking is full sorry no more parking :";
	}
	void P_Bus()
	{
		if(count<=100)
			{
				b++;
				amount +=200;
				count+=1;
			}
			else
				cout<<"Parking is full sorry no more parking :";
	}
	void P_rickshaw()
	{
		if(count<=100)
			{
				r++;
				amount +=50;
				count+=1;
			}
			else
				cout<<"Parking is full sorry no more parking :";
	}
	void show_recorde()
	{
        ofstream offile;
        offile.open("Paring_data.txt");
		cout<<"*********************************************"<<endl;
			cout<<endl;
			cout<<"The total amount = "<<amount<<endl;
			cout<<"The total number of vehicles parked = "<<count<<endl;
			cout<<"The total number of Cars parked = "<<c<<endl;
			cout<<"The total number of buses parked = "<<b<<endl;
			cout<<"The total number of motorcycle = "<<m<<endl;
			cout<<"The total number of Rickshaw = "<<r<<endl;
			cout<<endl;
			cout<<"*********************************************"<<endl;
			cout<<endl;
            offile<<"*********************************************"<<endl;
            offile<<endl;
			offile<<"The total amount = "<<amount<<endl;
			offile<<"The total number of vehicles parked = "<<count<<endl;
			offile<<"The total number of Cars parked = "<<c<<endl;
			offile<<"The total number of buses parked = "<<b<<endl;
			offile<<"The total number of motorcycle = "<<m<<endl;
			offile<<"The total number of Rickshaw = "<<r<<endl;
			offile<<endl;
			offile<<"*********************************************"<<endl;
			offile<<endl;
	}
};
int main()
{
    int input;
	Car_parking park;

	while (input!=7)//input!=7
	{
	//Manue
		park.Manu();
		cin>>input;
		cout<<endl;
		if (input==1)
		{
			park.P_car();
		}
		else if (input==2)
		{
			park.P_motorcycle();
		}
		else if (input==3)
		{
			park.P_Bus();
		}
		else if (input==4)
		{
			park.P_rickshaw();
		}
		else if (input==5)
		{
			park.show_recorde();
		}
		else if (input==6)
		{
			park.amount=0;
			park.count=0;
            park.c=0;
            park.b=0;
            park.m=0;
            park.r=0;
		}
		else
			cout<<"invalid number enter:"<<endl;
	}

    cout<<"your all data is deleted from database and system :"<<endl;

	//system ("pause");
	return 0;
}