/*
    The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...
1 is read off as one 1 or 11.

11 is read off as two 1s or 21.

21 is read off as one 2, then one 1 or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

*/
string Solution::countAndSay(int A) 
{
    if (A == 1)      
        return "1";
    if (A == 2) 
        return "11";

    string str = "11"; 
    for (int i = 3; i<=A; i++)
    {
        str += '$';
        int len = str.length();
 
        int count = 1; 
        string  ith = ""; 
 
        for (int j = 1; j < len; j++)
        {
            if (str[j] != str[j-1])
            {
                ith += count + '0';
 
                ith += str[j-1];
 
                count = 1;
            }
 
            else count++;
        }
 
        str = ith;
    }
 
    return str;
}
