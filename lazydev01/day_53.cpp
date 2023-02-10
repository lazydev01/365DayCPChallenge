/*

    Question -> https://www.codechef.com/problems/AUDIBLE

*/
#include <iostream>
using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int x;
        cin >> x;
        if(x>=67 && x<=45000){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
