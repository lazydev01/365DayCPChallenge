#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void hamburgers(){
    string s;
    cin >> s;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    int r;
    cin >> r;
    map<char, int> ingredients;
    for(char c : s){
        ingredients[c]++;
    }
    int totalHamburgers = 0;
    int burgerByBread = INT_MAX, burgerBySausage = INT_MAX, burgerByCheese = INT_MAX;
    if(ingredients['B']>0){
        burgerByBread = nb / ingredients['B'];
    }
    if(ingredients['S']>0){
        burgerBySausage = ns / ingredients['S'];
    }
    if(ingredients['C']>0){
        burgerByCheese = nc / ingredients['C'];
    }
    totalHamburgers += min(burgerByBread, min(burgerBySausage, burgerByCheese));
    if(!ingredients['B']) nb = 0;
    if(!ingredients['S']) ns = 0;
    if(!ingredients['C']) nc = 0;
    int remainingBread = nb - (totalHamburgers * ingredients['B']);
    int remainingSausage = ns - (totalHamburgers * ingredients['S']);
    int remainingCheese = nc - (totalHamburgers * ingredients['C']);
    while(remainingBread > 0 || remainingSausage > 0 || remainingCheese > 0){
        int requiredBread, requiredSausage, requiredCheese;
        if(remainingBread > ingredients['B']){
            requiredBread = 0;
            remainingBread -= ingredients['B'];
        }
        else{
            requiredBread = ingredients['B'] - remainingBread;
            remainingBread = 0;
        }
        if(remainingSausage > ingredients['S']){
            requiredSausage = 0;
            remainingSausage -= ingredients['S'];
        }
        else{
            requiredSausage = ingredients['S'] - remainingSausage;
            remainingSausage = 0;
        }
        if(remainingCheese > ingredients['C']){
            requiredCheese = 0;
            remainingCheese -= ingredients['C'];
        }
        else{
            requiredCheese = ingredients['C'] - remainingCheese;
            remainingCheese = 0;
        }
        int price = (pb * requiredBread) + (ps * requiredSausage) + (pc * requiredCheese);
        if(r < price){
            r-=price;
            break;
        }
        r-=price;
        totalHamburgers++;
    }
    if(r<=0){
        cout << totalHamburgers << endl;
        return;
    }
    int priceForOneBurger = (ingredients['B'] * pb) + (ingredients['S'] * ps) + (ingredients['C'] * pc);
    totalHamburgers += (r / priceForOneBurger);
    cout << totalHamburgers << endl;    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    hamburgers();
    return 0;
}