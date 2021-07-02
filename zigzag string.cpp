string Solution::convert(string A, int B) {
    
    if (B == 1)
    {
            
        return A;
    }  
 
    int len = A.length();
 
    string arr[B];
 
    int row = 0;
    bool down;

    for (int i = 0; i < len; ++i)
    {
        arr[row].push_back(A[i]);
 
        if (row == B-1)
          down = false;
 
        else if (row == 0)
          down = true;
 
        (down)? (row++): (row--);
    }
    string str = " ";
    for(int i = 0; i< B; i++)
    {
        str += arr[i];
    }
    return str;
}
