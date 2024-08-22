#include <iostream>

class Node {
public:
    int data;
    Node* address;

    Node(int val) : data(val), address(nullptr) {}
};

typedef Node* today;

int main() {
    today head = nullptr;

    // Create the first node
    head = new Node(1);

    // Create a second node and link it to the first node
    head->address = new Node(2);

    // Create a third node and link it to the second node
    head->address->address = new Node(3);

    // Print the data of each node
    today current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->address;
    }
    std::cout << "nullptr" << std::endl;

    // Clean up memory (delete nodes)
    current = head;
    while (current != nullptr) {
        today temp = current;
        current = current->address;
        delete temp;
    }

    return 0;
}
