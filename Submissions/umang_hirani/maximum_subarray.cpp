class Solution {
private:
    int findSlidingMax(vector<int> &nums,int k){
        if(k == 1){
            return *max_element(nums.begin(),nums.end());
        }
        if(k==nums.size()){
            int sum = 0;
            for(int i = 0;i<nums.size();i++){
                sum+=nums[i];
            }

            return sum;
        }
        int answer = INT_MIN;
        int buffer = 0;

        for(int i = 0;i<k;i++){

            buffer+=nums[i];

        }
        answer = max(answer,buffer);
        for(int i = 1;(i+k-1)<nums.size();i++){
            buffer+= nums[i+k-1];
            buffer-=nums[i-1];
            answer = max(answer,buffer);
        }
        return answer;
    }
public:
    int maxSubArray(vector<int>& nums) {
        int answer = INT_MIN;
        for(int i = 1;i<=nums.size();i++){
            answer = max(answer,findSlidingMax(nums,i));
        }
        return answer;
    }
};
