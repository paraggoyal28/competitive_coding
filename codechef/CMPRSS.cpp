#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll test, itr, number_of_ints, current_count, start, end;
    cin >> test;
    while(test--)
    {
        cin >> number_of_ints;
        ll numbers[number_of_ints];
        for (itr = 0; itr < number_of_ints; itr++)
        {
            cin >> numbers[itr];
        }
        start = numbers[0];
        current_count = 0;
        for (itr = 0; itr < number_of_ints - 1; itr++)
        {
            
            if (numbers[itr+1] - numbers[itr] == 1)
            {
                current_count++;
            }
            else
            {
                if (current_count >= 2)
                {
                    end = numbers[itr];
                    cout << start << "..." << end << ",";
                    start = numbers[itr+1];
                    current_count = 0;
                }
                else if(current_count >= 1)
                {
                    cout << numbers[itr-1] << "," << numbers[itr] << ",";
                    current_count = 0;
                    start = numbers[itr+1];
                }
                else
                {
                    cout << numbers[itr] << ",";
                    start = numbers[itr+1];
                }
            }
        }
        if (current_count >= 2)
        {
            end = numbers[itr];
            cout << start << "..." << end;
            start = numbers[itr+1];
            current_count = 0;
        }
        else if(current_count >= 1)
        {
            cout << numbers[itr-1] << "," << numbers[itr];
        }
        else
        {
            cout << numbers[itr];
        }
        cout << "\n";
    }
    return 0;
}
