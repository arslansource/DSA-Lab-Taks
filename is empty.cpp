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
	int a,ch;
	bool isempty;
	cout<<"Simple Linked List"<<endl;
	cout<<"1 for inserting a node by default"<<endl;
	cout<<"2 for displaying linked list."<<endl;
	cout<<"3 for empty or not status"<<endl;
	cout<<"4 to exit."<<endl;
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
				is_empty(isempty);
				break;
			}
			case 4:{
				cout<<"Exitting..."<<endl;
				break;
			}
			default:{
				cout<<"Invalid command, try again"<<endl;
				break;
			}
		}
	}while(ch != 4);
	return 0;
}
