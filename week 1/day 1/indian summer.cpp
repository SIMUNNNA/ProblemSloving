#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int cnt;
    map<pair<string,string>,bool> mp;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[{a,b}] = true;
    }

   cout<<mp.size()<<endl;

}
