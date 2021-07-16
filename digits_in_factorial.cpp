int digitsInFactorial(int N)
    {
        // code here
        if(N<=1)
        {
            return N;
        }
        
        double count_digits = 0;
        for(int i = 2; i<=N; i++)
        {
            count_digits += log10(i);
        }
        return floor(count_digits) + 1;
    }
