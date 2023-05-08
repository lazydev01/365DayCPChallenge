#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

// Leetcode 75 Day - 7

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid;
        while(start<=end){
            mid = (start + end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
};

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long start = 1;
        long end = n;
        int mid;
        while(start<=end){
            mid = (start + end)/2;
            if(mid==1 && isBadVersion(mid)){
                return mid;
            }
            if(isBadVersion(mid) && !isBadVersion(mid-1)){
                return mid;
            }
            else if(isBadVersion(mid)){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return -1;
    }
};