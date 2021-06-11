int Solution::solve(vector<int> &A) {
    int n = A.size();
    int min_n = min(A[0],A[n-1]);
    int max_n = max(A[0],A[n-1]);
    int i=1;
    while(i<=(n/2))
    {   
        min_n = min(min_n, min(A[i],A[n-i-1]));
        max_n = max(max_n, max(A[i], A[n-i-1]));
        i++;
    }
    return min_n+max_n;
}
