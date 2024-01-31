#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string N = "", add;
    for (int i; i < n; i++)
    {
        cin >> add;
        N = N + add;
    }
    string IsKaibun = "Yes";
    int size = N.length();
    for(int i ; i < size-1; i++){
        if(N[i] == 'A' && N[i+1] =='B'){
            
        }
    }
    for (int i; i < size; i++)
    {
        if (N[i] != N[size - 1 - i])
        {
            IsKaibun = "No";
        }
    }
    cout << IsKaibun << endl;
}