int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    if(B>=n)
    {
        return 1;
    }
    
    int x = 0;
    int t = 0;
    int minLights = 0;
    while(x < n)
    {
        bool flag = false;
        for(int i = x+B-1; i >= t; i--)
        {
            if(A[i] == 1)
            {
                t = i+1;
                flag = true;
                minLights ++;
                x = i + B;
                break;
            }
        }
        if(x >= n)
            return minLights;
        
        if(!flag)
            return -1;
    }
    return minLights;
}
