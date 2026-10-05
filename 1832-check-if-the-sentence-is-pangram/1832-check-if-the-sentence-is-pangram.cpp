class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool alphabet[26] = {false};
        for(int i = 0 ; i <sentence.length();i++){
            int index = sentence[i] -'a';
            alphabet[index] = true;
        }
        for(int i = 0 ; i <26;i++){
        if(alphabet[i] == false){
            return false;
        }
        }
        return true;
    }
};