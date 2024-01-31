// 参照について
#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int &b = a; // bは変数aの参照

    cout << "a: " << a << endl; // aの値を出力
    cout << "b: " << b << endl; // bの参照先の値を出力(aの値である3が出力される)

    b = 4; // 参照先の値を変更(aが4になる)

    cout << "a: " << a << endl; // aの値を出力
    cout << "b: " << b << endl; // bの参照先の値を出力(aの値である4が出力される)
}
