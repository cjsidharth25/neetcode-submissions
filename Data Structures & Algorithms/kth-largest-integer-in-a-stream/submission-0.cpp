class KthLargest {
private:
    priority_queue<int> pq;
    int k_limit;

public:
    KthLargest(int k, vector<int>& nums) {
        k_limit = k;
        for(int i = 0; i < nums.size(); i++){
            pq.push(nums[i]);
        }
    }
    
    int add(int val) {
        int k = k_limit;
        pq.push(val);
        vector<int> tmp;
        int a = 0;
        while(a < k-1){
            int x = pq.top();
            tmp.push_back(x);
            pq.pop();
            a++;
        }
        int y = pq.top();
        for(int i = 0; i < tmp.size(); i++){
            pq.push(tmp[i]);
        }
        return y;
    }
};
