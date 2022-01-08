// https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3253/

 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int p =0;
        int q =0;
        vector<int> temp(nums1);
        
        nums1.clear();   
        
        while(p<m && q<n){
            if(temp[p]<nums2[q]){
                nums1.push_back(temp[p++]);
            }else if(temp[p]>nums2[q]){
                nums1.push_back(nums2[q++]);
            }else if(temp[p]==nums2[q]){
                nums1.push_back(temp[p++]);
                nums1.push_back(nums2[q++]);
             }
        }
                // copy rest of elements
        while(p<m){
            nums1.push_back(temp[p++]);
        }
        while(q<n){
            nums1.push_back(nums2[q++]);
        }    
        
    }
