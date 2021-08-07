#include<iostream>
using namespace std;

int main()
{
    int n,comp=0,s=0;
    cout<<"\n Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"\n Enter array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    for(int i=0;i<n-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                comp++;
                min_idx=j;
            }
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
        s++;
        
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"comparision ="<<" "<<comp;
    cout<<"\n";
    cout<<"Swaps ="<<" "<<s;
}