#include <bits/stdc++.h>
using namespace std;

void Heapify(vector<int> &edges,int n){

for(int i = n-1; i>= 0; i--){                                  // usual heap creation (i.e. insertion of ele  ) takes : O(nlogn) : insert n ele * log(n) height of heap
          int child1 = 2*i+1;
          int child2 = 2*(i+1);
          if(child1 < n && child2 < n){
              if(edges[child1]<= edges[child2] && edges[child1] < edges[i]){
                  swap(edges[i],edges[child1]);
              }
              else if(edges[child2]<= edges[child1] && edges[child2] < edges[i]){
                  swap(edges[i],edges[child2]);
              }
          }
          if(child1 < n && child2 >= n){
                if(edges[child1] < edges[i]){
                    swap(edges[i],edges[child1]);
                }
          }
    }

}

void kruskals(int graph[][5]){

    //put edges into an array to create min heap

    vector<int> edges(0);

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(graph[i][j] != 0){
                edges.push_back(graph[i][j]);
            }
        }
    }
    int n = edges.size();
    Heapify(edges,n);

    while(n!=0){
        swap(edges[0],edges[n-1]);
        Heapify(edges,n-1);
        n--;
    }

    for(int i=0;i<edges.size();i++){
        cout<<edges[i]<<" ";
    }

    bool check[5];

    for(int i=0;i<5;i++){
        check[i] = false;
    }
    cout<<endl;
    for(int i=edges.size()-1;i>= 0;i--){

        for(int h=0;h<5;h++){
            for(int k=0;k<5;k++){
                if((graph[h][k] == edges[i]) && ((check[h] != true) || (check[k] != true))){
                    check[h] = true;
                    check[k] = true;
                    cout<<h<<" "<<k<<" "<<edges[i]<<endl;
                    break;
                }
            }
        }

    }

    //create min heap of edges
    

}

int main(){

    int graph[5][5] = { { 0, 2, 0, 6, 0 }, 
                        { 0, 0, 3, 0, 5 }, 
                        { 1, 0, 0, 0, 7 }, 
                        { 0, 8, 0, 0, 9 }, 
                        { 0, 0, 0, 0, 0 } };
    kruskals(graph);

    return 0;
}