#include<iostream>

using namespace std;

class Node{
public:
	int val;
	Node *next; 
};

int main(){
	Node first, second, third, fourth, fifth, sixth;
	first.val = 1;
	second.val = 2;
	third.val = 3;
	fourth.val = 4;
	fifth.val = 5;
	sixth.val = 6;
	
	first.next = &second;
	second.next = &third;
	third.next = &fourth;
	fourth.next = &fifth;
	fifth.next = &sixth;
	sixth.next = NULL;
	//change node
	for (Node *temp = &first ; temp != NULL ; temp = temp -> next)
		cout << temp -> val << ' ';
	cout << "\n";
    first.next=&fourth;
	fourth.next=&third;
	three.next=&sixth;
	six.next=&second
	for (Node *temp=&first;temmp !=Null; temp -> next)
	    cout << temp -> val << ' ';
	cout << "\n";
    // remove node
	fourth.next=&sixth;
	for (Node *temp=&first;temmp !=Null; temp -> next)
	    cout << temp -> val << ' ';
	cout << "\n";

	// insert another node
	Node second_third;
	val.second_third=50;
	seconed.next=&second_third;
	second_third.next=&third;
	for (Node *temp=&first;temmp !=Null; temp -> next)
	    cout << temp -> val << ' ';
	cout << "\n";


	return 0;









}