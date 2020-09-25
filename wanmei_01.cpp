//
// Created by xzy on 2020/9/24.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <limits.h>
#include <stack>
#include <map>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <list>

using namespace std;
/*
int main(){
    string s;
    while(cin>>s) {
        vector<pair<char,int>> count;
        for (int i = 0; i < s.size(); i++) {
            int is_find=0;
            for(int j=0;j<count.size();j++){
                if(count[j].first==s[i]) {
                    count[j].second++;
                    is_find=1;
                }
            }
            if(is_find==0)
                count.push_back(make_pair(s[i],1));
        }
        for(int i=0;i<count.size();i++){
            if(count[i].second==1){
                cout<<count[i].first;
            }
        }
        cout<<endl;
    }
    return 0;
}
 */
/*
int main(){
    string s;
    while(cin>>s) {
        unordered_map<char, pair<int,int>> m;
        for (int i = 0; i < s.size(); i++) {
            if (m.count(s[i]) == 0) {
                m[s[i]].first = 1;
                m[s[i]].second = i;
            } else {
                m[s[i]].first++;
            }
        }
        vector<pair<char,int>> ans;
        for (auto iter = m.begin(); iter != m.end(); iter++) {
            if (iter->second.first == 1) {
                if(ans.empty()) {
                    ans.insert(ans.begin(), make_pair(iter->first,iter->second.second));
                }
                else{
                    if(ans.back().second<iter->second.second){
                        ans.push_back(make_pair(iter->first,iter->second.second));
                    }
                    else {
                        if(ans[0].second>iter->second.second)
                            ans.insert(ans.begin(), make_pair(iter->first, iter->second.second));

                        else for(int i=0;i<ans.size();i++){
                            if(ans[i].second<iter->second.second) {

                                ans.insert(ans.begin() + i, make_pair(iter->first, iter->second.second));
                                break;
                            }
                        }

                    }
                }
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i].first;
        }
        cout << endl;
    }
    return 0;
}
*/


/*
int pairNum( vector<vector<int>> &a, vector<vector<int>> &b,int count) {
    int i=0;int j=0;
    int ans=0;

    while(i<a.size() && j<b.size()){
        if(a[i][0]>b[j][0]) {

            ans += count * b[i][1];
            j++;
        }
        else{
            count-=a[i][1];
            i++;
        }
    }
    return ans;
}

static bool cmp(vector<int> &a,vector<int> &b){
    if(a[0]==b[0])
        return a[1]<b[1];
    return a[0]<b[0];
}
int main() {
    int res;
    int la,lb;
    cin>>la>>lb;
    vector<vector<int>> a(la,vector<int> (2));
    vector<vector<int>> b(lb,vector<int> (2));
    int m,n;int count=0;
    for(int i=0;i<la;i++){
        cin>>m>>n;
        a[i][0]=m;
        a[i][1]=n;
        count+=a[i][1];
    }

    for(int i=0;i<lb;i++){
        cin>>m>>n;
        b[i][0]=m;
        b[i][1]=n;
    }

    sort(a.begin(),a.end(),cmp);
    sort(b.begin(),b.end(),cmp);

    res = pairNum(a,b,count);
    cout << res << endl;

    return 0;

}*/