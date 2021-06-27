int Solution::lengthOfLastWord(const string A) {
    
    int count = 0;
    int last = A.length()-1;
    for(int i = last; i>=0; i--){
        if (isspace(A[i])) {
            if(isalpha(A[i+1])) break;
            else continue;
        }
        else count++;
    }
    return count;
}
