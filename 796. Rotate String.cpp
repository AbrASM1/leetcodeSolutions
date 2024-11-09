class Solution {
public:
    bool rotateString(string s, string goal) {
        int s_size = s.size();
        int goal_size = goal.size();
        char tempL;
        
        
        if (s_size == goal_size && (s_size > 0 && s_size < 101)) {
            for (int i = 0; i < s_size; i++) {
                tempL = s[0];          
                s.erase(0, 1);         
                s.push_back(tempL);   

                if (s.compare(goal) == 0) {
                    return true;      
                }
            }
        } else {
            return false; 
        }
        return false; 
    }
};