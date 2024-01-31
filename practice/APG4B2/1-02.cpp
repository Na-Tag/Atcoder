#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void printf(string str)
{
    cout << str << endl;
}
int main()
{
    int name = 1;
    int tmp = name;
    name *= 2;
    cin >> name;
    cout << ++name << endl;
    cout << ++name << endl;
    cout << ++name << endl;
    cout << ++name << endl;
    cout << name++ << endl;
    cout << name++ << endl;
    cout << name++ << endl;
    string s;
    cin >> s;
    int count = 0;
    cout << count << endl;
    /*
     do
    {
        getline(cin, s);
        printf(s);
    } while (name-- > 1);

    */
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
    }
    for (int i = 0; i < N; i++)
    {
        cout << vec.at(i);
    }

    // vector<vector<int>> vec(N);
}