#include<iostream>
#define max 5
using namespace std;

class stack{
    public:
    int sdata[max];
    int count;
    
    stack(){
        this->count=-1;
    }
    
    void makeempty(){
        count=-1;
    }
    
     void checkempty(){
        if(count<0){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack is not empty"<<endl;
        }
    }
    
    void checkfull(){
        if(count+1==max){
            cout<<"Stack is full"<<endl;
        }
        else{
            cout<<"Stack is not full"<<endl;
        }
    }
        
    void pushdata(){
        cout<<"Enter data you want to enter in stack"<<endl;
        count++;
        cin>>sdata[count];
        cout<<sdata[count]<<" is inserted in stack"<<endl;
    }
    
    void popdata(){
        int popelement=sdata[count];
        count--;
        cout<<popelement<<" is removed from stack"<<endl;
    }
    
    void top(){
        cout<<"Top element in stack is "<<sdata[count]<<endl;
    }
    
    void traverse(){
        cout<<"Elements in stack are"<<endl;
        for(int i=0;i<=count;i++){
            cout<<sdata[i]<<endl;
        }
    }
};
int main(){
    stack s;
   int choice;
    do{
    cout<<"MENU"<<endl;
    cout<<"Enter your choice:"<<endl;
    cout<<"1.Make empty"<<endl<<"2.Is empty"<<endl<<"3.Check full"<<endl<<"4.Push item"<<endl<<"5.Pop item"<<endl<<"6.Top item"<<endl<<"7.Traverse the element"<<endl<<"Press any other number to exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        s.makeempty();
        break;
        
        case 2:
        s.checkempty();
        break;
        
        case 3:
        s.checkfull();
        break;
        
        case 4:
        s.pushdata();
        break;
        
        case 5:
        s.popdata();
        break;
        
        case 6:
        s.top();
        break;
        
        case 7:
        s.traverse();
        break;
        
        default:
        cout<<"Re-enter your choice."<<endl;
    }
    }while(choice!=8);
return 0;
}
