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

void insert_before(int value){		//insert before position
	int user_position,position,i=1;					//after position function is after this one
	struct Node* new_node;
	struct Node* temp;
	struct Node* current;
	current = head;
	int count = 0;
	while(current != NULL){
		count++;
		current = current -> next;
	} 
	cout<<"Enter position before which to insert node: "<<endl;
	cin>>user_position;
	position = user_position-1;
	if(position > count){
		cout<<"Invalid position!"<<endl;
	}	
	else{
		temp = head;
		while(i<position){
			temp = temp->next;
			i++;
		}
		new_node = (struct Node*) malloc(sizeof(struct Node));
		cout<<"Enter value:"<<endl;
		cin>>value;
		new_node -> data = value;
		
		new_node -> next = temp->next;
		temp->next = new_node;
	}
}
void insert_after(int value){		//insert after a position
	int position,i=1;
	struct Node* new_node;
	struct Node* temp;
	struct Node* current;
	current = head;
	int count = 0;
	while(current != NULL){
		count++;
		current = current -> next;
	} 
	cout<<"Enter position after which to insert node: "<<endl;
	cin>>position;
	if(position > count){
		cout<<"Invalid position!"<<endl;
	}	
	else{
		temp = head;
		while(i<position){
			temp = temp->next;
			i++;
		}
		new_node = (struct Node*) malloc(sizeof(struct Node));
		cout<<"Enter value:"<<endl;
		cin>>value;
		new_node -> data = value;
		
		new_node -> next = temp->next;
		temp->next = new_node;
	}
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
   cout<<endl;
}
int main(){
	int a,b,c,ch;
	bool isempty;
	cout<<"Simple Linked List"<<endl;
	cout<<"1 for inserting a node by default method(at front)"<<endl;
	cout<<"2 for displaying linked list."<<endl;
	cout<<"3 for inserting after a position"<<endl;
	cout<<"4 for inserting before a position"<<endl;
	cout<<"5 to exit."<<endl;
	do{
		cout<<"*****	Enter Choice	*****"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				insert(a);
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				insert_after(b);
				break;
			}
			case 4:{
				insert_before(c);
				break;
			}
			case 5:{
				cout<<"Exitting..."<<endl;
				break;
			}
			default:{
				cout<<"Invalid command, try again"<<endl;
				break;
			}
		}
	}while(ch != 5);
	return 0;
}
