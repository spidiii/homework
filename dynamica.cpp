#include <iostream>
#include <cmath>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#include <queue>
#include <fstream>
#include <map>
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
    long long a[n+1][m+1];

    for(long long i = 0;i<n+1;i++){
        for(long long j = 0;j<m+1;j++){
            a[i][j]=0;
        }
    }
    a[1][1]=1;
    for(long long i = 2;i<n+1;i++){
        for(long long j = 2;j<m+1;j++){
            a[i][j]=a[i-2][j-1]+a[i-1][j-2];
        }
    }
    cout << a[n][m];

}
