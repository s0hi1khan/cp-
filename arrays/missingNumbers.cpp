  
// https://www.hackerrank.com/challenges/missing-numbers/problem?isFullScreen=true


vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
      int i =0;
    int j =0;
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    
    vector<int>::iterator it;
    it = brr.begin();
   // brr.erase(it);
 
    
    while(i<arr.size() && j<brr.size()){
        if(arr[i]==brr[j]){
            i++;
            brr.erase(it + j);
        }else{
            j++;
        }
    }
    sort(brr.begin(),brr.end());
    return brr;
  
}
