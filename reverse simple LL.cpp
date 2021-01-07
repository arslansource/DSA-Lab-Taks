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
void reverse(){
	struct Node* prev_node;
	struct Node* current_node;
	struct Node* next_node;
	current_node = next_node = head;
	while(next_node != NULL){
		next_node = next_node -> next;
		current_node -> next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}
	head = prev_node;
	cout<<"Linked List Reversed"<<endl;
	cout<<"Enter display option fron menu to view"<<endl;
}
void display() {
   	if(head == NULL){
   		cout<<"Empty"<<endl;
   	}
   	else{
		struct Node* ptr;
   		ptr = head;
   		while (ptr != NULL) {
		cout<< ptr->data <<" ";
      	ptr = ptr->next;
  	}
   	cout<<endl;
   	}
}
int main(){
	int a,ch;
	cout<<"1 for insertion"<<endl;
	cout<<"2 for display"<<endl;
	cout<<"3 for reversing LL"<<endl;
	cout<<"4 to exit"<<endl;
	do{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter value"<<endl;
				cin>>a;
				insert(a);
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
				cout<<"Exitting"<<endl;
				break;
			}
			default:{
				cout<<"Wrong input"<<endl;
				break;
			}
		}
	}while(ch != 4);
	return 0;
}
