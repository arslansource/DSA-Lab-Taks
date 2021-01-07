#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};

struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void get_count(int count){
	struct Node* current;
	current = head;
	count = 0;
	while(current != NULL){
		count++;
		current = current -> next;
	} 
	cout<<count;
}
void is_empty(bool isempty){
	struct Node* current;
	current = head;
	int count = 0;
	while(current != NULL){
		count++;
		current = current -> next;
	}
	if(count > 0){
		isempty = false;
	}
	else if(count == 0){
		isempty = true;
	} 
	
	if(isempty == true){
		cout<<"Linked List is empty"<<endl;
	}
	else{
		cout<<"Linked List is not empty"<<endl;
	}
}

void insert_front(int value){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	cout<<"Enter value:"<<endl;
	cin>>value;
	new_node -> data = value;
	new_node -> next = head;
	head = new_node;
}

void insert_end(int value){
	struct Node* new_node;
	struct Node* temp;
	new_node = (struct Node*) malloc(sizeof(struct Node));
	cout<<"Enter value: "<<endl;
	cin>>value;
	new_node -> data = value;
	new_node -> next = NULL;
	temp = head;
	while(temp -> next != NULL){
		temp = temp -> next;
	}
	temp->next = new_node;
}

void insert_after(int value){
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

void insert_before(int value){
	int user_position,position,i=1;
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
void get_front(){
	bool isempty;
	struct Node* current;
	current = head;
	int count = 0;
	while(current != NULL){
		count++;
		current = current -> next;
	}
	if(count > 0){
		isempty = false;
	}
	else if(count == 0){
		isempty = true;
	} 
	
	if(isempty == true){
		cout<<"Linked List is empty"<<endl;
	}
	else{
		cout<<"Front is "<<head -> data<<endl;
	}
		
}

void get_tail()
{
	bool isempty;
	struct Node* current;
	current = head;
	int count = 0;
	while(current != NULL){
		count++;
		current = current -> next;
	}
	if(count > 0){
		isempty = false;
	}
	else if(count == 0){
		isempty = true;
	} 
	
	if(isempty == true){
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
	int a,b,c,d,e,f,ch;
	bool isempty;
	cout<<"Simple Linked List"<<endl;
	cout<<"1 for inserting a node by default"<<endl;
	cout<<"2 for displaying linked list."<<endl;
	cout<<"3 for insertion at front"<<endl;
	cout<<"4 for insertion at end"<<endl;
	cout<<"5 for insert after a position"<<endl;
	cout<<"6 for LL length"<<endl;
	cout<<"7 for empty or not status"<<endl;
	cout<<"8 for insert before a position"<<endl;
	cout<<"9 for get front"<<endl;
	cout<<"10 for get tail"<<endl;
	cout<<"11 to exit."<<endl;
	do{
		cout<<"*****	Enter Choice	*****"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter value:"<<endl;
				cin>>a;
				insert(a);
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				insert_front(b);
				break;
			}
			case 4:{
				insert_end(c);
				break;
			}
			case 5:{
				insert_after(e);
				break;
			}
			case 6:{
				get_count(d);
				break;
			}
			case 7:{
				is_empty(isempty);
				break;
			}
			case 8:{
				insert_before(f);
				break;
			}
			case 9:{
				get_front();
				break;
			}
			case 10:{
				get_tail();
				break;
			}
			case 11:{
				cout<<"Exitting..."<<endl;
				break;
			}
			default:{
				cout<<"Invalid command, try again"<<endl;
				break;
			}
		}
	}while(ch != 11);
	return 0;
}
