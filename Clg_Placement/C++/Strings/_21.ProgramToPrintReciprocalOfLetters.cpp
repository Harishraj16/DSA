class Solution
{
public:
    string reciprocalString(string S)
    {
        for(char &c: S){
            if(isupper(c)){
                c = 'A'+('Z'-c);
            }
            else if(islower(c)){
                c = 'a'+('z'-c);
            }
        }
        return S;
    }
};
