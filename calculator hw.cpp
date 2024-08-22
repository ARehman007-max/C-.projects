#include<iostream>
using namespace std;
main()
{
	int A;
	int B;
	char op;
	cout<<"ENTER THE VALUE OF A=";
	cin>>A;
	cout<<"ENTER THE VALUE OF B=";
	cin>>B;
	cin>>op;
	
	
    switch(op){
	
	case'*':
	cout<<"Multiply:="<<A<<"*"<<B<<"="<<A*B;
	break;
	case'+':
    cout<<"Sum:="<<A<<"+"<<B<<"="<<A+B;
    break;
    case'-':
    cout<<"Subtration:="<<A<<"-"<<B<<"="<<A-B;
    break;
    case'%':
    cout<<"divi="<<A<<"%"<<B<<"="<<A%B;
    break;
}
 return 0;
}
