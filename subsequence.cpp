#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

vector<string> gss(string s) {
    // write your code here
    vector<string>ans;
    for (int i = 0; i < (1 << s.size()); i++) {
        string g = "", as = "";

        bitset<64>b(i);
        g = b.to_string();
        // cout<<g<<endl;
        int k = 0;
        for (int i = 64 - s.size(); k < s.size(); i++) {
            //   cout<<g[i];
            if (g[i] == '1')
                as += s[k++];
            else
                k++;
        }
        // cout<<endl;

        // int k=0;
        // for(int j = 0; j<s.size();j++){
        //     if(i&1<<j){
        //         g+=s[j];
        //     }
        //     else
        //     k++;
        // }
        ans.push_back(as);
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans) {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}






#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> gss(string s) {
    // write your code here
    if (s.size() == 0) {
        return {""};
    }
    char c = s[0];
    string ss = s.substr(1);
    vector<string>x = gss(ss);
    vector<string>ans(1 << s.size());
    int k = 0;
    for (string a : x) {
        ans[k++] = "" + a;
    }
    for (string a : x) {
        ans[k++] = c + a;
    }

    return ans;

}

int main() {
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans) {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}