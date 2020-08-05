#include <bits/stdc++.h>
using namespace std;

void reverse(stack <int> &s){
    if(s.size()==0)
        return;
    
    int val=s.top();
    s.pop();
    reverse(s);
    s.push(val);
}
int main() {
    int n;
    cin>>n;
    stack <int> s;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        s.push(x);
    }
    reverse(s);
    while(!s.empty()){
        int t=s.top();
        s.pop();
        cout<<t<<" ";
    }
    cout<<endl;
	return 0;
}
