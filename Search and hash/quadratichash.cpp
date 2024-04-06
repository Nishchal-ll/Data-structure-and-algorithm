#include <iostream>
using namespace std;

int main()
{
    int data[10]={9,5,13,54,24,76,43,86,34,66};
    int hash[10]={0};
    for(int i=0;i<10;i++)
    {
        int temp;
        temp=data[i];
        for(int j=0;j<100;j++,temp=temp+((j+1)*(j+1)))
        {
            if(hash[temp%10]==0)
            {
                hash[temp%10]=data[i];
                break;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<hash[i]<<", ";
    }
    return 0;
}
