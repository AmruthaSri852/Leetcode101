// 1209. Remove All Adjacent Duplicates in String II

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(st.size()){
                char a = st.top().first;
                int b = st.top().second;
                if(s[i] == a){
                    if(b+1 == k){
                        while(b--){
                            st.pop();
                        }
                    }
                    else{
                        st.push({a, b+1});
                    }
                }
                else{
                    st.push({s[i], 1});
                }
            }
            else{
                st.push({s[i], 1});
            }
        }
        string ans = "";
        while(st.size()){
            ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Input: s = "abcd", k = 2
// Output: "abcd"

// Input: s = "deeedbbcccbdaa", k = 3
// Output: "aa"

// Input: s = "pbbcggttciiippooaais", k = 2
// Output: "ps"
