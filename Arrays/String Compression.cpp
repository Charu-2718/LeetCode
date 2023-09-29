class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n <= 1) return n; 

        int index = 0;
        char current_char = chars[0];
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (chars[i] == current_char) {
                count++;
            } else {
                chars[index++] = current_char; 
                if (count > 1) {
                    string count_str = to_string(count); 
                    for (char c : count_str) {
                        chars[index++] = c; 
                    }
                }
                current_char = chars[i]; 
                count = 1; 
            }
        }
        chars[index++] = current_char;
        if (count > 1) {
            string count_str = to_string(count);
            for (char c : count_str) {
                chars[index++] = c;
            }
        }

        return index; 
         }
};
