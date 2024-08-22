//NAME ABDUL REHMAN
#include<iostream>
using namespace std;
int main()
//QUESTION 01
{
	int year;
	int weight;
	cout<<"\t\tFEDERAL BOARD OF REVENUE:\t\t"<<endl;
	cout<<"MODEL YEAR=";
	cin>>year;
	cout<<"WEIGHT=";
	cin>>weight;
	if(year<=1970 && weight<2700)
	{
		cout<<"WEIGHT CLASS IS 1"<<endl;
		cout<<"REG FEE IS RS 1650 "<<endl;
	
	if(weight>=2700 && weight<=3800)
	
	cout<<"WEIGHT CLASS IS 2"<<endl;
	cout<<"REG FEE IS RS 2550 "<<endl;	
	
	if(weight>3800)
	
	cout<<"WEIGHT CLASS IS 3"<<endl;
		cout<<"REG FEE IS RS 4650 "<<endl;
	}
	else if(year>=1971 && year<=1979 && weight<2700)
	{
	cout<<"WEIGHT CLASS IS 4"<<endl;
	cout<<"REG FEE IS RS 2700 ";
    if ( weight>=2700 && weight<=3800)
    
   	cout<<"WEIGHT CLASS IS 5"<<endl;
		cout<<"REG FEE IS RS 3050 "<<endl;
	
	if(weight>3800)
	
		cout<<"WEIGHT CLASS IS 6"<<endl;
		cout<<"REG FEE IS RS 5250 ";
	}
	
	else if (year>=1980 && weight<3500)
	{
		cout<<"WEIGHT CLASS IS 7"<<endl;
		cout<<"REG FEE IS RS 1950 "<<endl;
	
	if(weight>=3500)
	
		cout<<"WEIGHT CLASS IS 8"<<endl;
		cout<<"REG FEE IS RS 5250  "<<endl;
	}
	else
	cout<<"WRONG INPUT";
	return 0;
}
