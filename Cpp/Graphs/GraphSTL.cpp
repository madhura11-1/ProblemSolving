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
      // arr[v].push_back(u);
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

   void DFS(int node){                   //wont work for an undirected graph

       cout<<node<<" ";
       list<int> :: iterator it;
       it = arr[node].begin();
       while(it != arr[node].end()){
           return DFS(*it);
           *it++;
       }

   }

};


int main(){
    Graph *abc = new Graph(6);
    abc->addNode(0,1);
    abc->addNode(0,4);
    abc->addNode(1,2);
    abc->addNode(2,3);
    abc->addNode(2,4);
    abc->addNode(3,4);
    abc->addNode(3,5);
    abc->show();
    //abc->BFS(0,5);
    abc->DFS(0);
    return 0;
}