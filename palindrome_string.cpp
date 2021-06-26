int Solution::isPalindrome(string A) {
    
    int l = 0, h = A.length() - 1;
  
    for (int i = 0; i <= h; i++)
    {
            A[i] = tolower(A[i]);
    }
    while (l <= h) 
    {  
        if (!(A[l] >= 'a' && A[l] <= 'z'))
            l++;
       
        else if (!(A[h] >= 'a' && A[h] <= 'z'))
            h--;
  
        else if (A[l] == A[h])
            l++, h--;
  
        else
            return 0;
    }
  
    return 1;
}
