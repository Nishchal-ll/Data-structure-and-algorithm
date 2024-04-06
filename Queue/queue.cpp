#include<iostream>
#define max 3
using namespace std;

class Queue{
public:
int queue[max];
int rear;
int front;

void queueresetter(){
rear=-1;
front=0;
}

void enque(){
int enquevalue;
cout<<"Enter a value you want to enque"<<endl;
cin>>enquevalue;
rear++;
queue[rear]=enquevalue;

cout<<queue[rear]<<" has been enqued"<<endl;

}

void deque(){
cout<<queue[front]<<" has been dequed"<<endl;
front++;

}

void isempty(){
if(rear<front){
cout<<"Queue is empty"<<endl;
}
else{
cout<<"Queue is not empty"<<endl;
}
}

void peek(){
cout<<"The value in front of the queue is "<<queue[front]<<endl;
}

void isfull(){
if(rear==max-1){
cout<<"Queue is full"<<endl;
}
else{
cout<<"Queue is not full"<<endl;
}
}

void traverse(){
		if(rear<front){
			cout<<"Queue is empty"<<endl;
		}
		else{
			for(int i=front;i<=rear;i++){
				cout<<queue[i]<<endl;
			}
}
}
};
int main(){
Queue q1;
q1.queueresetter();
int n;
do{
cout<<"1-Queue resetter"<<endl;
cout<<"2-Enque"<<endl;
cout<<"3-Deque"<<endl;
cout<<"4-Check empty queue"<<endl;
cout<<"5-Check full queue"<<endl;
cout<<"6-Display peek value"<<endl;
cout<<"7-Traverse "<<endl;
cout<<"Enter the operation number"<<endl;
cin>>n;
switch(n){
case 1:
q1.queueresetter();
cout<<"Queue has been reset"<<endl;
break;

case 2:
q1.enque();

break;

case 3:
q1.deque();
break;

case 4:
q1.isempty();
break;

case 5:
q1.isfull();
break;

case 6:
q1.peek();
break;

case 7:
	q1.traverse();
	break;

default:
cout<<"Invalid output"<<endl;
}

}while(n!=8);
return 0;
}


