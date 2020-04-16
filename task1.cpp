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
    long long n,s=0;
    cin >> n;
    if (n%10!=0){
        cout << -1;
    }
    else{
        s+=(n/500);
        n%=500;
        s+=(n/200);
        n%=200;
        s+=(n/100);
        n%=100;
        s+=(n/50);
        n%=50;
        s+=(n/20);
        n%=20;
        s+=(n/10);
        n%=10;
        cout << s;
    }

}
