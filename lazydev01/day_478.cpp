#include<bits/stdc++.h>
using namespace std;

void clockConversion(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string hour = "";
        string minutes = "";
        bool delimeter = false;
        for(auto i : s){
            if(i==':'){
                delimeter = true;
                continue;
            }
            if(delimeter){
                minutes += i;
            }
            else{
                hour += i;
            }
        }
        int hour_int = stoi(hour);
        int minute_int = stoi(minutes);
        bool am = true;
        string ans = "";
        if(hour_int>=12){
            if(hour_int==12){
                ans+="12";
            }
            else if((hour_int-12)<10){
                ans+='0';
                ans+=(to_string(hour_int - 12));
            }
            else{
                ans+=(to_string(hour_int - 12));
            }
            am = false;
        }
        else{
            if(hour_int == 0){
                ans+=(to_string(12));
            }
            else{
                ans+=(hour);
            }
        }
        ans+=':';
        if(minute_int < 10){
            ans += "0";
        }
        ans+=(to_string(minute_int));
        ans+=" ";
        if(am){
            ans += "AM";
        }
        else{
            ans += "PM";
        }
        cout << ans << endl;
    }
}

int32_t main(){
    clockConversion();
    return 0;
}