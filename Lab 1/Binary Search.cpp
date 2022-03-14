#include <iostream>
#include <algorithm>
int counts=0;
int counts_rec=0;
using namespace std;


int Binary_iter(int arr[],int start,int ending,int element)
{

    while(start<=ending){
            counts++;
    int mid=(start+ending)/2;
    counts++;
    if(element>arr[mid])
    {
        counts++;
        start=mid+1;
        counts++;

    }
    else if(element<arr[mid])
    {
        counts++;
        ending=mid-1;
        counts++;

    }
    else if(element==arr[mid])
    {
        counts++;
        return mid+1;
        counts++;
    }

    }
    counts++;
    counts++;
    return -1;

}

int Binary_rec(int arr[],int start, int ending, int element)
{

    int mid=(start+ending)/2;
    counts_rec++;
    if(element==arr[mid]){
            counts_rec++;
        return mid+1;
    counts_rec++;
    }
    else if(element>arr[mid])
    {
        counts_rec++;
        return Binary_rec(arr,mid+1,ending,element);
        counts_rec++;
    }
    else if(element<arr[mid])
    {
        counts_rec++;
        return(Binary_rec(arr,start,mid-1,element));
        counts_rec++;
    }
    counts_rec++;

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
    int ans=Binary_iter(arr,0,len,45);
    int ans_rec=Binary_rec(arr,0,len,45);
    cout<<ans<<endl<<ans_rec;

    cout<<endl<<counts;
    cout<<endl<<counts_rec;


    return 0;

}
