#include <iostream>
#include <vector>
#include <algorithm>

#define v vector<int>
#define pb push_back
using namespace std;
int main()
{
    int n,c,s=0,count=0;
    v containers;
    cout<<"enter maximum capacity of ship : "<<endl;
    cin>>c;
    cout<<"Enter total number of containers : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int w;
        cout<<"Enter container weight : "<<endl;
        cin>>w;
        containers.pb(w);
    }
    sort(containers.begin(),containers.end());
      for(int i=0;i<n;i++)
    {
        if(s+containers[i]<=c)
        {
            s=s+containers[i];
            count++;
        }
    }
    cout<<count;
    return 0;

}
