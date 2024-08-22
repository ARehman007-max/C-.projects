#include <iostream>
using namespace std;
struct Node {
	int number;
	string name;
	struct Node * play;
};
int main()
{
	struct Node *first;
	struct Node *sec;
	struct Node *third;
	first=(struct * Node)malloc(sizeof(struct *Node));
	sec==(struct * Node)malloc(sizeof(struct *Node));
	third==(struct * Node)malloc(sizeof(struct *Node));
	first->data=5;
	first->next=sec;
	sec->data=7;
	sec->next=sthird;
	third->data=9;
	third->next=first;
	
	return 0;
}