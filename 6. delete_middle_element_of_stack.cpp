void delete_mid(stack <int> &s,int n){
    if(s.size()==n/2){
        s.pop();
        return;
    }
    int val=s.top();
    s.pop();
    delete_mid(s,n);
    s.push(val);
}
stack <int> deleteMid(stack <int> s,int size){
    if(size==1)
        return s;
    if(size%2==0)
        delete_mid(s,size);
    else
        delete_mid(s,size+1);
    return s;
}
