/*
Given an integer array A, find if an integer p exists in the array such that the number of integers greater than p in the array equals to p.
*/
int Solution::solve(vector<int> &A) 
{
    int n = A.size();
    sort(A.begin(),A.end());
    if(A[n-1] == 0)
    {
        return 1;
    }
    for(int i = 0; i<n-1 ; i++)
    {
        int j = n-i-1;
        if(A[i] != A[i+1])
        {
            if(A[i] == j)
            {
                return 1;
            }
        }
    }
    return -1;
}
