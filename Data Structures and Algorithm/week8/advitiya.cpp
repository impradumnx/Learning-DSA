#include <iostream>
using namespace std;
int main()
{
    int test;
    string str2;
    string str1 = "ADVITIYA";
    // cin>>test;
    int ans = 0;
    cout << "enter a string : ";
    cin >> str2;
    int size = str2.size();
    cout<<size;

    if (size == 8)
    {
        for (int i = 0; i < 8; i++)
        {
            int diff = str1[i] - str2[i];
            if (diff >= 0)
            {
                ans += diff;
            }
            else
            {
                diff = 26 + diff;
                ans += diff;
            }
        }
        cout << "no. of operations to get the required string : " << ans << endl;
    }
    else cout << "invalid size";
        return 0;
}

