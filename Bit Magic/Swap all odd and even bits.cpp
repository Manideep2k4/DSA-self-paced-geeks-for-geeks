class Solution{
    public:
    int swapBits(int n){
        int evenBits = n & 0xAAAAAAAA; 
        int oddBits = n & 0x55555555; 
        
        evenBits = evenBits >> 1; 
        oddBits = oddBits << 1; 
        return evenBits | oddBits; 
    }
};
