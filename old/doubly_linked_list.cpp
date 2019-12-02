#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;	
	Node* prev;
		
};

Node* head;

struct Node* GetNewNode(int x){
	Node* temp1 = new Node();
	temp1 -> data = x;
	temp1 -> next = NULL;
	temp1 -> prev = NULL;
	return temp1;
};

void InsertAtHead(int x){

	Node* newNode = GetNewNode(x);
	if (head==NULL){
		head =newNode;
		return;
	} 

	head -> prev = newNode;
	newNode -> next =head;
	head =newNode;
	
}

void Print() {
	Node* temp = head;
	cout << ("Forward: ");
	while(temp != NULL){

		cout << temp -> data << " ";
		temp = temp -> next;
	}	

	cout << endl;
}

void RevPrint() {
	Node* temp = head;
	if(temp == NULL) return;

	while(temp -> next != NULL){
		temp = temp -> next;
	}

	cout << ("Reverse: ");
	while(temp != NULL){

		cout << temp -> data<< " ";
		temp = temp -> prev;
	}	

	cout << endl;
}



int main(int argc, char const *argv[])
{
	head = NULL;
	InsertAtHead (2); Print(); RevPrint();
	InsertAtHead (3); Print(); RevPrint();
	InsertAtHead (4); Print(); RevPrint();

	return 0;
}
