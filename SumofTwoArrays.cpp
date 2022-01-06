// https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4


vector<int> reverse(vector<int> v){
    int l=0;
    int h= v.size()-1;
    
    while(l<h){
        swap(v[l++],v[h--]);
    }
     return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int i= n-1;
    int j= m-1;
    int carry =0;
    vector<int> ans;
    
//     till same min length
    while(i>=0 && j>=0){    
        int sum = a[i] + b[j] + carry;
        sum = sum%10;
        ans.push_back(sum);
        i--; j--;    
    }
//     after same length 
//     if a is bigger i should not be 0
    while(i>=0){
       int  sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;          
    }
    
//     if b is bigger j should not be 0
    while(j>=0){
      int  sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;        
    }
    
//     both  numbers added but there can be some unadded carry
      while(carry!=0){
      int  sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);            
    }
    
//     reverse the ans vector and return
    
    return reverse(ans);
    
}
