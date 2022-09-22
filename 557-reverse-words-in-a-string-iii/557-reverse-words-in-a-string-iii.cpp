class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        int a;
        while(j<s.length()){
                while(s[j]!=' ' && j<s.length()){
                    j++;
                }
          //  cout<<j<<endl;
            int a=j-1;
            while(i<a){
               swap(s[i],s[a]);
                i++;
                a--;
            }
             j++;
            i=j;
        }
           
        return s;
    }
};