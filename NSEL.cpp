#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

vector <int > NSEL(int arr[],int n){
    stack <int> s;
    vector <int> v;

    for (int i =0; i<n ;i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            v.push_back(-1);
        }
        else{
            v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    return v;
}
   
int main() {
    int arr[]= {7,8,4,5,6,1,2,3,10};
    for(auto a : arr){
        cout << a << " " ;
    }
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> ans = NSEL(arr,n);
    for(auto a : ans){
        cout << a << " " ;
    }
    
       
    return 0;
}