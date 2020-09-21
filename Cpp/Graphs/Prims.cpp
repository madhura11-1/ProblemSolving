#include <bits/stdc++.h>
using namespace std;

int minDis(int *dis,bool *check){

    int mini = INT_MAX;
    int node;

    for(int i=0;i<5;i++){
        if(check[i] == false && dis[i] < mini){
            mini = dis[i];
            node = i;
        }
    }
    return node;
}

void prims(int graph[][5]){                                    // Complexity : O(n2)
 
    int dis[5];
    bool check[5];
    int parent[5];

    for(int i=0;i<5;i++){
        dis[i] = INT_MAX;
        check[i] = false;
    }

    dis[0] = 0;
    parent[0] = -1;

    for(int count=0;count<4;count++){
    int u = minDis(dis,check);

    check[u] = true;
    
    for(int i=0;i<5;i++){
        if(graph[u][i] && check[i] == false && graph[u][i] < dis[i]){
            dis[i] = graph[u][i];
            parent[i] = u;
        }
    }
    }
    

    for(int i=1;i<5;i++){
        cout<<i<<" "<<parent[i]<<" " <<graph[i][parent[i]]<<endl;
    }

}

int main(){

   int graph[5][5] = { { 0, 2, 0, 6, 0 }, 
                        { 2, 0, 3, 8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, 8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 } };

    prims(graph);
    return 0;
}