int Solution::solve(vector<int> &A, int B) {

     int curr_sum = 0, max_sum = 0;
     for(int i = 0; i<B; i++)
     {
         curr_sum += A[i];
     }
     max_sum = curr_sum;
     
     int j = A.size()-1;
     for(int i = B-1; i>=0; i--)
     {
         curr_sum += A[j] - A[i];
         max_sum = max(curr_sum, max_sum);
         j--;
     }
    return max_sum;
}
