//By Prajawal Kumar Pandey
//Oct 31 2020

int Solution::isValidSudoku(const vector<string> &A) {
    
    vector<unordered_set<int> > r(9),c(9),b(9);
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(A[i][j]!='.'){
                if(r[i].count(A[i][j])==0)r[i].insert(A[i][j]);
                else return 0;
            }
            if(A[j][i]!='.'){
                if(c[i].count(A[j][i])==0)c[i].insert(A[j][i]);
                else return 0;
            }
            if(A[i][j]!='.'){
                int n=(i/3)*3 + (j/3);
                if(b[n].count(A[i][j])==0)b[n].insert(A[i][j]);
                else return 0;
            }
        }
    }
    return 1;
}
