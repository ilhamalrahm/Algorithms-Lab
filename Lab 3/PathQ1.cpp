#include <iostream>
#include <vector>
using namespace std;

bool dfs(int s,int d,vector<int> list[],vector<int> visit)
{
    visit[s]=1;
    bool path=false;


    for(int i:list[s])
    {
        if(i==d)
        {
            return true;
        }
        else{
           path= dfs(i,d,list,visit);
        }


    }

    return path;



}

int main()
{
    int v,e;

    cout<<"Enter number of vertices :";
    cin>>v;
    vector<int> list[v];
    vector<int> visit(v,0);


    cout<<"Enter the number of edges : ";
    cin>>e;
    for(int i=0;i<e;i++)
    {
        int s,d;
        cout<<"Enter the source : "<<endl;
        cin>>s;
        cout<<"Enter the Destination : "<<endl;
        cin>>d;

        list[s].push_back(d);
    }
    int S,D;
    cout<<"Enter source from which to find path : "<<endl;
    cin>>S;
    cout<<"Enter destination to which to find path : "<<endl;
    cin>>D;

bool flag;
  flag= dfs(S,D,list,visit);


  if(flag)
  {
      cout<<"Path is there";
  }
  else{
    cout<<"No path";
  }



    return 0;
}

