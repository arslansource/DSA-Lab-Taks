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
void search(int key){
	int index = 0;
	struct Node* temp;
	temp = head;
	while(temp != NULL && temp -> data != key){
		index++;
		temp = temp->next;
	}
	if(index == 0){
		cout<<"Not Found/ NULL"<<endl;
	}
	else{
		cout<<"Entered key element is at address = "<<index<<endl;
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
	int value,key,ch;
	cout<<"1 to insert"<<endl;
	cout<<"2 to display"<<endl;
	cout<<"3 to search key element in list"<<endl;
	cout<<"4 to exit"<<endl;
	do{
		cout<<"***** Enter Choice *****"<<endl;
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"Enter value to insert"<<endl;
				cin>>value;
				insert(value);
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				cout<<"Enter key element to search"<<endl;
				cin>>key;
				search(key);
				break;
			}
			case 4:{
				cout<<"Exitting.."<<endl;
				break;
			}
			default:{
				cout<<"Invalid command, try again"<<endl;
				break;
			}
		}
	}while(ch != 4);
}
