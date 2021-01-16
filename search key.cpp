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
	insert(12);
	insert(43);
	insert(2);
	display();
	search(43);
	return 0;
}
