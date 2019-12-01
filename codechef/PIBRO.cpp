#include<bits/stdc++.h>
using namespace std;

int T, k, n;
string str;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> T;
    
    while (T--)
    {
        int max = 0;
        cin >> n >> k;
        int head[n];
        int tail[n];
        head[0] = 0;
        tail[n-1] = 0;
        cin >> str;
        for (int i = 1, j = str.length() - 2; j >= 0 ; i++ , j--) 
        {
            if(str[i-1] == '0')
            {
                head[i] = 0;
            }
            else
            {
                head[i] = head[i-1] + 1;
            }
            if(str[j+1] == '0')
            {
                tail[j] = 0;
            }
            else
            {
                tail[j] = tail[j+1] + 1;
            }
        }
        for (int i = 0; i <= str.length() - k ; i++)
        {
            if(head[i] + k + tail[i + k - 1] > max)
            max = head[i] + k + tail[i + k - 1];
        }
        cout << max <<endl;
        
    }
    return 0;
}
