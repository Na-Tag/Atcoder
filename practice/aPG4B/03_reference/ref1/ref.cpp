#include<iostream>
#include<vector>
using namespace std;
/*
int main(){
    int a = 3;
    int &b = a;

    cout << "b:" << b << endl;

    int d;
    int &f = d;

    d = 1;
    cout << "f:"<<f << endl;

    vector<char> ch(3, '-');

    vector<char> &w = ch;

    cout << w.at(0)<< endl;
}
*/

/*
void min_and_max(int a, int b, int c ,int &minimum, int &maximum){
    minimum = min(a, min(b,c));
    maximum = max(a, max(b,c));
}

int main(){
    int minimum, maximum;
    min_and_max(3,1,5, minimum, maximum);
    cout << "minimum:"<< minimum << endl;
    cout << "maximum:"<< maximum << endl;
}
*/
/*
int sum100(vector<int> &a){

    int sum = 0;
    
    for (int i = 0; i <100; i++){
        sum += a.at(i);
    }

    return sum;
}

int main(){
    vector<int> vec(1000000,1);
    for(int i = 0; i < 500; i++){
    cout << sum100(vec)<< endl;
    }
}
*/




