// https://leetcode.com/problems/single-element-in-a-sorted-array/

// https://www.codingninjas.com/codestudio/problems/unique-element-in-sorted-array_1112654?leftPanelTab=0

int uniqueElement(vector<int> arr, int n)
{	
//     int ans = 0 ;	
//     for(int i=0; i<n;i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
    
//   for(int i =0; i<n-2 ; i+=2){
//       if(arr[i]!=arr[i+1]){
//           return arr[i];
//       }
//   }
//   return arr[n-1];
    
      int high = arr.size()-1;
        int low = 0;
        int mid;
        
        //Boundary cases
        if(high==0)
            return arr[0];
        else if(arr[0]!=arr[1])
            return arr[0];
        else if(arr[high]!=arr[high-1])
            return arr[high];

        while(low<=high)
        {
            mid = low + (high-low)/2;
            //Unique element condition
            if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
                return arr[mid];
            
            if(((mid%2)==0 && arr[mid]==arr[mid+1])
               ||  ((mid%2)==1 && arr[mid]==arr[mid-1]))
                low = mid+1;
            else
                high = mid-1;
            
        }
        return -1;
        
}




