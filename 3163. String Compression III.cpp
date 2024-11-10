
class Solution {
public:
    string compressedString(string word) {
        string comp="";
        int i=0,temp=1;
        int word_size=word.size();
        while(i<word_size&&((i+temp)<=word_size)){
            if((word[i] != word[i+temp])||(temp==9)){
            
            
            comp +=to_string(temp) + word[i];
            i+=temp; 
            temp=1;

            }else if((word[i] == word[i+temp])){
            temp++;
            }
            

        }
        return comp;
    }
};