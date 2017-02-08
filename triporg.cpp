#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class endpoints
{
	char source[20];
	char dest[20];
	
	public:

	void indata()
	{
		cout<<"Enter source:";
		gets(source);
		cout<<"Enter destination:";
		gets(dest);
	}

	void outdata()
	{
		cout<<"\nSource:"<<source;
		cout<<"\nDestination:"<<destination;
	}
};

class logistic:public endpoints
{
	char tramode[20];
	
	public:
		char members[20];
	    int trabud;

	void intwo()
	{	
		cout<<"\n\tLOGISTICS\n"
		cout<<"\nEnter mode of transport:";
		gets(tramode);
		cout<<"Enter number of members:";
		gets(members);
		cout<<"Enter travel budget per member:"
		cin>>trabud;
	}

	void outtwo()
	{
		cout<<"\nTransport:"<<tramode;
		cout<<"\nMembers:"<<members;
		cout<<"\nMaximum travel expenditure:"<<trabud*members;
	}

	void journeyreturn ++(trabud) //Operator Overloaded function
	{
		trabud*=2;
	}
};

class accommo:public logistic //Multi-level inhertance
{
	int livstand;
	int foodbud;
	int numdays;

public:
	accommo():livstand(2),foodbud(100),numdays(1){} //Constructor

	friend accommo assignaccommo(accommo);
	void total;

	void outthree()
	{
		cout<<"Accommodation Standard:"<<livstand;
		cout<<"Food Budget:"<<foodbud;
		cout<<"Number of Days:"<<numdays;
	}
};

accommo assignaccommo(accommo A)  //Friend function
	{
		cout<<"Prices of each accommodation standard (per day):";
		cout<<"5:5000\n4:4000\n3:3000\n2:2000";

		do
		{
		 cout<<"Please enter standard of accommodation (5 4 3 2):";
		 cin>>A.livstand;
		} while (A.livstand>5||A.livstand<2);

		cout<<"Enter food budget (per member):";
		cin>>A.foodbud;

		cout<<"Enter number of days of stay:";
		cin>>A.numdays;

		return A;
	}

void accommo::total()
{		
		int a_total, f_total, t_total;

		a_total = members*numdays*1000;
		f_total = members*numdays*foodbud;
		t_total = trabud*members;

		cout<<"Expenditure for all members:"
		cout<<"\nAccomodation:"<<a_total; //
		cout<<"\nFood:"<<f_total;
		cout<<"\nTravel:"<<t_total;

}

int main()
{
	accommo a;

	cout<<"Program to Organize Your Trip Expenditure!\n"
	a.indata();
	a.intwo();
	a.assignaccommo(a);

	cout<<"\nWould you like to the return journey to be counted, too?";
	if(ch=='y'||ch=='Y');
	{
		++a;
	}

 return 0;	
}
