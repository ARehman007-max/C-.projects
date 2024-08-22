#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr; 
    }
};

void display(Node* head)
 {
    if (head == nullptr) 
	{
        return;
    }

    display(head->next);
    cout << head->data << "--";
}

int main() {
    int data;
    
    Node* head = nullptr;
    Node* tail = nullptr;

    while (data != 1) 
	{
        Node* newNode = new Node(data);

        if (head == nullptr) 
		{ 
            head = newNode;
            tail = newNode;
        } 
		else 
		{
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }

    display(head);

   

    return 0;
}
