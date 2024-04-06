#include<iostream>
#define max 10
using namespace std;

class queue{
public:
int q[max];
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
q[rear]=enquevalue;
cout<<q[rear]<<" has been enqued in queue"<<endl; 
}

void deque(){
if (rear < front) {
cout << "Queue is empty" << endl;
} else {
int highestvalue= front;
for (int i = front + 1; i <= rear; i++) {
if (q[i] > q[highestvalue]) {
highestvalue=i;
}
      }
		cout << "Dequeued item with highest value: " << q[highestvalue] << endl;
        for (int i = highestvalue; i < rear; i++) {
            q[i] = q[i + 1];
        }
        rear--;
   		}
	}



void isempty(){
if(rear<front){
cout<<"Queue is empty"<<endl;
}
else{
cout<<"Queue is not empty"<<endl;
}
}

void traverse(){
	if(rear<front){
			cout<<"Queue is empty"<<endl;
		}
		else{
			for(int i=front;i<=rear;i++){
				cout<<q[i]<<" "<<endl;
			}
		}
	}

void isfull(){
if(rear==max-1){
cout<<"Queue is full"<<endl;
}
else{
cout<<"Queue is not full"<<endl;
}
}
};
int main(){
queue q1;
q1.queueresetter();
int n;
do{
cout<<"1-Queue resetter"<<endl;
cout<<"2-Enque"<<endl;
cout<<"3-Deque"<<endl;
cout<<"4-Check empty queue"<<endl;
cout<<"5-Check full queue"<<endl;
cout<<"6-Traverse"<<endl;
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
q1.traverse();
break;

default:
cout<<"Invalid output"<<endl;
}

}while(n!=7);
return 0;
}


