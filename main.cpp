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
bool cmp(long long n1, long long n2){
    return n1>=n2;
}
int main(){
    long long n;
    cin >> n;
    vector <int> a(n);
    for(long long i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),cmp);
    for(auto i : a){
        cout << i << ' ';
    }
}
