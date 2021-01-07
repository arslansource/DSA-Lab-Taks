#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node* head = NULL;
void insert_front(int value){
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	cout<<"Enter value:"<<endl;
	cin>>value;
	new_node -> data = value;
	new_node -> next = head;
	head = new_node;
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
	cout<<"1 for inserting a node at front"<<endl;
	cout<<"2 for displaying linked list."<<endl;
	cout<<"3 to exit."<<endl;
	do{
		cout<<"*****	Enter Choice	*****"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				insert_front(a);
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				cout<<"Exitting..."<<endl;
				break;
			}
			default:{
				cout<<"Invalid command, try again"<<endl;
				break;
			}
		}
	}while(ch != 3);
	return 0;
}
