#include <bits/stdc++.h>
using namespace std;

void Belman(int graph[][4]){

    vector<pair<int,int>> edges;

    //array to note the distances
    int dis[4];

    for(int i=0;i<4;i++){
        dis[i] = INT_MAX;
    }

    //creation of edges array
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(graph[i][j] != 0){
                pair<int,int> abc;
                abc.first = i;
                abc.second = j;
                edges.push_back(abc);
            }
        }
    }

   /* for(int i=0;i<edges.size();i++){
        cout<<edges[i].first<<" "<<edges[i].second<<endl;       //correct
    }*/

    dis[0] = 0;

    //iterate over for n-1 times

    for(int i=0;i<3;i++){

    for(int i=0;i<4;i++){
        cout<<dis[i]<<endl;
    }

        for(int j=0;j<edges.size();j++){
            pair<int,int> val = edges[j];
            if(dis[val.first] + graph[val.first][val.second] < dis[val.second]){
                dis[val.second] = dis[val.first] + graph[val.first][val.second];
            }
        }
    }


    for(int i=0;i<4;i++){
        cout<<dis[i]<<endl;
    }
}

int main(){

    int graph[4][4] = { { 0, 4, 0, 5}, 
                        { 0, 0, 0, 0}, 
                        { 0, -10, 0, 0}, 
                        { 0, 0, 3,0 }} ;

    Belman(graph);
    return 0;
}