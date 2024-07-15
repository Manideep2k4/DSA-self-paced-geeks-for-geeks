 
class Solution{
    public:
    int maxAND(int arr[], int N){
        int res = 0;
        for(int i = 30; i >= 0; i--){
            int prefix = res | (1 << i);
            int count = 0;
            for(int j = 0; j < N; j++){
                if((arr[j] & prefix) == prefix){
                    count++;
                }
            }
            if(count >= 2){
                res = prefix;
            }
        }
        return res;
    }
};	 
