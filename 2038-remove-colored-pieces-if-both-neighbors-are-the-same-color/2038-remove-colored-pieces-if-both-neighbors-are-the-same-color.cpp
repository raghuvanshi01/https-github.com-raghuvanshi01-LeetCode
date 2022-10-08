class Solution {
public:
    bool winnerOfGame(string colors) {
     int a=0;
        int b=0;
        for(int i=1;i<colors.size()-1;i++)
        {
            if(colors[i]=='A')
            {
                if(colors[i-1]==colors[i] && colors[i]==colors[i+1])
                {
                    a++;
                }
            }
            else if(colors[i]=='B')
            {
                if(colors[i-1]==colors[i] && colors[i]==colors[i+1])
                {
                    b++;
                }
                
            }
        }
        if(a>b)
        {
            return true;
        }
        return false;
    }
};