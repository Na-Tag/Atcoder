#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

int main()
{

    bitset<8> B("10101010");

    bitset<8> a("01100111");

    auto c = a & B;
    cout << "1: " << c << endl;
    cout << "2: " << (c << 1) << endl;
    cout << "3: " << (c << 2) << endl;
    cout << "4: " << (c << 3) << endl;
    cout << "5: " << (c << 4) << endl;

    c <<= 4;
    c ^= bitset<8>("11010000");
    cout << "6: " << c << endl;

    bitset<4> S;
    S.set(0, 1);
    cout << S << endl;

    if (S.test(3))
    {
        cout << "4th bit is 1" << endl;
    }
    else
    {
        cout << "4th bit is 0" << endl;
    }

    int x = 5;  // 0101
    int y = 10; // 1010
    // if (x & y > 0) { // &演算子よりも>演算子の優先度の方が高いので  x & (y > 0) と解釈される。}
    if ((x & y) > 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    //ビット全探索：組み合わせの前列挙をシンプルに実装

    // 3ビットのビット列をすべて列挙する。
    for (int tmp = 0; tmp < (1 << 3); tmp++)
    {
        // 1 << 3 によって２進数での1000（２の３乗）、つまり１０進数での８を得る。
        bitset<3> s(tmp);
        // bitset<3>型のsをビット列として解釈したtmpによって初期化
        // bitsetの長さの指定に変数は使用不可
        //ビット列を出力
        cout << s << endl;
    }
    //例題
    // A1、A2,・・・AnのN個の整数が与えられます。これらの整数からいくつかを選んで、
    //その総和がKとなるような選び方が存在するかを求めてください。

    //制約
    // 1<=N<=20
    // 1<=K<=100
    // 1<=Ai<=100(1<=i<=N)

    //入力
    // N K
    // A1,A2...An

    //出力
    //総和がKとなるような整数の組み合わせが存在するなら、１行にYESを、そうでなければNOを出力してください。

    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    bool ans = false;

    //全ての選び方を試して、総和がKになるものがあるかを調べる。
    for (int tmp = 0; tmp < (1 << 20); tmp++)
    {
        bitset<20> s(tmp);

        //ビット列の１のビットに対応する整数を選んだとみなして総和を求める。
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            if (s.test(i))
            {
                sum += A.at(i);
            }
        }
        if (sum == K)
        {
            ans = true;
        }
    }

    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
