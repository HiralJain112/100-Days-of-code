int Solution::solve(string A) {
    
    int bal = 0;
    int ans = 0;
 
    for (int i = 0; i < A.length(); ++i) 
    {
        if( A[i] == '(' )
        {
            bal += 1;
        }
        else
        {
            bal -= 1;
        } 
       
        if (bal == -1) {
            ans += 1;
            bal += 1;
        }
    }
 
    return bal + ans;
}
