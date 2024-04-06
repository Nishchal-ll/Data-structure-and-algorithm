#include<iostream>
using namespace std;
class Node{
	public:
		Node* next;
		int data;
};
class stack{
	private:
		Node* top;
	public:
		stack(){
			top=NULL;
		}
		
	void checkempty(){
		if(top==NULL){
			cout<<"Stack is empty"<<endl;
		}
		else{
			cout<<"Stack is not empty"<<endl;
		}
	}
	
	void push(){
		int d;
		cout<<"Enter the data you want to insert"<<endl;
		cin>>d;
		Node* newnode=new Node;
		newnode->data=d;
		newnode->next=NULL;
		if(top==NULL){
			top=newnode;
		}
		else{
		newnode->next=top;
		top=newnode;
		}
	}
	
	void pop(){
		Node*temp =top;
		cout<<temp->data<<" has been popped from stack"<<endl;
	temp=temp->next;
		delete(temp);
	}
	
	void display(){
		Node* temp=top;
		while(temp!=NULL){
			cout<<temp->data<<"->";
		temp=temp->next;
		}cout<<"NULL"<<endl;
	}
};
int main(){
	stack s1;
	int n;
	do{
		cout<<"1.Push elements onto stack"<<endl;
		cout<<"2.Pop elements from stack"<<endl;
		cout<<"3.Display the elements"<<endl;
		cout<<"4.Check empty"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"Enter you choice"<<endl;
		cin>>n;
		switch(n){
			case 1:
				s1.push();
				break;
				
			case 2:
				s1.pop();
				break;
		
		    case 3:
		    	s1.display();
		    	break;
		    	
		    case 4:
		    	s1.checkempty();
		    	break; 
		    	
		    default:
		    	cout<<"Exiting program"<<endl;
		}
	}while(n!=5);
	return 0;
	
}
