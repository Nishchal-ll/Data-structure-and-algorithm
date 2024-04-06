#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
class circularlist{
    private:
    Node* head;
    public:
    circularlist(){
        Node* head=NULL;
    }
    
    void insertfirst(){
        int d;
        cout<<"Enter the data you want to enter at first"<<endl;
        cin>>d;
        Node* newnode=new Node;
        newnode->data=d;
        if(head==NULL){
            head=newnode;
            newnode->next=head;
        }
        Node*tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=newnode;
        newnode->next=head;
        head=newnode;
    }
   
    void insertlast(){
         int d;
        cout<<"Enter the data you want to enter at last"<<endl;
        cin>>d;
        Node* newnode=new Node;
        newnode->data=d;
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=newnode;
        newnode->next=head;
    }
    
      void insertmiddle(){
        int pos,value;
        cout<<"Enter the position where you want to add data"<<endl;
        cin>>pos;
        cout<<"Enter the value"<<endl;
    cin>>value;
        Node* newnode = new Node;
        newnode->data = value;
      
           Node* temp=head;
           int cur_pos=0;
           while(cur_pos!=pos-1){
               temp=temp->next;
               cur_pos++;
           }
           newnode->next=temp->next;
           temp->next=newnode;
    }
    
    void deletefirst(){
        Node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        Node*temp=head;
        tail->next=temp->next;
        head=tail->next;
        delete(temp);
    }
    
    void deletelast(){
        Node* tail=head;
        while(tail->next->next!=head){
            tail=tail->next;
        }
        Node* temp=tail->next;
        tail->next=head;
        delete(temp);
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
        do{
            cout<<cur->data<<"->";
            cur=cur->next;
        }while(cur!=head);
         cout<<endl;    
    }
    
    void checkcircular(){
    	Node* c=head;
    	for(int i=0;i<=15;i++){
    		cout<<c->data<<"->";
    		c=c->next;
		}
		cout<<endl;
	}
};
int main(){
    circularlist l;
    int choice;
    do {
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Insert at middle" << endl;
        cout << "4. Delete from beginning" << endl;
        cout << "5. Delete from end" << endl;
        cout << "6. Delete from middle" << endl;
        cout << "7. Display elements" << endl;
        cout << "8. Check circular"<<endl;
        cout << "9. Exit" << endl;
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
            case 8:
            	l.checkcircular();
            default:
                cout << "Invalid choice"<<endl;
        }
    } while (choice != 9);
    return 0;
}
