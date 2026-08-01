class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1, r = *max_element(piles.begin(),piles.end());
        int res = r;
        while(l <= r){
            long long k = (l+r)/2, totalTime = 0;
            for(int pile: piles){
                totalTime += ((pile + k - 1)/k);
            }
            if(totalTime <= h){
                res = k;
                r = k - 1;
            }
            else{
                l = k + 1;
            }
        }
        return res;
    }
};
