#include <bits/stdc++.h>
using namespace std;


int truckTour(vector<vector<int>> petrolpumps) {
   int sum = 0;
   int diff = 0;
   int j;
   for(int i=0;i<petrolpumps.size();i++){
      if(petrolpumps[i][0] + sum >= petrolpumps[i][1]){
          sum = sum + (petrolpumps[i][0] - petrolpumps[i][1]);
      }
      else{
          diff += petrolpumps[i][0] - petrolpumps[i][1];
          sum = 0;
          j = i+1;
      }
   }
   return j;
}

/*
int truckTour(vector<vector<int>> petrolpumps) {        both are valid solutions
   int sum = 0;
   int j;
   for(int i=0;i<petrolpumps.size();i++){
      sum = sum + (petrolpumps[i][0] - petrolpumps[i][1]);
      if(sum < 0){
          sum = 0;
          j = i + 1;
      }
   }
   return j;
}
*/

int main(){
   
   vector<vector<int>> abc = {{5,4},{3,6},{10,2}};
   cout<<truckTour(abc);
   return 0;
}