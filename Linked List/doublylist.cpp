#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
class doublylist{
    private:
    Node* head;
    Node* tail;
    public:
    doublylist(){
        head=NULL;
        tail=NULL;
    }
    
void insertfirst(){
    int d;
    cout<<"Enter the data you want to enter at first"<<endl;
    cin>>d;
    Node* newnode=new Node;
    newnode->data=d;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
}

void insertlast(){
    int d;
    cout<<"Enter the data you want to enter at last"<<endl;
    cin>>d;
    Node* newnode=new Node;
    newnode->data=d;
    newnode->next=NULL;
    if(tail==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
}

void insertmiddle(int p){
    int d;
    cout<<"Enter the data you want to enter at "<<p<<" position"<<endl;
    cin>>d;
    Node*temp=head;
    Node* newnode=new Node;
    newnode->data=d;
    int count=1;
    while(count!=p-1){
        temp=temp->next;
        count++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next->prev=newnode;
}

void deletefirst(){
    Node* temp=head;
    head=temp->next;
    delete(temp);
}

void deletelast(){
    Node* temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete(temp);
}
void deletemiddle(int pos){
    Node*temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    Node*cur=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete(cur);
}

void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<-->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
};
int main(){
    doublylist l;
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
            int p;
            cout<<"Enter the position"<<endl;
            cin>>p;
              l.insertmiddle(p);
              break;
            case 4:
                l.deletefirst();
              break;
          case 5:
               l.deletelast();
               break;
            case 6:
            int pos;
            cout<<"Enter the position"<<endl;
            cin>>pos;
             l.deletemiddle(pos);
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


