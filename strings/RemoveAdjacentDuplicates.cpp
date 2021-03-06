// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

//"cemfawsnxdyxslqpkeiydmurwfesnjlaasfaogtryfueykgvxbizcarrybwfcikjufxjqbfutgkuyllwiepqbzhhbaxxzbygigiilfbxklfmhlintlowpwkoconspxoaqjzwjhpzqvdotdcskgtjypnwpxppwypvkmbhjqkntfadelngqqoefhjosklizqlfvmuywupspirpegrodtevrkginauavkpzrrkksjqfazfwdupprbpojetespkprbwsqmhfesediedkgjrncrvvoaspvjltifmhmiravocqyastnjjaeobdxtmpnnuizuciyjtkyvbtebnhtkfziwtadfegwzzfeuhcmpdtsjgcwzjgtgubmlnvkfnjyogwsnsdccdfixluczfrpzhlokyavyzniorgmtjgwtqkrkmrmtqqmdvugdettudqbbnhbxxzytqkxaeajkiemguaewfreoeclsgbsqzljitopggidkrljjhhdooinewmreaacivhximvwznmnvpxfonypktbuwmmhbijpnmcvxhndxmiozfbyyyawogacubixrkiqzjkdiqrpdlidasjhmlgwuivbmczipiooiuntsuemxijczdeoavarpmepynhqbvqpaivptnkdrmukripmmiprxlsxxebaululyqcollmxttzdxbsclhwntcflmozzuoinacrzjvmlzncauuzxezcjxayxjhlscemfawsnxdyxslqpkeiydmurwfesnjlaasfaogtryfueykgvxbizcarrybwfcikjufxjqbfutgkuyllwiepqbzhhbaxxzbygigiilfbxklfmhlintlowpwkoconspxoaqjzwjhpzqvdotdcskgtjypnwpxppwypvkmbhjqkntfadelngqqoefhjosklizqlfvmuywupspirpegrodtevrkginauavkpzrrkksjqfazfwdupprbpojetespkprbwsqmhfesediedkgjrncrvvoaspvjltifmhmiravocqyastnjjaeobdxtmpnnuizuciyjtkyvbtebnhtkfziwtadfegwzzfeuhcmpdtsjgcwzjgtgubmlnvkfnjyogwsnsdccdfixluczfrpzhlokyavyzniorgmtjgwtqkrkmrmtqqmdvugdettudqbbnhbxxzytqkxaeajkiemguaewfreoeclsgbsqzljitopggidkrljjhhdooinewmreaacivhximvwznmnvpxfonypktbuwmmhbijpnmcvxhndxmiozfbyyyawogacubixrkiqzjkdiqrpdlidasjhmlgwuivbmczipiooiuntsuemxijczdeoavarpmepynhqbvqpaivptnkdrmukripmmiprxlsxxebaululyqcollmxttzdxbsclhwntcflmozzuoinacrzjvmlzncauuzxezcjxayxjhls"

class Solution {
private:   
bool checkDup(string s){
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){return 1;}
        }
        return 0;
    }
public:
    string removeDuplicates(string s) {
            
        int n = s.length();
        int i=0;
        while(i<n-1){
            
            if(s[i]==s[i+1]){
                s.erase(i,2);
                i=-1;
                n=n-2;
            }
           
            i++;
            if(!checkDup(s)){
                return s;
            }
           
        }
        
     return s;
    }
};
