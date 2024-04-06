#include<iostream>
using namespace std;
class Node{
	public:
		Node* next;
		int data;
};
class queue{
	private:
		Node* front;
		Node* rear;
	public:
		queue(){
			front=NULL;
			rear=NULL;
		}
		
	void checkempty(){
		if(rear==NULL){
			cout<<"Queue is empty"<<endl;
		}
		else{
			cout<<"Queue is not empty"<<endl;
		}
	}
	
	void enque(){
		int d;
		cout<<"Enter the data you want to insert"<<endl;
		cin>>d;
		Node* newnode=new Node;
		newnode->data=d;
		newnode->next=NULL;
		if(rear==NULL){
			rear=newnode;
			front=newnode;
		}
		else{
		rear->next=newnode;
		rear=newnode;
		}
	}
	
	void deque(){
		Node*temp =front;
		cout<<front->data<<" has been dequed"<<endl;
		front=front->next;
		delete(temp);
	}
	
	void display(){
		Node* temp=front;
		while(temp!=NULL){
			cout<<temp->data<<"->";
		temp=temp->next;
		}cout<<"NULL"<<endl;
	}
};
int main(){
	queue s1;
	int n;
	do{
		cout<<"1.Enque elements"<<endl;
		cout<<"2.Deque elements"<<endl;
		cout<<"3.Display the elements"<<endl;
		cout<<"4.Check empty"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"Enter you choice"<<endl;
		cin>>n;
		switch(n){
			case 1:
				s1.enque();
				break;
				
			case 2:
				s1.deque();
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
