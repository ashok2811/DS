#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;	
		
};

struct Node* Insert(struct Node* head, int data, int n){
	Node* temp1 = new Node();
	temp1 -> data = data;
	temp1 -> next = NULL;
	if (n==1)
	{
		temp1 -> next = head;
		head =temp1;
		return head;
	}

	Node* temp2 = head;
	for (int i = 0; i < n-2; i++)
	{
		temp2 = temp2 -> next; 
	}

	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;
	return head;
	
}

void Print(struct Node* head) {
	if (head==NULL) return;
	cout << head-> data << " ";
	Print(head -> next);	
}

void RevPrint(struct Node* head) {
	if (head==NULL){return;}	
	RevPrint(head -> next);	
	cout << head-> data << " ";
}



int main(int argc, char const *argv[])
{

	Node* head = NULL;


	head = Insert(head, 1,1);
	head = Insert(head, 3,1);
	head = Insert(head, 4,2);
	head = Insert(head, 6,1);
	head = Insert(head, 7,4);
	head = Insert(head, 8,3);
	Print(head); 
	cout << endl;
	RevPrint(head);
	cout << endl;

	return 0;
}
