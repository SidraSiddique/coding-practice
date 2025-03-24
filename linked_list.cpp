//add at the start and at the end
#include<iostream>

using namespace std;

class Node {
public:
    int val;
    Node *next;
	node (int val){
	    this->val=val;
		this -> next=null;
	}
	node (int val,node*next){
	    this->val=val;
		this -> next=next;
	}
};
class LinkedList{
    Node *start;
public:
    LinkedList(){	start = NULL;		}
    void addAtStart(int val){
        if (!start)	start = new Node(val);
        else		start = new Node(val, start);
    }
};



// 2nd code:

#include<iostream>

using namespace std;

class Node {
public:
    int val;
    Node *next;

}
int main() {
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
    for (Node *temp = &first; temp != NULL; temp = temp->next)
        cout << temp->val << ' ';
    cout << "\n";

    // Change node 
    first.next = &fourth;
    fourth.next = &third;
    third.next = &sixth;
    sixth.next = &second;

    for (Node *temp = &first; temp != NULL; temp = temp->next)
        cout << temp->val << ' ';
    cout << "\n";

    // Remove node 
    fourth.next = &sixth;

    for (Node *temp = &first; temp != NULL; temp = temp->next)
        cout << temp->val << ' ';
    cout << "\n";

    // Insert another node
    Node second_third;
    second_third.val = 50;
    second.next = &second_third;
    second_third.next = &third;

    for (Node *temp = &first; temp != NULL; temp = temp->next)
        cout << temp->val << ' ';
    cout << "\n";
    
    return 0;
}
