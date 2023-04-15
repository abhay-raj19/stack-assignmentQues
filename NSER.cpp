#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

vector <int > NSER(int arr[],int n){
    stack <int> s;
    vector <int> v;

    for (int i =n-1; i >=0 ;i--){
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
    reverse(v.begin(),v.end());
    
    return v;
}
   
int main() {
    int arr[]= {7,8,4,5,6,1,2,3,10};
    for(auto a : arr){
        cout << a << " " ;
    }
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> ans = NSER(arr,n);
    for(auto a : ans){
        cout << a << " " ;
    }
    
       
    return 0;
}