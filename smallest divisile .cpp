long long getSmallestDivNum(long long n){
        // code here
        long long ans = 1 ;
        for(long long i = 1; i <= n; i++)
        {
            ans = (ans * i)/(__gcd(ans,i)); // lcm*hcf = a*b
        }
        return ans;
    }
