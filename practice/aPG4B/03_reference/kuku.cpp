#include<iostream>
#include<vector>
using namespace std;



void saiten(vector<vector<int> > &A,int &correct, int &miss) {
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            int ans = (i+1)* (j+1);
            if(ans != A.at(i).at(j)){
                A.at(i).at(j) = ans;
                miss++;
            }else{
                correct++;
            }
        }
    }
}


int main(){
    vector<vector<int> > touan(9, vector<int>(9));

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> touan.at(i).at(j);
        }
    }

    int correct = 0;
    int miss = 0;

    saiten(touan,correct,miss);

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << touan.at(i).at(j);
            if( j == 8){
                cout << endl;
            }
            else{
                cout << ' ';
            }

        }
    }
    cout << correct << endl << miss << endl;

}