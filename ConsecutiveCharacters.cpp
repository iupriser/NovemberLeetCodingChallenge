// // find the length of consecutive repeative character 
// class Solution {
// public:
//     int maxPower(string s) {
//         if(s.length() == 1){
//             return 1;
//         }
        
//         int max_count=0;
//         int count=1;
//         int index=1;
        
//         while(index!= s.length()) {
//             if(s[index-1] == s[index]) {
//                 count++;
//                 index++;
//                 max_count = max(count, max_count);

//             }
//             else{
//                 max_count = max(count, max_count);
//                 count =1;
//                 index++;
//             }
//         }
//         return max_count;
//     }
// };

// // another approach 

class Solution {
public:
    int maxPower(string s) {
        int max_pow = 0, pow = 1;
        char prev = ' ';
        
        for (auto c : s){
            if (c==prev)
                pow++;
            else
                pow = 1;
            
            if (pow > max_pow)
                max_pow = pow;
            
            prev = c;
        }
        return max_pow;
    }
};

