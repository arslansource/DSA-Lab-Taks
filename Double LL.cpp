#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
};

struct Node* head = NULL;
void insert(int value){
	struct Node* new_node;
	new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node -> data = value;
	new_node->prev = NULL;
	new_node->next = head;
	if(head != NULL){
	head->prev = new_node;		
	}
	head = new_node;
}

void display(){
	struct Node* temp;
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<"	";
		temp = temp->next;
	}
	
	cout<<endl;
}

int main(){
	int value,ch;
	cout<<"Doubly Linked List"<<endl;
	cout<<"1 to insert"<<endl;
	cout<<"2 to display"<<endl;
	cout<<"3 to exit"<<endl;
	do{
		cout<<"***** Enter Choice *****"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter value:"<<endl;
				cin>>value;
				insert(value);
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				cout<<"exitting.."<<endl;
				break;
			}
			default:{
				cout<<"Invalid Command, Try Again!"<<endl;
				break;
			}
		}
	}while(ch != 3);
	return 0;
}
