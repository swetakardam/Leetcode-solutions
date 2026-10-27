class Solution {
public:
    bool halvesAreAlike(string s) {
        int a =0; int b =0 ;
        int n =s.size();

        for(int i =0 ; i<n/2;i++){
            char c = tolower(s[i]);

            if(c == 'a'||c =='e'||c =='i'||c =='o'||c=='u')
                a++;
        }
             for(int i =n/2 ; i<n;i++){
            char c = tolower(s[i]);

            if(c == 'a'||c =='e'||c =='i'||c =='o'||c=='u')
                b++;
             }
            return a ==b;
    }
};