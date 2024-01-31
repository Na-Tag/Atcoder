#include<iostream>
#include<vector>
using namespace std;

int report_num(vector<vector<int> > &children, int x){
    if(children.at(x).size() == 0){
        return 1;
    }
    int count_report = 0;
    for(int i = 0; i < children.at(x).size(); i++){
        int tmp = children.at(x).at(i);
        count_report = count_report + report_num(children, tmp);
    }
    count_report++;
    return count_report;
} 

int main(){
    int N;
    cin >> N;

    vector<int> p(N);
    for(int i = 1; i < N; i++){
        cin >> p.at(i);
    }

    vector<vector<int> > children(N,vector<int>(0));
    for(int i = 1; i < N; i++){
        int parent = p.at(i);
        children.at(parent).push_back(i);
    }
    
    for(int i = 0; i < N; i++){
    cout << report_num(children, i) << endl;
    }

}