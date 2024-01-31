#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, S;
    cin >> N >> S;
    int count = 0;
    vector<int> a(N),p(N);
    for (int i = 0; i < N;i++){
        cin >> a.at(i);
    }
    for (int i = 0; i < N;i++){
        cin >> p.at(i);
    }
    for(int i = 0; i < N;i++){
        for(int j = 0; j < N; j++){
            if(a.at(i)+p.at(j) == S){
                count++;
            } 
        }
    }

    cout<<count<<endl;
}