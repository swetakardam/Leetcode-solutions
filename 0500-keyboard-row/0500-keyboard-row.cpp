class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

         for(string word :words){
     int r1 =0 ,r2 =0 , r3 = 0;

     for(char c : word){
        c =tolower(c);

        if(row1.find(c)!=-1)
        r1++;

        else if(row2.find(c)!= -1)
        r2++;
    else
        r3++;
     }  

     if(r1 ==word.size()||r2 ==word.size()||r3 ==word.size()){
        ans.push_back(word);
     }          

         }
         return ans;
    }
};