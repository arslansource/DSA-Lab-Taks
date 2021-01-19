#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
struct Node* head = NULL;
void insert(){
	struct Node* new_node;
	new_node = (struct Node*) malloc(sizeof(struct Node));
	cout<<"Enter value"<<endl;
	cin>>new_node->data;
	new_node->next = head;
	head = new_node;
}
void delete_beg(){
	if(head == NULL){
		cout<<"No node to delete"<<endl;
	}
	else{
		struct Node* temp;
		temp = head;
		head = head -> next;
		free(temp);
	}
}
void delete_middle(){
	if(head == NULL){
		cout<<"LL is empty"<<endl;
	}
	else{
		int pos;
		cout<<"Enter position of node(to be deleted) from start"<<endl;
		cin>>pos;
		struct Node* temp = head;
		struct Node* ptr;
		int i = 1;
		while(i<pos-1){
			temp = temp->next;
			i++;
		}
		ptr = temp->next;
		temp->next = ptr->next;
		free(ptr);
	}
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
	int ch;
	cout<<"! to insert"<<endl;
	cout<<"2 to display"<<endl;
	cout<<"3 to delete from front"<<endl;
	cout<<"4 to delete from middle"<<endl;
	cout<<"5 to exit"<<endl;
	do{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				insert();
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				delete_beg();
				break;
			}
			case 4:{
				delete_middle();
				break;
			}
			case 5:{
				cout<<"Exitting.."<<endl;
				break;
			}
			default:{
				cout<<"Invalid input, Try again"<<endl;
				break;
			}
		}
	}while(ch != 5);
}
