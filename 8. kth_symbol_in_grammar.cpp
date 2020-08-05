// https://leetcode.com/problems/k-th-symbol-in-grammar/submissions/
int kthGrammar(int r, int k) {
        if(r==1 && k==1)
            return 0;
        int mid=pow(2,r-1)/2;
        if(k<=mid)
            return kthGrammar(r-1,k);
        else{
            return !kthGrammar(r-1,k-mid);
        } 
}
