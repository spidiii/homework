#include <iostream>
#include <cmath>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <fstream>
using namespace std;

struct Request{
    int left;
    int right;
};

bool cmp(struct Request first, struct Request second){
    return first.right < second.right;
}

int main(){
    long long n,s,a;
    cin >> n >> s;
    vector <long long> m(s+1);
    for(long long i =0 ;i<=s;i++){
        m[i]=i;
    }
    cin >> a;
    for(long long i = 1;i<n;i++){
        cin >> a;
        for(int j = a;j<=s;j++){
            if(m[j]>m[j-a]){m[j]=m[j-a]+1;}
        }
    }
    cout << m[s];

}
