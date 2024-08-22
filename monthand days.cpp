// NAME TALHA
#include<iostream>
using namespace std;
int main()
//LAB3 TASK 7
{
	char op;
	cout<<"days in months:";
	cout<<"press 1 for JANURAY "<<endl;
	cout<<"press 2 for FEBURAY"<<endl;
	cout<<"press 3 for MARCH"<<endl;
	cout<<"press 4 for APRIL"<<endl;
	cout<<"press 5 for MAY"<<endl;
	cout<<"press 6 for JUNE"<<endl;
	cout<<"press 7 for JULY"<<endl;
	cout<<"press 8 for AUGEST"<<endl;
	cout<<"press 9 for SEPTEMBER"<<endl;
	cout<<"press 10 for OCTOBER"<<endl;
	cout<<"press 11 for NOVEMBER"<<endl;
	cout<<"press 12 for DECEMBER"<<endl;
	cin>>op;
	switch(op)
	{
		case '1':
		cout<<"januraray"<<endl;
		cout<<"31 days";
		break;
		case '2':
		cout<<"feburay"<<endl;
		cout<<"28 or 29 days";
		break ;
			case '3':
		cout<<"MARCH"<<endl;
		cout<<"31 days";
		break ;
			case '4':
		cout<<"APRIL"<<endl;
		cout<<"30 days";
		break ;
			case '5':
		cout<<"MAY"<<endl;
		cout<<"31 days";
		break ;	
		case '6':
		cout<<"jUNE"<<endl;
		cout<<"30 days";
		break ;	
		case '7':
		cout<<"jULY"<<endl;
		cout<<"31 days";
		break ;
		case '8':
		cout<<"AUGEST"<<endl;
		cout<<"31 days";
		break ;
		case '9':
		cout<<"SEPTEMBER"<<endl;
		cout<<"30 days";
		break ;
		case '10':
			cout<<"october"<<endl;
			cout<<"31 days"<<endl;
		case '11':
		cout<<"NOVEMBER"<<endl;
		cout<<"30 days";
		break ;
		case '12':
		cout<<"DECEMBER"<<endl;
		cout<<"31 days";
		break ;	
		default:
		cout<<"wrong information";
	}
     return 0;
}
