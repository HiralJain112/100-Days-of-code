bool compare(Interval i1, Interval i2)
 {
     return i1.start < i2.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    sort(A.begin(),A.end(),compare);
    vector<Interval> result;
    for(int i = 0 ; i<A.size()-1;i++)
    {
        if(A[i].end >= A[i+1].start)
        {
            A[i+1].start = A[i].start;
            A[i+1].end = max(A[i].end, A[i+1].end);
        }
        else
        {
            result.push_back(A[i]);
        }
    }
    result.push_back(A[A.size()-1]);
    return result;
}
