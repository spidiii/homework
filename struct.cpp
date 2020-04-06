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
struct man{
    int summa;
    string name;
    string surname;
};
bool cmp(man n1, man n2){
    return n1.summa>=n2.summa;
}
int main(){
    long long n,c;
    cin >> n;
    vector <man> a(n);
    for(long long i=0;i<n;i++){
        a[i].summa=0;
        cin >> a[i].surname >> a[i].name;
        for(int j = 0 ;j < 3;j++){
            cin >> c;
            a[i].summa+=c;
        }
    }
    sort(a.begin(),a.end(),cmp);
    for(auto i : a){
        cout << i.surname << ' ' << i.name << endl;
    }
}
