#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;

public:
    LinkedList() : head(nullptr) {}


    void addNode(int value)
	 {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
		 {
            head = newNode;
        }
		 else 
		{
            Node* temp = head;
            while (temp->next != nullptr) 
			{
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
        void display()
	 {
        Node* current = head;

        while (current != nullptr) 
		{
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }
    void even()
    {
    	
         Node* current = head;
       //  head = head->next;
        while (current != nullptr) 
		{
			if(current->data%2==0)
			{
			
            cout <<"these are even ="<< current->data << " "<<endl;
            current = current->next;
}
else 
{
	cout<<"these are odd numbers="<<current->data<<endl;
	 current = current->next;
}
}

	

	}
    
    
};
int main()
{

LinkedList mylist;
cout<<"Please enter 5 values :)"<<endl;
for (int a = 0; a < 5; a++)
 {
        int today;
        cin >> today;
        mylist.addNode(today);
    }



mylist.display();
mylist.even();

    }


