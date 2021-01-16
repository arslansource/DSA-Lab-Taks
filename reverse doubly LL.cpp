#include <bits/stdc++.h>
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
	new_node->data = value;
	
	new_node->prev = NULL;
	new_node->next = head;
	
	if(head != NULL){
		head->prev = new_node; 
	}
	head = new_node;
}
void reverse(){
	if(head == NULL){
		cout<<"Empty LL"<<endl;
	}
	else{
		struct Node* current;
		struct Node* next_node;
		current = head;
		while(current != NULL){
			next_node = current->next;
			current->next = current->prev;
			current->prev = next_node;
			current = next_node;
		}
	}
}
void display(){
	struct Node* temp;
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<endl;
}
int main(){
	int value,ch;
	cout<<"Doubly LL"<<endl;
	cout<<"1 to insert"<<endl;
	cout<<"2 to display"<<endl;
	cout<<"3 to reverse"<<endl;
	cout<<"4 to exit"<<endl;
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
				reverse();
				break;
			}
			case 4:{
				cout<<"Exitting.."<<endl;
				break;
			}
			default:{
				cout<<"Invalid command, Try again!"<<endl;
				break;
			}
		}
	}while(ch != 4);
	return 0;
}

