void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    map<int,bool>row,col;
    
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < A[0].size(); j++)
        {
            if(A[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
            
        }
    }
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < A[0].size(); j++)
        {
           if(row[i]==true || col[j]==true)
           {
               A[i][j] = 0;
           }
        }
    }
    
}
