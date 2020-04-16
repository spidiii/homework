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
    long long n,r,l,s=0,max=0;
    vector <long long> a(100000,0);
    cin >> n;
    for(long long i = 0;i<n;i++){
        cin >> r >> l;
        a[r]++;
        a[l]--;
    }
    for(long long i = 0;i<100000;i++){
        s+=a[i];
        if(s>max){max=s;}
    }
    cout << max;
}
