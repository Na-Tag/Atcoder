#include<iostream>
#include<vector>
using namespace std;

int complete_time(vector<vector<int> > &children, int x){
    int chsi = children.at(x).size();
    if (chsi == 0){
        return 0;
    }
    int Maxcount = 0;
    for(int i = 0; i < chsi;i++){
        int tmp = children.at(x).at(i);
        int tmp2 = complete_time(children,tmp);
        Maxcount = max(Maxcount,tmp2+1);
    }
    return Maxcount;

}

int main() {
  int N;
  cin >> N;
 
  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }
 
  // 組織の関係から2次元配列を作る(理解しなくてもよい)
  vector<vector<int> > children(N);  // ある組織の子組織の番号一覧  // N×0の二次元配列
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }
 
  // 0番の組織の元に報告書が揃う時刻を求める
  cout << complete_time(children, 0) << endl;
}