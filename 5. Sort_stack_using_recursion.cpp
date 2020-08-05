#include <bits/stdc++.h>
using namespace std;
void insert(stack <int> &s,int temp){
    if(s.empty() || s.top()>=temp){
        s.push(temp);
        return ;
    }
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}
void sort(stack <int> &s){
    if(s.size()==1)
        return;
    
    int temp=s.top();
    s.pop();
    sort(s);
    insert(s,temp);
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
    sort(s);
    while(!s.empty()){
        int t=s.top();
        s.pop();
        cout<<t<<" ";
    }
    cout<<endl;
	return 0;
}
