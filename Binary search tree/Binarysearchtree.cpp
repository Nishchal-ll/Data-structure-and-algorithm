#include<iostream>
using namespace std;
class Node{
	public:
		int d;
		Node*lchild;
		Node*rchild;
		
		Node(int data){
			d=data;
			lchild=NULL;
			rchild=NULL;
		}
		
	  Node* insert(Node* root, int data) {
        if(root == NULL){
            return new Node(data);
        }
     else{
            Node* temp;
            if(data <= root->d) {
                temp = insert(root->lchild, data);
                root->lchild = temp;
            }
            else {
                temp = insert(root->rchild, data);
                root->rchild = temp;
            }
        return root;
     }
    }
    
    Node* remove(Node* root,int e){
     if(root->d > e){ 
           root->lchild = remove(root->lchild, e); 
            return root; 
       } 
        else if(root->d< e){ 
           root->rchild = remove(root->rchild, e); 
            return root; 
        } 
         if (root->lchild == NULL) { 
            Node* temp = root->rchild;
            delete root; 
            return temp; 
        } 
        else if (root->rchild == NULL) { 
            Node* temp = root->lchild; 
            delete root; 
            return temp; 
        } 
        if(root->lchild!=NULL&& root->rchild!=NULL){
        	int mini=min(root->rchild)->d;
        	root->d=mini;
        	root->rchild=remove(root->rchild,mini);
        	return root;
		}
    }

Node* min(Node*root){
	Node* cur=root;
	while(cur!=NULL){
		cur=cur->lchild;
	}
	return cur;
}

    bool search(Node* root,int key){
	if(root==NULL){
		return 1;
	}
	if(root->d==key){
		return 0;
	}
	if(root->d>key){
		return search(root->rchild,key);
	}
	else{
		return search(root->lchild,key);
	}
}

   void inorder(Node* root){
        if(root == NULL)
            return;
        
        inorder(root->lchild);
        cout << root->d << " ";
        inorder(root->rchild);
    }
};
int main(){
	Node bst(0);
	Node* root=NULL;
	int n,r,data;
	do{
		cout<<"1.Insert at root"<<endl;
		cout<<"2.Insert in other position"<<endl;
		cout<<"3.Traverse"<<endl;
		cout<<"4.Search"<<endl;
		cout<<"5.Delete"<<endl;
		cin>>n;
		switch(n){
			case 1:
				cout<<"Enter the data you want to enter at root:"<<endl;
				cin>>data;
				root=bst.insert(root,data);
				break;
				
			case 2:
				cout<<"Enter the data you want to enter"<<endl;
	             cin>>r;
	             bst.insert(root,r);
				break;
		
		    case 3:
		    bst.inorder(root);
		    cout<<endl;
		    	break;
		    	
		   case 4:
		    	int k;
		    	cout<<"Enter the data you want to search:";
		    	cin>>k;
		    	bst.search(root,k);
		    	if(bst.search(root,k)==1){
		    		cout<<"Element not found"<<endl;
				}else{
					cout<<"Element found"<<endl;
				}
		    	break; 
		    	
		    case 5:
		    	int e;
		    	cout<<"Enter the element you want to delete:";
		    	cin>>e;
		    	bst.remove(root,e);
		    	cout<<"Element deleted"<<endl;
		    	break;
		    	
		    default:
		    	cout<<"Exiting program"<<endl;
		}
	}while(n!=6);
	return 0;	
}
	

