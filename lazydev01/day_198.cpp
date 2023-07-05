#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void printNum(int i, int num){
    if(i>num){
        return;
    }
    cout << i << endl;
    printNum(i+1, num);
}

void print1ToN(){
    int n;
    cin >> n;
    printNum(1, n);
}

void printReverse(int i){
    if(i<=0){
        return;
    }
    cout << i << endl;
    printReverse(i-1);
}

void printNTo1(){
    int n;
    cin >> n;
    printReverse(n);
}

void printNumBackTrack(int i, int num){
    if(i<=0){
        return;
    }
    printNumBackTrack(i-1, num);
    cout << i << endl;
}

void print1ToNBackTrack(){
    int n;
    cin >> n;
    printNumBackTrack(n, n);
}

void printReverseBackTrack(int i, int num){
    if(i>num){
        return;
    }
    printReverseBackTrack(i+1, num);
    cout << i << endl;
}

void printNTo1BackTrack(){
    int n;
    cin >> n;
    printReverseBackTrack(1, n);
}

void printSum(int i, int sum){
    if(i<=0){
        cout << sum << endl;
        return;
    }
    printSum(i-1, sum+i);
}

void printSumofNParametrized(){
    int n;
    cin >> n;
    printSum(n, 0);
}

int printSumFunctional(int n){
    if(n==0){
        return 0;
    }
    return n+printSumFunctional(n-1);
}

void printSumOfNFunctional(){
    int n;
    cin >> n;
    cout << printSumFunctional(n) << endl;
}

void calcFactorial(int i, int prod){
    if(i<=0){
        cout << prod << endl;
        return;
    }
    calcFactorial(i-1, prod*i);
}

void factorialOfNParametrized(){
    int n;
    cin >> n;
    calcFactorial(n, 1);
}

int calcFactorialFunctional(int n){
    if(n==1){
        return 1;
    }
    return n*calcFactorialFunctional(n-1);
}

void factorialOfNFunctional(){
    int n;
    cin >> n;
    cout << calcFactorialFunctional(n) << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // print1ToN();
    // printNTo1();
    // print1ToNBackTrack();
    // printNTo1BackTrack();
    // printSumOfNFunctional();
    factorialOfNFunctional();
    return 0;
}