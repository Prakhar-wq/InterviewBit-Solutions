int Solution::gcd(int A, int B) {
    
    if(A == 0)
        return B;
    else if(B == 0)
        return A;
    
    if(A<B){
        swap(A,B);
    }
    
    if(A%B == 0){
        return B;
    }
    return gcd(B,A%B);
}
