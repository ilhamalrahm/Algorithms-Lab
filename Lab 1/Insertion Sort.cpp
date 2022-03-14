#include <iostream>
using namespace std;
int counts=0;

void Insertion(int arr[],int len)
{
    int key=0,temp;
    counts++;

    for(int i=1;i<len;i++)
    {
        counts++;
        int key=arr[i];
        counts++;
        int pos=-1;
        counts++;
        for(int j=i-1;j>=0;j--)
        {
            counts++;
            if(arr[j]>key)
            {
                counts++;
                arr[j+1]=arr[j];
                counts++;
                pos=j;
                counts++;
            }
            else{

                break;
            }
        }
        counts++;
        if(pos!=-1){
                counts++;
            arr[pos]=key;
        counts++;
        }

    }
    counts++;

     for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<counts;



}
int main()
{
    int arr[]={10,4,5,2,8,9,67,45,32,7,6,41};
    int len=sizeof(arr)/sizeof(int);
    Insertion(arr,len);
    return 0;
}
