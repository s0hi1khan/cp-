//https://leetcode.com/problems/rotate-array/

   void rotate(vector<int>& nums, int k) {
   
   //caused TLE at bigger inputs
       // int n = nums.size();
       // for(int i=1;i<=k;i++){
       //     
       //     int temp = nums[n-1];
       //     for(int j=n-1;j>=1;j--){
        //        nums[j]=nums[j-1];
       //     }
       //     nums[0] = temp;
       //     
       // }
       
       
       
       //rotate ith term cyclic by k terms
       // arr[(i+k)%n] = arr[i];
       
          int n = nums.size();
        vector<int> temp(n);
        
        for(int i=0; i<n;i++){
            temp[(i+k)%n] = nums[i];
        }
        
  //         copy temp to num;
        nums = temp;
        
    }
