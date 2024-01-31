#include<iostream>
#include<vector>
using namespace std;

/*
1からnまで加算ーーーーーーーーーー
int sum(int n){
    if(n==0) {
        return 0;
    }

    int s = sum (n-1);
    return s + n;
}

int main(){
   cout << sum(2) << endl;
   cout << sum(3) << endl;
   cout << sum(10) << endl;
}

aからbまで加算ーーーーーーー
int sum_range (int a, int b){
    if(b == a){
        return a;
    }

    return sum_range(a, b - 1) + b;
}

int main(){
    cout << sum_range(5, 10) << endl;
}

配列の全加算ーーーーーーーー
int array_sum(vector<int> &data, int i = 0){
    if(i ==  data.size()){
        return 0;
    }
    
    return data.at(i) + array_sum(data, i + 1);
}
int main(){
    vector<int> vec(60, 1);
cout << array_sum(vec) << endl;
}
ーーーーーーーーーーーーーーー

素数判定~失敗ーーーーーーーーー
bool is_prime(int n, int i){
    if (i == 1){
        return isprime;
    }
    if(n % i == 0){
        isprime = false;
    }
    is_prime(n, isprime , i-1);
    return isprime;
}

int main(){
    bool isp = true;
    cout << is_prime(99, isp,98) << endl;
}

素数判定成功例ーーーーーーーーーーーー
bool has_divisor(int N, int i){
    if ( i == N ){
        return false;
    }
    if ( N % i == 0){
        return true;
    }

    return has_divisor(N , i + 1);
}

bool is_prime(int N){

    if (N == 1 ){
        return false;
    }else{
        return !has_divisor(N , 2);
    }

}

int main(){
    cout << is_prime(88) << endl;
    cout << is_prime(71) << endl;
}
*/


vector<int> reverse_array(vector<int> &A, int i = 0){
    if(int i = A.size()){
        vector<int> zero(0);
        return zero;
    } 

    vector<int> temp = reverse_array(A, i + 1);
    temp.push_back(A.at(i));
    return temp;
}

int main(){
    vector<int> a = {1,3,4,5,6};
    reverse_array(a);
    for(int i = 0; i < a.size(); i++){
        cout << a.at(i)<<endl;
    }
    
}
