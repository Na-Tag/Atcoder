#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<map>

using namespace std;
/*
int mode(map<int, int> &cunt){
    int max = 0;
    int num_max;
    for(int i = 0; i < cunt.size() ;i++){
        int size = cunt.at(i);
        if(max < size){
            max = cunt.at(i);
            num_max = cunt.at(i);
        }
    }
}
*/

int main(){
    int n; 
    cin >> n;

    vector<int> num(n);
    vector<int> key;

    for (int i = 0; i < n; i++){
        cin >> num.at(i);
    }

    map<int, int> cunt;

    for(int i = 0; i < num.size(); i++){
        int c = num.at(i);
        if(cunt.count(c)){
            cunt.at(c)++;
        }else{
            cunt[c] = 1;
            key.push_back(c);
        }
    }

    int max = 0;
    int num_max = 0;
    for(int i = 0; i < key.size() ;i++){
        int k = key.at(i);
        if(max < cunt.at(k)){
            max = cunt.at(k);
            num_max = k;
        }
    }

    cout << num_max << " " << max << endl;
    
}