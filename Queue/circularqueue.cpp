#include<iostream>
#define max 3
using namespace std;
class CircularQ{
    public:
        int front=-1;
        int rear=-1;    
        int cqu[max];
    
     bool isEmpty(){
          if(rear==-1&&front==-1){
        return 1;
    }
    else{
return 0;
    }
}

 bool isFull(){
     if((rear+1)%max==front)
    {
        return 1;
    }else{
        return 0;
    }
}
 void enque(int x){
     
    if(front==-1&&rear==-1){
        front++;
        rear++;
        cout<<x<<" has been enqued."<<endl;
        cqu[rear]=x;
    }else{
        cout<<x<<" has been enqued."<<endl;
        rear=(rear+1)%max;
        cqu[rear]=x;
    }
}
         void deque(){
             if(isEmpty()){
        cout<<"Can't deque queue is already empty."<<endl;
    }else if(front==rear){
        cout<<cqu[front]<<" will be dequed."<<endl;
        front=-1;
        rear=-1;
	}else{
        cout<<cqu[front]<<" will be dequed."<<endl;
        front=(front+1)%max;
    }
}

         void traverse(){
              if(isEmpty()){
        cout<<"Cannot traverse queue is emtpy."<<endl;
    }else{
        cout<<"The datas in circular queue are: "<<endl;
        for(int i=front;i!=rear;i=(i+1)%max)
        {
            cout<<cqu[i]<<"  ";
        }cout<<cqu[rear]<<"  "<<endl;
    }
}
};
int main(){
    CircularQ cq;
    int n;
    do{
        cout<<"1-Enque"<<endl;
         cout   <<"2-Deque"<<endl;
          cout  <<"3-Traverse"<<endl;
             cout<<"Choose an operation: "<<endl;
        cin>>n;
        
        switch(n){
            case 1:
                if(cq.isFull()){
                    cout<<"Cannot enque the queue is overflowed."<<endl;
                }else{
                    int enquevalue;
                    cout<<"Enter a number to enque: ";
                    cin>>enquevalue;
                    cq.enque(enquevalue);
                }
                break;
            case 2:
                cq.deque();
                break;
            case 3:
                cq.traverse();
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }while(n!=4);
  return 0;  
}
