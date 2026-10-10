class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
    
    int sd =0 ; 
    int db = 0;
    for(int i = 0 ; i <nums.size() ; i ++ ){
        if(nums[i]<10){
            sd += nums[i];
        }else{
            db += nums[i];
        }
    }
    return sd!= db;
    }
};