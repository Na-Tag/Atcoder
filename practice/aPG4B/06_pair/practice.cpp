#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin >>N;

    using pii = pair<int,int>;
    
    vector<pii> p;

    for(int i = 0; i < N;i++){
        int a,b;
        cin >> a >> b;
        p.push_back(make_pair(b,a));
    }

    sort(p.begin(), p.end());

    for(int i = 0; i < p.size();i++){
        pii t = p.at(i);
        int a, b;
        tie(a,b) = t;
        cout << b << " " << a << endl;
    }
}

