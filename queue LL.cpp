#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int value){
	struct Node* new_node;
	new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node -> data = value;
	new_node -> next = NULL;
	
	if(front == NULL && rear == NULL){
		front = rear = new_node;
	}
	else{
		rear -> next = new_node;
		rear = new_node;
	}
}

void dequeue(){
	if(front == NULL && rear == NULL){
		cout<<"Queue Empty, No element to dequeue"<<endl;
	}
	else{
		struct Node* temp;
		temp = front;
		front = front->next;
		free(temp);
	}
}

void display(){
	if(front == NULL && rear == NULL){
		cout<<"Queue is Empty"<<endl;
	}
	else{
		struct Node* temp;
		temp = front;
		while(temp != NULL){
			cout<<temp->data<<"	";
			temp = temp->next;
		}
		cout<<endl;
	}
}
void peek(){
	if(front == NULL && rear == NULL){
		cout<<"Queue is Empty"<<endl;
	}
	else{
		cout<<"front element is: "<<front->data<<endl;
	}
}
int main()
{
	int ch,value;
	cout<<"***** Queue With Linked List *****"<<endl;
	cout<<"1 to enqueue"<<endl;
	cout<<"2 to peek"<<endl;
	cout<<"3 to display"<<endl;
	cout<<"4 to dequeue"<<endl;
	cout<<"5 to exit"<<endl;
	do{
		cout<<"***** Enter Choice *****"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:{
				cout<<"Enter value to push"<<endl;
				cin>>value;
				enqueue(value);
				break;
			}
			case  2:{
				peek();
				break;
			}
			case  3:{
				display();
				break;
			}
			case  4:{
				dequeue();
				break;
			}
			case  5:{
				cout<<"Exitting..."<<endl;
				break;
			}
			default:{
				cout<<"Invallid Command, Try Again!"<<endl;
				break;
			}
			
		}
	}while(ch != 5);
	return 0;
}
