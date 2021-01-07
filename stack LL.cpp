#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};

struct Node* top = NULL;
void push(int value){
	struct Node* new_node;
	new_node = (struct Node*) malloc(sizeof(struct Node*));
	new_node -> data = value;
	new_node -> next = top;
	top = new_node;
}

void display(){
	if(top == NULL){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		struct Node* temp;
		temp = top;
		while(temp != NULL){
			cout<<temp -> data<<"	";
			temp = temp -> next;
		}
		cout<<endl;
	}
}

void peek(){
	if(top == NULL){
		cout<<"Stack Empty"<<endl;
	}
	else{
		cout<<"Top Element is "<<top -> data<<endl;
	}
}

void pop(){
	if(top == NULL){
		cout<<"Stack is empty, no node to delete"<<endl;
	}
	else{
		struct Node* temp;
		temp = top;
		top = top->next;
		free(temp);
	}
}
int main()
{
	int ch,value;
	cout<<"***** Stack With Linked List *****"<<endl;
	cout<<"1 to push"<<endl;
	cout<<"2 to peek"<<endl;
	cout<<"3 to display"<<endl;
	cout<<"4 to pop"<<endl;
	cout<<"5 to exit"<<endl;
	do{
		cout<<"***** Enter Choice *****"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:{
				cout<<"Enter value to push"<<endl;
				cin>>value;
				push(value);
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
				pop();
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
