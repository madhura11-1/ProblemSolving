// LCM = a*b/gcd(a,b); 
// so apparently for the array take two numbers at once inlucding one number as lcm of previous two

// LCM wihtout gcd is where u apply brute force where in starting with 2 as common factor till the maximum number in array
// you check if numbers in array are divisible by it and then if yes reduce the numbers and multiple ans with 2 or whatever factor.


#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b == 0)
    return a;
    return gcd(b,a%b);
}

void calculateLCM(int *arr,int n){
    int ans = arr[0];
    for(int i= 1;i<n;i++){
        ans = (arr[i]*ans)/gcd(arr[i],ans);
    }
    cout<<ans;
}

int main(){

    int n;
    cout<<"Enter number of elements to calculate the lcm of"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    calculateLCM(arr,n);
    return 0;
}