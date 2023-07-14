#include <iostream>
using namespace std;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T = 0;
    int a, b = 0;
    cin >>T;
    for (int i = 0 ; i < T; i++)
    {
        cin >> a >> b;
        cout <<"Case #"<<i+1<<": "<<a <<" + "<<b<<" = "<< a+b << "\n";
    }
    return 0;
}