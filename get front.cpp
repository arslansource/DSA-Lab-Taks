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
void get_front(){
	if(head == NULL){
		cout<<"Linked List is empty"<<endl;
	}
	else{
		cout<<"Front is "<<head -> data<<endl;
	}	
}

int main(){
	get_front();
	insert(12);
	get_front();
	return 0;
}
