double termOfGP(int A,int B,int N)
    {
        //Your code 
        double r =(double) B/A ; //common ratio
        if(N==1)
        {
            return A;
        }
        else if(N==2)
        {
            return B;
        }
        return A*(pow(r,N-1));
        
    }
