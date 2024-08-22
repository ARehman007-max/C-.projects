#include <iostream>
#include <cstdlib>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Linked List class
class LinkedList {
private:
    Node* start;

public:
    // Constructor
    LinkedList() {
        start = NULL;
    }

    // Function to create a new node
    Node* create_node(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    // Function to insert a node at the beginning of the list
    void insert_begin() {
        int value;
        cout << "Enter the value to insert: ";
        cin >> value;

        Node* newNode = create_node(value);
        if (start == NULL) {
            start = newNode;
        } else {
            newNode->next = start;
            start = newNode;
        }

        cout << "Node inserted at the beginning successfully.\n";
    }

    // Function to insert a node at a specific position
    void insert_pos() {
        int value, pos;
        cout << "Enter the value to insert: ";
        cin >> value;
        cout << "Enter the position to insert (1-indexed): ";
        cin >> pos;

        Node* newNode = create_node(value);
        if (pos == 1) {
            newNode->next = start;
            start = newNode;
        } else {
            Node* temp = start;
            for (int i = 1; i < pos - 1 && temp != NULL; i++) {
                temp = temp->next;
            }

            if (temp == NULL) {
                cout << "Invalid position.\n";
                return;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }

        cout << "Node inserted at position " << pos << " successfully.\n";
    }

    // Function to insert a node at the end of the list
    void insert_last() {
        int value;
        cout << "Enter the value to insert: ";
        cin >> value;

        Node* newNode = create_node(value);
        if (start == NULL) {
            start = newNode;
        } else {
            Node* temp = start;
            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        cout << "Node inserted at the end successfully.\n";
    }

    // Function to delete a node at a specific position
    void delete_pos() {
        if (start == NULL) {
            cout << "List is empty. Deletion not possible.\n";
            return;
        }

        int pos;
        cout << "Enter the position to delete (1-indexed): ";
        cin >> pos;

        if (pos == 1) {
            Node* temp = start;
            start = start->next;
            delete temp;
            cout << "Node deleted from position 1 successfully.\n";
        } else {
            Node* temp1 = start;
            Node* temp2 = NULL;

            for (int i = 1; i < pos && temp1 != NULL; i++) {
                temp2 = temp1;
                temp1 = temp1->next;
            }

            if (temp1 == NULL) {
                cout << "Invalid position.\n";
                return;
            }

            temp2->next = temp1->next;
            delete temp1;
            cout << "Node deleted from position " << pos << " successfully.\n";
        }
    }

    // Function to sort the linked list
    void sort() {
        if (start == NULL) {
            cout << "List is empty. Sorting not possible.\n";
            return;
        }

        Node* current = start;
        Node* index = NULL;
        int temp;

        while (current != NULL) {
            index = current->next;

            while (index != NULL) {
                if (current->data > index->data) {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }

                index = index->next;
            }

            current = current->next;
        }

        cout << "List sorted successfully.\n";
    }

    // Function to search for a node with a given value
    void search() {
        if (start == NULL) {
            cout << "List is empty. Search not possible.\n";
            return;
        }

        int value;
        cout << "Enter the value to search: ";
        cin >> value;

        Node* temp = start;
        int pos = 1;
        while (temp != NULL) {
            if (temp->data == value) {
                cout << "Value " << value << " found at position " << pos << ".\n";
                return;
            }

            temp = temp->next;
            pos++;
        }

        cout << "Value " << value << " not found in the list.\n";
    }

    // Function to update the value of a node at a specific position
    void update() {
        if (start == NULL) {
            cout << "List is empty. Update not possible.\n";
            return;
        }

        int pos, newValue;
        cout << "Enter the position to update (1-indexed): ";
        cin >> pos;

        Node* temp = start;
        for (int i = 1; i < pos && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Invalid position.\n";
            return;
        }

        cout << "Enter the new value: ";
        cin >> newValue;
        temp->data = newValue;

        cout << "Node at position " << pos << " updated successfully.\n";
    }

    // Function to reverse the linked list
    void reverse() {
        if (start == NULL) {
            cout << "List is empty. Reverse not possible.\n";
            return;
        }

        Node* prev = NULL;
        Node* current = start;
        Node* next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        start = prev;

        cout << "List reversed successfully.\n";
    }

    // Function to display the linked list
    void display() {
        if (start == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = start;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList linkedList;

    int choice;
    do {
        cout << "\n***** MENU *****\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at a specific position\n";
        cout << "3. Insert at the end\n";
        cout << "4. Delete at a specific position\n";
        cout << "5. Sort the list\n";
        cout << "6. Search for a value\n";
        cout << "7. Update a node\n";
        cout << "8. Reverse the list\n";
        cout << "9. Display the list\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                linkedList.insert_begin();
                break;
            case 2:
                linkedList.insert_pos();
                break;
            case 3:
                linkedList.insert_last();
                break;
            case 4:
                linkedList.delete_pos();
                break;
            case 5:
                linkedList.sort();
                break;
            case 6:
                linkedList.search();
                break;
            case 7:
                linkedList.update();
                break;
            case 8:
                linkedList.reverse();
                break;
            case 9:
                linkedList.display();
                break;
            case 0:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
