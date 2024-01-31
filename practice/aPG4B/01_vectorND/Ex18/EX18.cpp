#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    /*
    vector<vector<char> > table(N, vector<char>(M, '-'));
    int A,B;
    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> A >> B;
            table.at(A).at(B) = 'o';

            table.at(B).at(A) = 'x';
            
        }
    }

    
    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << table.at(i).at(j);
        }
    }
    */

    vector<int> A(M),B(M);
    for (int i = 0; i < M; i++){
        cin >> A.at(i) >>B.at(i);
    }

    vector<vector<char> > table(N,vector<char> (N,'-'));

    for(int i = 0; i < M; i++){
        A.at(i)--; B.at(i)--;
        table.at(A.at(i)).at(B.at(i)) = 'o';
        
        table.at(B.at(i)).at(A.at(i)) = 'x';
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
           cout << table.at(i).at(j); 
        
        if(j == N-1){
            cout << endl;
        }else{
            cout<<" ";
        }
        }
    }
}