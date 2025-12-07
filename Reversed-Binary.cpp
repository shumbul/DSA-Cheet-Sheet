int reversedBinary(int x) {
    int rev = 0;
    while(x>0){
        rev = (rev<<1) | (x&1); // appending lowest bit forward
        x>>=1; // move to next bit
    }
    return rev;
}
