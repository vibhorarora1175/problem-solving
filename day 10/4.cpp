#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> v, maxim;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            v.push_back(i);
        }
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<endl;
    // }

    int sum, maxi = 0;
    if (v.size() == 2)
    {
        cout << num;
    }
    else
    {

        for (int i = 0; i < v.size(); i++)
        {
            sum = 0;
            int temp=v[i];
            while (v[i] != 0)
            {
                int rem = v[i] % 10;
                sum += rem;
                v[i] /= 10;
            }
            if (sum > maxi)
            {
                maxi=temp;
                
            }
        }
        cout << maxi;
    }
}