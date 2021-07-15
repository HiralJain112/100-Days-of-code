int numSetBits(unsigned int A) {
   
    unsigned int count = 0;
    while(A)
    {
        count += A & 1;
        A = A>>1; 
    }
    return count;
}
