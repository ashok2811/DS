#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* link;
};

Node* top = NULL;

void Push (int x) {
    Node* temp1 = new Node();
	temp1 -> data = x;
	temp1 -> link = top;
    top = temp1;
} 

void Pop() {
    Node* temp;
    if(top == NULL){
        cout << "Stack is Empty" <<endl;
        return;
    }

    temp = top;
    top = top->link;
    delete(temp);

}

void Top(){
    Node* temp = top;
    if (top == NULL){
        cout << "Empty Stack"<< endl;
        return;}
    cout << temp -> data << endl;
    
}

void Print() {
	Node* temp = top;
	cout << ("Stack : ");
	while(temp != NULL){

		cout << temp -> data << " ";
		temp = temp -> link;
	}	

	cout << endl;
}



int main() {
for (int i = 0; i < 20; i++)
    {
        Push(i); Print();
    }

    Top();
    

    return 0;
}