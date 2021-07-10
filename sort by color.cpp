int Solution::solve(vector<int> &A, int B) {
    int count0 = 0;
    int l = 0;
    int max_len = 0;
    int n = A.size();
 
   
    for (int i = 0; i < n; i++) {
        if (A[i] == 0)
            count0++;
 
        while (count0 > B) {
            if (A[l] == 0)
                count0--;
            l++;
        }
 
        max_len = max(max_len, i - l + 1);
    }
 
    return max_len;
}
