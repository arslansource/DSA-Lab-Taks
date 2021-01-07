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
void del_end(){
	if(head == NULL){
		cout<<"No node to delete"<<endl;
	}
	else{
		struct Node* temp;
		struct Node* secondlast;
		temp = head;
		while(temp -> next != NULL){
			secondlast = temp;
			temp = temp->next;
		}
		if(temp == head){
			head = NULL;
		}
		else{
			secondlast -> next = NULL;
		}
		free(temp);
		
	}
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
	cout<<"3 for deletion at end"<<endl;
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
				del_end();
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
}
