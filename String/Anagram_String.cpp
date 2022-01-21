/*Python Solution:-
def isAnagram(str1,str2):
        #code here
        n1 = len(str1)
        n2 = len(str2)
     
        # If length of both strings is not same, then
        # they cannot be anagram
        if n1 != n2:
            return 0
     
        # Sort both strings
        str1 = sorted(str1)
        str2 = sorted(str2)
     
        # Compare sorted strings
        for i in range(0, n1):
            if str1[i] != str2[i]:
                return 0
        return 1
s1=input()
s2=input()
if(isAnagram(s1,s2)):
    print("YES")
else:
    print("NO")*/




#include <bits/stdc++.h>  // This will work only for g++ compiler. 
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

//short hand for usual tokens
#define pb push_back
#define fi first
#define se second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

// traversal function to avoid long template definition. Now with C++11 auto alleviates the pain.
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())

//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())

using namespace std;

// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

bool areAnagram(string str1, string str2)
{
   
    int n1 = str1.length();
    int n2 = str2.length();
 
    
    if (n1 != n2)
        return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
 
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(areAnagram(s1,s2)){
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
}
    return 0;
}

