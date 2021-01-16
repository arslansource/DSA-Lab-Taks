#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node* head = NULL;
void insert(int value){			//default method (at front)
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	cout<<"Enter value:"<<endl;
	cin>>value;
	new_node -> data = value;
	new_node -> next = head;
	head = new_node;
}
void get_tail()
{
	if(head == NULL){
		cout<<"Linked List is empty"<<endl;
	}
	else{
		struct Node* ptr;
		ptr = head;
		while(ptr != NULL)
		{
			ptr = ptr -> next;
			if(ptr -> next == NULL)
			{
				cout<<"Tail value is: "<<ptr -> data<<endl;
				break;
			}
		}
	}
}
int main(){
	get_tail();
	insert(21);
	insert(43);
	get_tail();
	return 0;
}
