#include<bits/stdc++.h>

using namespace std;

int main(){
    string sr = "LalitChouhan";

    stack<char> s;

    for(int i=0;i<sr.length();i++){
        s.push(sr[i]);
    }

    string ans = "";

    while (!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    };

    cout<<"reversed string : "<<ans<<endl;

    return 0;
    
}