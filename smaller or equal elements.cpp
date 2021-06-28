int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int low = 0, high = n-1;
    int mid;
    while(low <= high)
    {
         mid = (low + high)/2 ;

         if(A[mid] == B)
         {
             while((mid+1 < n)&&(A[mid+1] == B))
             {
                 mid++;
             }
             break;
         }
         else if(A[mid] < B)
         {
            low = mid+1;
         }
         else
         {
            high = mid-1;
         }
    }
    if(low > high)
    {
        return low;
    }
    return mid+1 ;    
}
