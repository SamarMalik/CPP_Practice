#include<iostream>
using namespace std;
int main()
{
	int valueOne;
	int valueTwo;
	
	cout<<"Please enter value number one ";
	cin>>valueOne;
	
	cout<<"Please enter value number two";
	cin>>valueTwo;
	
	cout<<"please select the choice";
	cout<<"1) add\n2) sub";
	int choice;
	cin>>choice;
	
	if(choice==1)
	{
	cout<<valueOne+valueTwo;
	}
	else if(choice==2)
	{
        cout<<valueOne-valueTwo;
	}
}

