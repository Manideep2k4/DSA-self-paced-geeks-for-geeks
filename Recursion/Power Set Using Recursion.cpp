vector <string> powerSet(string s)
{
   //Your code here
    int n = s.size();
    int total = 1 << n; // 2^n
    vector<string> ans;
    
    for (int i = 0; i < total; i++) {
        string temp = "";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                temp += s[j];
            }
        }
        ans.push_back(temp);
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}

