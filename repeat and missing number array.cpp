vector<int> Solution::repeatedNumber(const vector<int> &A)
{
    long long int n = A.size();
    long long int sum_n, sum_sq_n;
    sum_n = (n*(n+1))/2;
    sum_sq_n = (n*(n+1)*(2*n + 1))/6 ;

    for(int i= 0; i<n ; i++)
    {
        sum_n -=(long long int) A[i];
        sum_sq_n -=((long long int) A[i] * (long long int) A[i]);
    }
    int a; //repeating number
    int b; //missing number
    b =(int)( (sum_n +(sum_sq_n / sum_n))/2 ); 
    a =(int)( b - sum_n);

    vector<int> res;
    res.push_back(a);
    res.push_back(b);

    return res;
}
