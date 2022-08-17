#include <iostream>
using namespace std;
class Node{
public:
	Node *previous;
	int data;
	Node *next;
};
class LinkList{
public:
	Node *head;
	Node *tail;
	LinkList(){
		head = NULL;
		tail = NULL;
	}
	void AddNode(int position){
		Node *ptr = new Node;
		ptr->data = position;
		ptr->previous = tail;
		ptr->next = NULL;
		if (head == NULL){
			head = ptr;
			tail = ptr;
			ptr = NULL;
			delete ptr;
		}
		else{
			tail->next = ptr;
			tail = ptr;
			ptr = NULL;
			delete ptr;
		}
	}
	void PrintList(){
		for (Node *i = tail; i != head;){
			cout << i->data << endl;
			i = i->previous;
		}
		cout << head->data;
	}
};
int main(){
	LinkList l;
	l.AddNode(1);
	l.AddNode(2);
	l.AddNode(3);
	l.AddNode(4);
	l.AddNode(5);
	l.PrintList();
	cout << endl;
	system("pause");
	return 0;
}