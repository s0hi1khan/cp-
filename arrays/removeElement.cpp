//   https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3247/


  int removeElement(vector<int>& nums, int val) {
        
       int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
    }
