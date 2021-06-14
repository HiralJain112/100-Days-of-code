int Solution::maxSubArray(const vector<int> &A)
{
    int local_max_sum = 0;
    int global_max_sum = INT_MIN; 
    for (auto &x : A)
    {
        local_max_sum = x + local_max_sum;
        local_max_sum = max(x,local_max_sum); 
        if(local_max_sum > global_max_sum)
            global_max_sum = local_max_sum;
    }

    return global_max_sum; 

}
