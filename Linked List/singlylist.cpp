#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class linkedlist{
    private:
    Node* head;
    public:
    linkedlist(){
        Node* head=NULL;
    }
    
    void insertfirst(){
        int d;
        cout<<"Enter the data you want to enter at first"<<endl;
        cin>>d;
        Node* newnode=new Node;
        newnode->data=d;
        newnode->next=head;
        head=newnode;
    }
    
    void insertlast(){
        int d;
        cout<<"Enter the data you want to enter at last"<<endl;
        cin>>d;
        Node* newnode=new Node;
        newnode->data=d;
        newnode->next=NULL;
        Node* temp=head;
        if(head==NULL){
            head=newnode;
        }
        else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    }
    
    void insertmiddle(){
        int pos,value;
        cout<<"Enter the position where you want to add data"<<endl;
        cin>>pos;
        cout<<"Enter the value"<<endl;
    cin>>value;
        Node* newnode = new Node;
        newnode->data = value;
       if(pos==1){
           newnode->next=head;
           head=newnode;
       }
       else{
           Node* temp=head;
           int cur_pos=0;
           while(cur_pos!=pos-1){
               temp=temp->next;
               cur_pos++;
           }
           newnode->next=temp->next;
           temp->next=newnode;
       }
    }
    void deletefirst(){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    
    void deletelast(){
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        Node*secondlast=temp->next;
        temp->next=NULL;
        delete secondlast;
    }
    
    void deletemiddle(){
        int p;
        cout<<"Enter the position you want to delete"<<endl;
        cin>>p;
        if(p==0){
            deletefirst();
        }
        else{
             Node* temp=head;
           int cur_pos=0;
           while(cur_pos!=p-1){
               temp=temp->next;
               cur_pos++;
           }
         Node* prev=temp->next;
         temp->next=temp->next->next;
         delete(prev);
        }
    }
    
    void display(){
        Node* cur= head;
        while(cur!= NULL){
            cout<<cur->data<<" ->";
            cur=cur->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    linkedlist l;
    int choice;
    do {
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Insert at middle" << endl;
        cout << "4. Delete from beginning" << endl;
        cout << "5. Delete from end" << endl;
        cout << "6. Delete from middle" << endl;
        cout << "7. Display elements" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                l.insertfirst();
                break;
            case 2:
                l.insertlast();
                break;
            case 3:
                l.insertmiddle();
                break;
            case 4:
                l.deletefirst();
                break;
            case 5:
                l.deletelast();
                break;
            case 6:
              l.deletemiddle();
                break;
            case 7:
                cout << "Linked list elements: ";
                l.display();
                break;
            default:
                cout << "Invalid choice"<<endl;
        }
    } while (choice != 8);
    return 0;
}
