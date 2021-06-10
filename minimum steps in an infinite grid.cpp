int Solution::coverPoints(vector<int> &A, vector<int> &B) {
   int minSteps = 0;
   for(int i=1;i<A.size();i++)
       minSteps += max( abs(A[i-1]-A[i]), abs(B[i-1]-B[i]) );
   return minSteps;
}
