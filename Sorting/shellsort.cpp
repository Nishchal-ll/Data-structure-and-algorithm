#include<iostream>
using namespace std;
int main(){
	int n,temp,j,gap;
    cout<<"Enter the number of data"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cout<<"Enter a["<<i<<"]: ";
    cin>>a[i];
    cout<<endl;
    }
    for(gap=n/2;gap>=1;gap=gap/2){
    	for(j=gap;j<n;j++){
    		for(int i=j-gap;i>=0;i=i-gap){
    			if(a[i+gap]>a[i]){
    				break;
				}
				else{
					temp=a[i+gap];
					a[i+gap]=a[i];
					a[i]=temp;
				}
			}
		}
	}
	cout<<"Sorted array is: "<<endl;
	 for(int m=0;m<n;m++){
        cout<<a[m]<<" ";
    }
    return 0;
}
