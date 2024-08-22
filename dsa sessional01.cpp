#include <iostream>

struct Node 
{
    int data;
    Node* next;
};

class LinkedList 
{
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void deletePos(int position) 
	{
        if (head == nullptr) 
		{
            std::cout << "List  empty ha . Deletion failed." << std::endl;
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
                std::cout << "galat jaga. Deletion failed." << std::endl;
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

    void displayList() 
	{
        Node* current = head;

        while (current != nullptr) 
		{
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    void insert(int data)
	 {
        Node* newNode = new Node{data, nullptr};

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
};

int main() 
{
    LinkedList list;
    list.insert(3);
    list.insert(6);
    list.insert(9);
    list.insert(12);
    list.insert(15);
    list.insert(18);
    list.insert(21);
    list.insert(24);
    list.insert(27);
    list.insert(30);

    std::cout << "sadi list : ";
    list.displayList();


    int deletePosition;
    std::cout << " position dalay  deletion ka leya : ";
    std::cin >> deletePosition;


    list.deletePos(deletePosition);

    std::cout << " deletion ka bad: ";
    list.displayList();


    int searchValue;
    std::cout << " value dalay jisay search krna ha : ";
    std::cin >> searchValue;

    if (list.search(searchValue))
	 {
        std::cout << searchValue << "  list ma ha " << std::endl;
    } else 
	{
        std::cout << searchValue << " list ma ni ha " << std::endl;
    }

    return 0;
}

