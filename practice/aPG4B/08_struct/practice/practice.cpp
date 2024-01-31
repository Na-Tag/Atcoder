#include<iostream>
#include<utility>

using namespace std;
/*
int main(){
    struct f{
        int x;
        string y;

        //コンストラクタは構造体が作られる時に発動する。初期化などができる。
        f() {
            cout << "This is constructor" << endl;
        }

        void print(){
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
    };
    f p;
    f q;
    p.x = 12345;
    q.x = 678910;
    p.y = "Hello World";
    q.y = "こんにちは";

    p.print();
    q.print();

}


int main(){
    struct NumToString {
        int length;
        string s;

        NumToString(int num){
            cout << "constractor called" << endl;

            s = to_string(num);
            length = s.size();
        }
    };

    NumToString bit(0430797);
    cout << "s = " << bit.s << endl;
    cout << "length = " << bit.length << endl;
}

struct Main{
        int x;
        string y;

        Main(int i){
            x = i;
        }
        Main(string s){
            y = s;
        }
        Main(int i, string s){
            x = i;
            y = s;
        }

        Main (const Main &old){
            x = old.add(old.x);
            y = old.sadd(old.y);
        }

        int add(int i)const{
            i++;
            return i;
        }

        string sadd(string s)const{
            s = s + "desu";
            return s;
        }
};

int main(){
    Main p(12345);
    p.y = "Hello World";
    cout << "x = " << p.x << endl << "y = " << p.y << endl;
    p.add(p.x);
    p.sadd(p.y);
    cout << "x = " << p.x << endl << "y = " << p.y << endl;
    Main q(p);
    cout << "x = " << p.x << endl << "y = " << p.y << endl;
    cout << "x = " << q.x << endl << "y = " << q.y << endl;


}
*/
bool operator<(pair<int, int> l, pair<int, int> r){
    if(l.second != r.second){
        return l.second < r.second;
    }else{
        return l.first < r.first;
    }
}

bool operator>(pair<int, int> l, pair<int, int> r){return r < l}
bool operator<=(pair<int, int> l, pair<int, int> r){return !(r < l)}
bool operator>=(pair<int, int> l, pair<int, int> r){return !(r > l)}

int main(){
    pair<int, int> i = {1234,1456};
    pair<int, int> j = {1234,56564};

    cout << "i < j = " << (i < j) << endl << "j < i = " << (j < i)<< endl;

}