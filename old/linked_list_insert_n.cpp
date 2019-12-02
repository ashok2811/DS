// Insert a node at nth  position
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;   //pointer to node
};

struct Node* head;


void Insert(int data, int n){
	Node* temp1 = new Node();
	temp1 -> data = data;
	temp1 -> next = NULL;
	if (n==1)
	{
		temp1 -> next = head;
		head =temp1;
		return;
	}

	Node* temp2 = head;
	for (int i = 0; i < n-2; i++)
	{
		temp2 = temp2 -> next; 
	}

	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;

	
}

void Print() {
	cout << "List is : ";
	Node* temp = head ;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}

	cout << endl;

}


int main(int argc, char const *argv[])
{

head = NULL; //empty list
int n ; 

Insert(2,1);
Insert(3,1);
Insert(4,1);
Insert(5,3);
Print();
return 0;

}

