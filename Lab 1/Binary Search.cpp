#include <iostream>
#include <algorithm>
using namespace std;

int Binary_iter(int arr[],int start,int ending,int element)
{
    while(start<=ending){
    int mid=(start+ending)/2;
    if(element>arr[mid])
    {
        start=mid+1;
    }
    else if(element<arr[mid])
    {
        ending=mid-1;

    }
    else if(element==arr[mid])
    {
        return mid+1;
    }

    }
    return -1;

}

int Binary_rec(int arr[],int start, int ending, int element)
{
    int mid=(start+ending)/2;
    if(element==arr[mid]){
        return mid+1;
    }
    else if(element>arr[mid])
    {
        return Binary_rec(arr,mid+1,ending,element);
    }
    else if(element<arr[mid])
    {
        return(Binary_rec(arr,start,mid-1,element));
    }

    return -1;
}




int main()
{
    int arr[]={10,4,5,2,8,9,67,45,32,7,6,41};
    int len=sizeof(arr)/sizeof(int);
    sort(arr,arr+len);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=Binary_iter(arr,0,len,2);
    int ans_rec=Binary_rec(arr,0,len,2);
    cout<<ans<<endl<<ans_rec;


    return 0;

}
