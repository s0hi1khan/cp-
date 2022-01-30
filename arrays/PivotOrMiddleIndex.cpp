// https://leetcode.com/problems/find-the-middle-index-in-array/

// https://leetcode.com/problems/find-pivot-index/




class Solution {
private:
    int Sum(vector<int> nums,int s, int e){
        int sum =0;
         for(int j=s;j<e;j++){
                sum += nums[j];
            }
        return sum;    
} 
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int i; 
        for(i=0;i<n;i++){ 
            int sumA = Sum(nums,0,i);
            int sumB = Sum(nums,i+1,n);
            if(sumA == sumB){
                return i;
            }   
        }
        return -1;
    }
};









class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int sum = 0, total = 0;
        for (auto num : nums) total += num;
 
        for (int i = 0; i < nums.size(); i++) {
            if (sum == total - sum - nums[i]) return i;
            sum += nums[i];
        }
        
        return -1;
    }
};








   int N = nums.size();
        
        for (int i = 1; i < N; ++i) {
            nums[i] += nums[i-1];
        }
        
        for (int pivot = 0; pivot < N; ++pivot) {
            int left;
            if (pivot != 0)
                left = nums[pivot-1];
            else
                left = 0;
            int right = nums[N-1] - nums[pivot];
            if (right == left)
                return pivot;
        }
            
        return -1;
