#include<iostream>
using namespace std;
///vertex of graph
class vertex{
public:
        char color;
        int distance;
        int Find;
        int parent;
        vertex(){
            color='w';
            distance=-1;
            parent=-1;
            Find=-1;
        }
};

class Graph{
        int n,i,j,k,time;
        int adj[10][10];
    public:
        vertex v[10];
        Graph(int n){
        this->n=n;
        time=0;
        }
        void give_adjacen()
        {
            cout<<"vertex num: ";
            for(i=0;i<n;i++)
                cout<<i<<" ";
            cout<<endl;
            for(i=0;i<n;i++){
                cout<<"vertex :"<<i<<" : ";
                for(j=0;j<n;j++){
                    cin>>adj[i][j];
                }
            }
        }

    void DFS(){
        k=0;
        while(k<n )
            {
                    if(v[k].color=='w')
                        DFS_VSIT(k);
                    k++;
            }
        }
 void   DFS_VSIT(int u){
        time=time+1;
        v[u].distance=time;
        v[u].color='g';
        for(i=0;i<n;i++){
            if(adj[u][i]==1  && v[i].color=='w'){
                v[i].parent=u;
                DFS_VSIT(i);
            }
        }
        v[u].color='b';
        time=time+1;
        v[u].Find=time;
    }
void DFS_status(){
    for(i=0;i<n;i++){
            cout<<"vertex "<<i<<" distance :"<<v[i].distance<<" find_time "<<v[i].Find<<endl;
        }
}
};
int main()
{
        int i,j,n;
        cout<<"Enter the vertex number of a graph"<<" ";
        cin>>n;
        Graph g(n);
        g.give_adjacen();
       g.DFS();
       g.DFS_status();

}

