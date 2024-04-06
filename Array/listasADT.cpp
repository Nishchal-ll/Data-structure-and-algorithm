#include<iostream>
#define max 4
using namespace std;
class list{
    public:
    int listt[max];
    int count;
    int temp;
    int n;
    
    list(){
        this->count=-1;
    }
    
    void makeempty(){
        count=-1;
    }
    
    void checkempty(){
        if(count<0){
            cout<<"List is empty"<<endl;
        }
        else{
            cout<<"List is not empty"<<endl;
        }
    }
    
    void checkfull(){
        if(count+1==max){
            cout<<"List is full"<<endl;
        }
        else{
            cout<<"List is not full"<<endl;
        }
    }
    
    void insertdata(){
        cout<<"Enter the data you want to insert"<<endl;
        count++;
        cin>>listt[count];
    }
    
    void deletedata(){
        cout<<"Enter the position you want to delete"<<endl;
        cin>>n;
        temp=listt[n];
        listt[n]=listt[count];
        listt[count]=temp;
        cout<<temp<<" was deleted from list"<<endl;
        cout<<"Datas are"<<endl;
        for(int i=0;i<=count-1;i++){
            cout<<listt[i]<<endl;
        }
    }
    
    void traverse(){
        cout<<"Datas are"<<endl;
        for(int i=0;i<=count;i++){
            cout<<listt[i]<<endl;
    }
    }

};
int main(){
    list l;
   int choice;
    do{
    cout<<"MENU"<<endl;
    cout<<"Enter your choice:"<<endl;
    cout<<"1.Make empty"<<endl<<"2.Is empty"<<endl<<"3.Check full"<<endl<<"4.Insert item"<<endl<<"5.Delete item"<<endl<<"6.Traverse the element"<<endl<<"Press any other number to exit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        l.makeempty();
        break;
        
        case 2:
        l.checkempty();
        break;
        
        case 3:
        l.checkfull();
        break;
        
        case 4:
        l.insertdata();
        break;
        
        case 5:
        l.deletedata();
        break;
        
        case 6:
        l.traverse();
        break;
        
        default:
        cout<<"Re-enter your choice."<<endl;
    }
    }while(choice!=7);
return 0;
}
