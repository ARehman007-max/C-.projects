#include <iostream>
using namespace std;
int main()
{
	cout<<"find  year is leap year or not";
	int year ;
	cout<<"\nPlease enter year=";cin>>year;
	if(year%4==0 && year%100!=0||year%400==0)
            {
               cout<<year<<"year you entered is leap year :)";
            }
            else
            {
               cout<< year<<" = year you entered is not leap year :)";
            }
	
}