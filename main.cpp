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


int main(){
    string a;
    cin >> a;
    int l,b=-1,count=0,d=0;
    l = a.length();
    for(int i=0;i<l;i++){
        if(a[i]!='0' && a[i]!='1' && a[i]!='2' && a[i]!='3' && a[i]!='4' && a[i]!='5' && a[i]!='6' && a[i]!='7' && a[i]!='8' && a[i]!='9' && a[i]!='.'){
            d=-1;
        }
    }
    if(d==0){
    for(int i = 0;i<l;i++){
        if (a[i]=='.'){

            if ( b >= 0 && b<=255){b=-1;}
            else{d=1;b=-1;}
            count++;
        }else{
            if(b==-1){
                b=a[i]-48;
            }
            else{b=b*10+a[i]-48;}
        }
    }}
    if(b>=0 && b<=255 && d==0 && count == 3){
        cout << "true";
    }else{cout << "false" ;}
}
