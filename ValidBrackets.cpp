#include<bits/stdc++.h>
using namespace std;


bool isValid(string s) {
    stack <char> st;
    for(int i =0 ;i<s.length();i++){
        char ch=s[i];
        if (ch=='(' || ch=='{' || ch=='['){
            st.push(ch);
        }
        else{
            if(!st.empty()){
            char top = st.top();
            if((s[i]==')' && top =='(' ) || (s[i]=='}'&& top =='{' ) || (s[i]==']'&& top =='[' )){
                st.pop();
            } 
            else{
                return false;
            }
            }
            else{
                return false;
            }
        
    }
    
}
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
   
   
int main() {
    string st1="{{{{{}}}}}";
    string st2="{{[()()]}}";
    string st3="{{()()())))}}";
    cout<<isValid(st1)<<endl;    
    cout<<isValid(st2)<<endl;    
    cout<<isValid(st3)<<endl;           
    return 0;
}