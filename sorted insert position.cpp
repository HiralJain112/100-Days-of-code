int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
    int low = 0 , high = n-1;
    int mid;
    while(low <= high)
    {
        mid = (low + high)/2 ;
        if(A[mid] == B)
        {
            break;
        }
        else if(A[mid] < B)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(A[mid] < B)
    {
        return mid+1;
    }
   
    return mid;
}
