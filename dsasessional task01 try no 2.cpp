#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}


    void addNode(int value)
	 {
        Node* newNode = new Node;
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


    void deletePos(int position) 
	{
        if (head == nullptr)
		 {
            std::cout << "List is empty. Deletion failed." << std::endl;
            return;
        }

        if (position == 0) 
		{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
		 else
		  {
            Node* current = head;
            Node* previous = nullptr;
            int count = 0;

            while (current != nullptr && count < position)
			 {
                previous = current;
                current = current->next;
                count++;
            }

            if (current == nullptr) 
			{
                std::cout << "Invalid position. Deletion failed." << std::endl;
                return;
            }

            previous->next = current->next;
            delete current;
        }
    }


    bool search(int value)
	 {
        Node* current = head;

        while (current != nullptr)
		 {
            if (current->data == value)
			 {
                return true;
            }
            current = current->next;
        }

        return false; 
    }


    void display()
	 {
        Node* current = head;

        while (current != nullptr) 
		{
            std::cout << current->data << " ";
            current = current->next;
        }

        std::cout << std::endl;
    }
};

int main() 
{
    LinkedList myList;


    myList.addNode(1);
    myList.addNode(2);
    myList.addNode(3);
    myList.addNode(4);

    std::cout << "Initial Linked List: ";
    myList.display();


    int searchValue = 3;
    if (myList.search(searchValue)) 
	{
        std::cout << searchValue << " found in the list." << std::endl;
    } else 
	{
        std::cout << searchValue << " not found in the list." << std::endl;
    }


    int deletePos = 1;
    myList.deletePos(deletePos);


    std::cout << "Linked List after deletion at position " << deletePos << ": ";
    myList.display();

    return 0;
}
