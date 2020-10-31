int Solution::maxSubArray(const vector<int> &A) {
    int n = A.size();
    int result = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
        if (sum < A[i]) sum = A[i];
        if (result < sum) result = sum;
    }
    return result;
}

