#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        for(int i = 0; i < n/2; i++){
            char temp = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = temp;
        }
        int startIndex = -1;
        int endIndex = -1;
        for(int i = 0; i < n; i++){
            if(s[i] != ' ' && startIndex == -1){
                startIndex = i;
            }
            if(s[i] == ' ' && startIndex != -1){
                endIndex = i;
            }
            if(startIndex != -1 && endIndex != -1){
                int len = (endIndex - startIndex + 1) / 2 ;
                for(int j = 0; j < len; j++){
                    char temp2 = s[startIndex + j];
                    s[startIndex + j] = s[endIndex - 1 - j];
                    s[endIndex - 1 - j] = temp2;
                }
                startIndex = -1;
                endIndex = -1;
            }
        }
        if(startIndex != -1){
            endIndex = n;
            int len = (endIndex - startIndex + 1) / 2 ;
            for(int j = 0; j < len; j++){
                char temp2 = s[startIndex + j];
                s[startIndex + j] = s[endIndex - 1 - j];
                s[endIndex - 1 - j] = temp2;
            }
        }
        int initialChar = -1;
        int endChar = -1;
        int extraSpaces = 0;
        bool spaceIncluded = false;
        for(int i = 0; i<n; i++){
            if(s[i] != ' '){
                if(initialChar == -1){
                    initialChar = i;
                }
                endChar = i;
            }
        }
        for(int i = initialChar; i<=endChar; i++){
            if(s[i] == ' '){
                if(spaceIncluded){
                    extraSpaces++;
                }
                else{
                    spaceIncluded = true;
                }
            }
            else{
                spaceIncluded = false;
            }
        }
        extraSpaces += (initialChar + (n - endChar - 1));
        for(int i = 0; i< n - initialChar && initialChar!=0; i++){
            s[i] = s[initialChar+i];
        }
        spaceIncluded = false;
        for(int i = 0; i<endChar-initialChar; i++){
            if(s[i] == ' ' && spaceIncluded){
                for(int j = i; j<endChar - initialChar; j++){
                    s[j] = s[j+1];
                }
                i--;
            }
            if(s[i] == ' '){
                spaceIncluded = true;
            }
            else{
                spaceIncluded = false;
            }
        }
        s.resize(n - extraSpaces);
        return s;
    }
};