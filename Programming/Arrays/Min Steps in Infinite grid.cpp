#include<bits/stdc++.h>
using namespace std;
int coverPoints(vector<int> &A, vector<int> &B) {
    
    int i,j,k=0,max,may;
    for(i=1;i<A.size();i++){
        max=abs(A[i]-A[i-1]);
        may=abs(B[i]-B[i-1]);
        if(max==may){
            k+=abs(A[i]-A[i-1]);
        }
        else if(max<may){
            k+=abs(B[i]-B[i-1]);
        }
        else{
            k+=abs(A[i-1]-A[i]-j);
        }
    
    }
    return k;
    
}
