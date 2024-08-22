#include<iostream>
#include<fstream>
#include<string.h>
void adminuse();
using namespace std;
struct account
{
	char name[16];
	char passward[16];
	char gender;//(m) for male and (f) for female 
	int amount;
}pak[20];
account apak[20];
struct admin
       {
       char id[20];
	   char passward[20];	
       };
     int cuscount=0;  
void admin1();
void admineuse();
void usermenu(int);
void intromenu();
void mainmenu();
int main()
    {
		
		cout<<"\t\t\t\tBANK MANAGEMENT SYSTEM:\t\t";
		cout<<"\n****************************************";
        intromenu();
    }
void mainmenu()
{
	int op;
	     cout<<"\n\t\tYOU HAVE THREE OPTIONs:";
        cout<<"\nPLEASE ENTER 1 FOR CREATE ACCOUNT:";
        cout<<"\nPLEASE ENTER 2 FOR LOGIN ACCOUNT:";
        cout<<"\nPLEASE ENTER 3 FOR going back to interomenu : ): )";
        cout<<"\n\t\tPLEASE HELP US BY ENTERING YOUR OPTION=";cin>>op;
        ofstream wild("bank1.txt ");
        if(op==1)
        {
        	ofstream wild("bank34.txt",ios::app);//ios::app
        	cout<<"\n\t\tTHANKS FOR MAKING ACCOUNT IN OUR BANK:)\nPLEASE GIVE THE FOLLOWING INFORMATION";
        
		cout<<"\nPLEASE ENTER YOUR NAME =";cin>>pak[cuscount].name;
        cout<<"PLEASE ENTER YOUR ID =";cin>>pak[cuscount].passward;
        cout<<"PLEASE ENTER YOUR GENDER =";cin>>pak[cuscount].gender;
        cout<<"PLEASE ENTER YOUR AMOUNT=";cin>>pak[cuscount].amount;
       		wild<<pak[cuscount].name<<endl ;
       		wild<<pak[cuscount].passward <<endl;
    		wild<<pak[cuscount].gender<<endl;
			wild<<pak[cuscount].amount<<endl; 
			cout<<"\nTHANKS !FOR CREATING account IN OUR BANK:)";     	
		}
		if(op==2)
		{
        	
        	account paki;
        	char nam[16];
        	char pass[16];
        	cout<<"\nPLEASE GIVE THE FOLLOWING INFORMATION";
        	cout<<"\n\tIN ORDER TO LOGIN YOUR ACCOUNT YOU SHOULD ENTER FOLLOWING DATA";
            cout<<"\nPLEASE ENTER YOUR NAME = ";cin>>nam;
            cout<<"PLEASE ENTER YOUR ID = ";cin>>pass;
          //  cout<<"PLEASE ENTER YOUR GENDER = ";cin>>paki.gender;
          ifstream des("bank34.txt");
            int i=0;
            int f=0;
            while(!(des.eof()))
            {
			
            des>>pak[i].name;
            des>>pak[i].passward;
            des>>pak[i].gender;
            des>>pak[i].amount;
        cout<<" file reading name ="<<pak[i].name<<endl;
        cout<<" file reading id ="<<pak[i].passward<<endl;
        cout<<" file reading id ="<<pak[i].amount<<endl;
            
			
        	if(strcmp(nam,pak[i].name)==0&&strcmp(pass,pak[i].passward)==0)
        	{
        	usermenu (i);
        	f=1;
        	break;
            }
           if(f==0)
           {
		   
            cout<<"OPPS!\t\tINVALID INFORMATION PLEASE ENTER AGAIN";
	    
		}
            i++;
            }
            des.close();
        }
            
		    if(op==3)
		    {
			
            	intromenu();
			}
			
	}
void usermenu(int i)
	{
				 		     
	char op;
	cout<<"\n\t\tWELCOME IN USER MODE :)";
	cout<<"\nOUR BANK PRPVIDE NUMBER OF FOLLOWING SERVICES TO OUR CUSTUMERS::";
	cout<<"\nPLEASE ENTER A FOR WITHDRAW YOUR MONEY";
	cout<<"\nPLEASE ENTER B FOR DEPOSIT MONEY";
	cout<<"\nPLEASE ENTER C FOR CHECK YOUR BALANCE";
	cout<<"\nPLEASE ENTER D FOR YOUR BILL PAYMENTS";
	cout<<"\nPLEASE ENTER E FOR DONOTION";
	cout<<"\nPLEASE ENTER F FOR QUIT";
    cout<<"\n\n\t\tPLEASE HELP US BY ENTERING YOUR OPTION=";cin>>op;	
	ifstream des("bank34.txt");
	//int i=0;
/*	while(!(des.eof()))
	{
	
	des>>pak[cuscount].amount;
	des>>pak[cuscount].gender;
	des>>pak[cuscount].name;
	des>>pak[cuscount].passward;
}*/
	if(op=='a')
	{
	int k,j;
	 cout<<" file reading id ="<<pak[i].amount<<endl;
	cout<<"\nPLEASE ENTER THE AMOUNT TO WITHDRAW=";cin>>k;
	if(k>pak[i].amount)
	{
		cout<<"\noops!YOU HAVE NOT THAT MUCH MONEY:(";
		//break;
	}
	else
	{
	
	j=k-pak[i].amount;
	cout<<"THANKS SIR!\nNOW YOUR CURRENT BALANCE IS ABOUT="<<j;
//	break;
    }
	}
	if(op=='b')
	{
		int i,j;
		cout<<"\nPLEASE ENTER THE AMOUNT OF MONEY YOU WANT TO DEPOSIT=";cin>>i;
		j=i+pak[i].amount;
		cout<<"\nNOW YOUR CURRENT BALANCE IS ="<<j;
	}
	if(op=='c')
	{
		cout<<"\nYOUR total BALANCE IS ABOUT="<<pak[i].amount;
		//break;
	}
	if(op=='d')
	{
	
		int i,j,ADD, CURRENT;
	    cout<<"\nPLEASE ENTER THE AMOUNT OF GAS BILL=";cin>>i;
	    cout<<"PLEASE ENTER THE AMOUNT OF ELECTRIC BILL=";cin>>j;
	    ADD=i+j;
	    cout<<"\n TOTAL AMOUNT OF BILL="<<ADD;
	    if(ADD>pak[i].amount)
	    {
	    	cout<<"\nSORRY ! YOU DO NOT HAVE THAT MUCH MONEY IN YOUR ACCOUNT:(";
	    //	break;
		}
		else
		{
		
		cout<<"\n YOUR ALL BILLS ARE PAYED NOW:)";
		CURRENT=pak[i].amount-ADD;
		cout<<"\n\t\tNOW YOUR CURRENT BALANCE IS ABOUT="<<CURRENT;
	//	break;
	    }
	   
	}
	if(op=='e')
	{
		int i,j,k,add,fight,wild;
		cout<<"\nTHANKS FOR DONATING FUND for POOR PEOPLE:)";
        cout<<"\nPLEASE TELL US IN WHICH FIELD YOU WANT TO DONATE :) ";
        int og;
        cout<<"\nPLEASE PRESS 1 FOR DONATING IN WILDLIFE FEDRATION:)";
        cout<<"\nPLEASE PRESS 2 FOR DONATING IN MEDICAL CARE FOR PUBLIC:)";
        cout<<"\nPLEASE ENTER 3 FOR DONATING IN FLOOD EFFECTED:)";
        cout<<"\nPLEASE ENTER YOUR CHOICE =";cin>>og;
        if(og==1)
            {
        	cout<<"\nPLEASE ENTER THE AMOUNT YOU WANT TO DONATE FOR WILDLIFE FEDRATION=";cin>>i;
        	if(i<pak[i].amount)
        	{
            add=i-pak[i].amount;
            cout<<"\nTHANKS FOR DONATION!\n NOW YOUR CURRENT BALANCE="<<add;
           // break;
            }
            else
            {
            	cout<<"\nSORRY :( YOU HAVE NOT THAT MUCH MONEY";
            	//break;
			}
			}
			
        if(og==2)    
		{
			cout<<"\nPLEASE ENTER THE AMOUNT YOU WANT TO DONATE FOR medical care=";cin>>j;
		    if(j<pak[i].amount)
		    {
		    	fight=j-pak[i].amount;
		    cout<<"\nTHANKS FOR DONATION!\n NOW YOUR CURRENT BALANCE="<<fight;	
		   // break;
			}
			else
			{
			cout<<"\nSORRY :( YOU HAVE NOT THAT MUCH MONEY";	
		//	break;
			}
		}
		if(og==3)
		{
		cout<<"\nPLEASE ENTER THE AMOUNT YOU WANT TO DONATE FOR medical care=";cin>>k;
		    if(k<pak[i].amount)
		    {
		    	wild=k-pak[i].amount;
		    cout<<"\nTHANKS FOR DONATION!\n NOW YOUR CURRENT BALANCE="<<wild;	
		//	break;
			}
			else
			{
			cout<<"\nSORRY :( YOU HAVE NOT THAT MUCH MONEY";	
			
			}	
		}
	
	 i++;
}
    
	if(op=='f')
	{
		intromenu();
	}
	
}


void intromenu()
{
	cout<<"\n\t THIER ARE TWO PHASES OF THIS PROJECT:";
	cout<<"\n\n\t\tPLEASE HELP IN  FOLLOWING STEPs:)";
	int op;
	cout<<"\nPRESS 1 FOR ENTERING USER PHASE:";
	cout<<"\nPRESS 2 FOR ENTERING ADMINE PHASE:";
	cout<<"\nPLEASE ENTER YOUR CHOICE=";cin>>op;
	
    if(op==1)
    {
	
    		cout<<"\n\t\tYOU  ENTERED  USER PHASE :";
    		 mainmenu();
    		 //usermenu();
    }
    if(op==2)
    {
    		cout<<"\n\t\tYOU  ENTERED  ADMIN PHASE :";
    		//read
            admin1();
		}
		
}
void admin1()
{
//	ofstream wild("bank1.txt",ios::app);
	admin a;
	strcpy(a.id,"qwert123");
	strcpy(a.passward,"high34");
//	wild<<a.id;
	//wild<< a.passward;
	char  O[20];
	char  G[20];
	cout<<"\nIN ORDER TO ENTER YOU IN ADMIN PHASE YOU SHALL FILL THE FOLLOWING INFORMATION:)";
	cout<<"\nPLEASE ENTER YOUR ID =";cin>>O;
	cout<<"PLEASE ENTER YOUR PASSWARD =";cin>>G;
	cout<<"name ="<<O<<"   "<<a.id<<endl;
	cout<<"password = "<<G;
	//ifstream des("bank1.txt");
	//des>>O;
	//des>>G;
	int f=0;
	cout<<" checkkkkkk"<<strcmp(O,a.id);
	if(strcmp(O,a.id)==0&&strcmp(G,a.passward)==0)
	{ 
		adminuse();
	    f=1;
	}
	else
	{
		cout<<"\nWARNING!\tWRONG PASSWARD:) ";
		int ap;
		cout<<"\nPRESS 1 FOR GOING  INTRO MENU";
		cout<<"\n PLEASE ENTER 1 =";cin>>ap;
		if(ap==1)
		{
			intromenu();
		}
		else
		{
			cout<<"\nWRONG INPUT :(";
		}
	}
}
void adminuse()
{
	
	cout<<"\nWELCOME SIR! \n THANKS FOR ENTER IN ADMINE PASS:)";
	cout<<"\nSIR!PLEASE SELECT FROM  THE FOLLOWING OPTION:)";
	int ko;
	cout<<"\nPRESS 1 TO FIND THE TOTAL Number of CUSTOMERS :";
	cout<<"\nPRESS 2 TO FIND THE TOTAL AMOUNT of ALL CUSTOMERS :";
	cout<<"\nPRESS 3 TO FIND THE TOTAL Number OF MALE ACCOUNT :";
	cout<<"\nPRESS 4 TO FIND THE TOTAL Number OF FEMALE ACCOUNT :";
	cout<<"\nPRESS 5 TO  SORT Number LARGE TO SMALL AMOUNT :";
	cout<<"\nPRESS 6 TO  FIND THE NUMBER OF CUSTOMER HAVING MONEY LESS THAN 5000 :"; 
	cout<<"\nPRESS 7 TO  FIND THE NUMBER OF CUSTOMER HAVING MONEY LESS THAN 10000 :";
	cout<<"\nPRESS 8 TO  FIND THE NUMBER OF CUSTOMER HAVING MONEY BETWEEN 5000 TO 10000 :";  
	cout<<"\nPRESS 9 TO to PRINT ALL  THE CUSTOMER BY NAMES :" ;
	cout<<"\nPRESS 10 TO FIND THE CUSTOMER HAVING HIGHEST BALANCE :";
	cout<<"\nPREES 11 TO FIND THE CUSTOMER HAVING LOWEST BALANCE :";
	cout<<"\n\n\tSIR PLEASE !\n ENTER YOUR CHOICE =";cin>>ko;
	
	//initialize cuscount;
	ifstream d("bank34.txt");
	//d.close();
	//d.open("bank2.txt");
	int a=0;
	int count = 0;
	while(!d.eof())
	{
	count++;
		d>>apak[a].name;
			d>>apak[a].passward; 
				d>>apak[a].gender;
	d>>apak[a].amount;

//	cout<<" name ="<<apak[a].name;
	a++;
	//cout<<"count ="<<count<<endl;
}

int ccount =0;
    if(ko==1)
    {
    	for(int i=0;i<a;i++)
    	{
    		ccount++;
		}
    	cout<<"\n THIS HELP YOU TO FIND NUMBER OF ACCOUNTS IN OUR BANK :) ";
    	int count=0;
		int z=0;
	
		cout<<"\n TOTAL NUMBER OF PERSON WHO MADE ACCOUNT IN OUR BANK ARE ABOUT = "<<ccount;
	}
	if(ko==2)
	{
	
	int total=0;
	
	for(int i=0;i<a;i++){
	
	total=total+apak[i].amount;
	}
	  
	cout<<"\nTOTAL AMOUNT OF ALL BANK ACCOUNT ARE ="<<total;
    }
	if(ko==3)
	{
		
		int count=0;
		//while(!(d.eof()))//condition
		for(int g=0;g<a;g++)	
			{
				if(apak[g].gender=='m')
				
				{
				count++;
			}
			
			
			}
			cout<<"\nTOTAL NUMBER OF MALES WHO MADE ACCOUNT IN OUR BANK ="<<count;
			
		
	}
	
	
	if(ko==4)
	{
	
		int count=0;
		//while(!(d.eof()))//condition
		for(int g=0;g<a;g++)	
			{
				if(apak[g].gender=='f')
				
				{
				count++;
			}
			
			
			}
			cout<<"\nTOTAL NUMBER OF females WHO MADE ACCOUNT IN OUR BANK ="<<count;
			
		
	}
	if(ko==5)
	{
	 cout<<"\nSORT THE AMOUNT OF ACCOUNTs IN  LOWER to high :)"<<endl;
    int temp=0;
    cout<<"\nSORTING THE AMOUNT OF BANK AMOUNT :)";
//	int i=0;
    //int low =0;
    //int max=0;
    //int fi=-1;
    //int max2=0;
    int j=0;
    int t=0;
   account tempa[a-1];
    for(int i=0;i<a-1;i++)
    {
    	strcpy(tempa[i].name,apak[i].name);
    	strcpy(tempa[i].passward,apak[i].passward);
    	tempa[i].gender=apak[i].gender;
    	tempa[i].amount=apak[i].amount;
	}
    for(int i=0;i<a-1;i++)
    {
    	for(int j=i+1;j<a-1;j++)
    	{
    		if(tempa[i].amount<tempa[j].amount)
    		{
    			t=tempa[i].amount;
    			tempa[i].amount=tempa[j].amount;
    			tempa[j].amount=t;
			}
    		
		}
	}
	for(int i=0;i<a-1;i++)
    {
    	cout<<tempa[i].amount<<" ";
    }

}
	
		if(ko==6)
	{
		cout<<"\nFIND THE TOTAL NUMBER OF BANKS ACCOUNTS THAT HAVE LESS THAN 5000";
		int count=0;	
		int y=0;
	for(int i=0;i<a;i++)
	{
	
			if(apak[i].amount<5000)
			{
				count++;
			}
			
		}
	//	y++;
			cout<<"\nTOTAL NUMBER OF ACCOUNTS HAVING AMOUNT LESS THAN 5000 = "<<count;
		}
	
	
		if(ko==7)
	{
		cout<<"\nFIND THE TOTAL NUMBER OF BANKS ACCOUNTS THAT HAVE LESS THAN 10000";
		int count=0;	
		int x=0;
    for(int i=0;i<a;i++)
	{
			if(apak[i].amount<10000)
			{
				count++;
			}
			
		}
		
			cout<<"\nTOTAL NUMBER OF ACCOUNTS HAVING AMOUNT LESS THAN 10000 = "<<count;
	}
	if(ko==8)
	{
		cout<<"\nFIND THE TOTAL NUMBER OF BANKS ACCOUNTS THAT HAVE between 5000 TO 10000";
		int count=0;	
		int w=0;
		for(int i=0;i<a;i++)
	{
	
		
			if(apak[i].amount>=5000&&apak[i].amount<=10000)
			{
				count++;
			}
			
		}
		
			cout<<"\nTOTAL NUMBER OF ACCOUNTS HAVING AMOUNT THAT HAVE BETWEEN 5000 TO 10000 = "<<count;
	}
	if(ko==9)
	{
		cout<<"\n NAMES TOTAL NUMBER  OF ACCOUNT HOLDERS IN OUR BANKING SYSTEM";
        cout<<"\n NAMES ARE GIVEN BELLOW :) "<<endl;	
		int count=0;
		int v=0;
		for(int i=0;i<a;i++)
	{
	
			cout<<apak[i].name<<endl;
			count++;
		}
		
		cout<<"\n TOTAL PERSONS IN OUR BANK SYSTEM = "<<count;
	}
	if(ko==10)
	{
		int max=0;
		cout<<"\n FIND THE BIGGEST VALUE IN BANK MANGMENT SYSTEM :";
     //int i=0;
	for(int i=0;i<a;i++)
	{
		
       if(apak[i].amount>max)
       {
           max=apak[i].amount;
       }
       
      }
    cout<<"\nMAXIMUN VALUE IN BANK MANGMENT SYSTEM ="<<max;	
	}
	if(ko==10)
	{
	int low =apak[0].amount;
	cout<<"low ="<<low<<endl;
		cout<<"\n FIND THE LOWEST VALUE IN BANK MANGMENT SYSTEM :";
	
for(int i=0;i<a-1;i++)
	{
	
       if(apak[i].amount<low)
       {
           low=apak[i].amount;
       }
       
      }
	 	cout<<"\nLOWEST BALANCE IN OUR BANK SYSTEM = "<<low; 
	}
	
	
}