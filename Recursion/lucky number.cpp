class Solution{
public:
    bool isLucky(int n) {
     return isluck(n,2);
     
    }
 public:
 bool isluck(int n,int counter)
 {
     if(counter>n)
    return true;
    else if(n%counter==0)
    return false;
    
    int next=(n-(n/counter));
    
    return isluck(next,counter+1);
 }
};


