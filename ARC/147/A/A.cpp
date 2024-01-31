#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/*
int max(vector<int>vec){
    int max = 0;
    int n = vec.size();
    int no = 0;
    for(int i = 0; i < n; i++){
        if(vec(i) > max){
            max = vec(i);
            no = i;
        }
    }
    vector<int> vec = {max,no};
}

int min(vector<int>vec){
    int min = 0;
    int n = vec.size();
    int no = 0;
    for(int i = 0; i < n; i++){
        if(vec(i) < min){
            min = vec(i);
            no = i;
        }
    }
    vector<int> vec = {min, no};
}

int main(){
    int n;
    cin << n;
    vector<int> vec(n);

    for(int i = 0; i < n; i++){
        int m;
        cin << m;
        vec(i) = m;
    }

    if(vec.size() != 1){
        int k = vec.size();
    }


}
*/

priority_queue<int, vector<int>> q;
int main()
{
    int n, minn = 0x3f3f3f3f, maxn = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
        minn = min(minn, x);
    }

    int cnt = 0;
    while (q.size() > 1)
    {
        int t = q.top();
        q.pop();
        int p = t % minn;

        if (p < minn && p != 0)
            minn = p;
        if (p != 0)
            q.push(p);
        cnt++;
    }
    cout << cnt;

    return 0;
}