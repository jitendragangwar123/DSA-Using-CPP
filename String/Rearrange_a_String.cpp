#include<bits/stdc++.h>
using namespace std;
class Solution{
    
public:
string arrangeString(string str)
    {
        //code here.
        vector<char>s;
        int sum=0;
        for(int i=0;i<str.length();i++){
            if(str[i]>=65 && str[i]<=90){
                s.push_back(str[i]);
            }
            else{
                sum+=str[i]-'0';
            }
        }
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<sum;
    }
};

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.arrangeString(s)<<endl;
        
    }
        
    return 0;
}
