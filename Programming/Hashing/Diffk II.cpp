//By Prajawal Kumar Pandey
//Oct 31 2020

int Solution::diffPossible(const vector<int> &A, int B) {
    
    unordered_set<int> m;
    if(A.size()<2)
    return 0;
    
    for(int i=0;i<A.size();i++){
        if(m.count((A[i]-B))||m.count(B+A[i])){
            return 1;
        }else
        m.insert(A[i]);
    }
    return 0;
}
