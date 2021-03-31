#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int tmp = N;
    for(int i=2;i*i<=N;i++){
        while(tmp % i == 0) {
            cout << i << '\n';
            tmp  /= i;
        }
    }
    if(tmp != 1) cout << tmp;

    return 0;
}
