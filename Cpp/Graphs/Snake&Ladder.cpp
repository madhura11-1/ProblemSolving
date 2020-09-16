#include<bits/stdc++.h>
using namespace std;

class Graph{

    int n;
    list<int> *arr;

   public:
   Graph(int n1){

       n = n1;
       arr = new list<int>[n1];

   }

   void addNode(int u,int v){
       arr[u].push_back(v);
   }

   void show(){
       
       for(int i=0;i<n;i++){
           cout<<i<<"->";
           list<int>:: iterator it;
           it = arr[i].begin();
           while(it != arr[i].end()){
               cout<<*it<<"->";
               it++;
           }
           cout<<endl;
       }
   }

   void BFS(int node,int desti){

       bool visited[n] = {false};
       int dis[n] = {0};
       int parent[n] = {-1};

       queue<int> q;
        q.push(node);
        visited[node] = true;
        dis[node] = 0;
        cout<<"BFS"<<endl;
        while(!q.empty()){
            int m = q.front();
            q.pop();
            cout<<m<<" ";
            list<int>:: iterator it;
           it = arr[m].begin();
           while(it != arr[m].end()){
               if(!visited[*it]){
                   q.push(*it);
                   visited[*it] = true;
                   dis[*it] = dis[m] +1;
                   parent[*it] = m;
               }
               it++;
           }
        
        }
        cout<<endl;
        cout<<"Shortest Distance of each node from the source"<<endl;
        for(int i=0;i<n;i++){
            cout<<dis[i]<<" ";
        }

        cout<<endl;
        cout<<"Shortest Path to go from destination to source"<<endl;
        int temp = desti;
        while(temp != -1){
            cout<<temp<<" ";
            temp = parent[temp];
        }

   }

};


int main(){
    Graph *abc = new Graph(42);
    int board[50] = {0};
    board[2] =13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
    board[34] = -22;
    for(int u=0;u<36;u++){
        for(int dice = 1;dice<=6;dice++){
            int v = u+dice+board[u+dice];
            abc->addNode(u,v);
        }
    }
    abc->show();
    abc->BFS(0,36);
    return 0;
}