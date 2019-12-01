#include<bits/stdc++.h>

using namespace std;

int T , n , K , arr[1<<20];
string str;

int main(){

    cin>>T;
    while(T--){

        cin>>n;

        for(int j = 1 ; j <= n ; j++)
            scanf("%d",&arr[j]);

        sort(arr+1 , arr+1+n);
        
        set < int > S;

        for(int j = 1 ; j <= n ; j++){
            S.insert(arr[j]);
            if(S.count(arr[j] - 1) == 0)
                S.insert(arr[j] + 1);
        }

        cout<<S.size() - n<<endl;
    }



}
