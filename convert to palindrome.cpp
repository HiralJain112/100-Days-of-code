bool isPalin(string &A, int idx){
    int l = 0, r = A.size()-1; 
    while(l<r){
        if(l==idx) l++;
        else if(r==idx) r--;
        else if(A[l] != A[r]) return false;
        else{
            l++;
            r--;
        }
    }
    return true;
}
int Solution::solve(string A) {

     int l = 0, r = A.size()-1;
    while(l<r){
        if(A[l]==A[r]){
            l++;
            r--;
        }
        else{
            if(isPalin(A,l)) return 1;
            if(isPalin(A,r)) return 1;
            return 0;
        }
    }
    
    if((int)A.size() % 2 != 0) return 1; 
    return 0;
}
