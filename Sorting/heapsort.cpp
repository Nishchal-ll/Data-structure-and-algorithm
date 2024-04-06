#include<iostream>
using namespace std;
void heap(int arr[],int n,int i){
   int large=i;
   int l=2*i+1;
   int r=2*i+2;
   if(l<n&&arr[l]>arr[large]){
       large=l;
   }
   if(r<n&& arr[r]>arr[large]){
       large=r;
   }
   if(large!=i){
       swap(arr[i],arr[large]);
       heap(arr,n,large);
   }
}

void hsort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heap(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heap(arr,i,0);
    }
}
int main(){
	int n;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Enter a["<<i<<"]: ";
    cin>>arr[i];
    cout<<endl;
    }
    for(int i=n/2-1;i>=0;i--){
        heap(arr,n,i);
    }
    hsort(arr,n);
    	cout<<"Sorted array is: "<<endl;
	 for(int m=0;m<n;m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}
