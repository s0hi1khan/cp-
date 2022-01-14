//  https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3251/


class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max = INT_MIN;
        int ind =0;
        for(int i =0;i<arr.size();i++){
            if(arr[i]>max){
                max = arr[i];
                ind = i;
            }
        }
        // cout<<ind;
        if(ind==0 || ind==arr.size()-1){
            return false;
        }
        bool mount = true;
        for(int i=0;i<ind;i++){
            if(arr[i]>=arr[i+1]){
                mount =  false;
            }
        }
        for(int i =ind;i<arr.size()-1;i++){
            if(arr[i]<=arr[i+1]){
                mount = false;
            }
        }
        
        return mount;
    }
};
