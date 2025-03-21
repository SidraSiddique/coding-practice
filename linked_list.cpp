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
	
	for (Node *temp = &first ; temp != NULL ; temp = temp -> next)
		cout << temp -> val << ' ';
	cout << "\n";
	return 0;
}