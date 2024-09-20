#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void queriesAboutLessOrEqualElements(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<m; i++){
        int insertIndex = upper_bound(a.begin(), a.end(), b[i])-a.begin();
        cout << insertIndex << " ";
    }
    cout << endl;
}

struct Job{
    int jobId;
    int deadline;
    int profit;
};

bool compare(Job &a, Job &b){
    if(a.profit>b.profit){
        return true;
    }
    return false;
}
 
void jobSequencing(){
    int n;
    cin >> n;
    vector<Job> jobs(n);
    for(int i=0; i<n; i++){
        cin >> jobs[i].jobId >> jobs[i].deadline >> jobs[i].profit;
    }
    sort(jobs.begin(), jobs.end(), compare);
    int maxDeadline = jobs[n-1].profit;
    int slots[maxDeadline + 1];
    for(int i=0; i<=maxDeadline; i++){
        slots[i] = -1;
    }
    int maxProfit = 0;
    int numberOfJobs = 0;
    for(int j=0; j<n; j++){
        if(slots[jobs[j].deadline]==-1){
            slots[jobs[j].deadline] = jobs[j].jobId;
            maxProfit+=jobs[j].profit;
            numberOfJobs++;
        }
        else{
            for(int i=jobs[j].deadline-1; i>0; i--){
                if(slots[i]==-1){
                    slots[i] = jobs[j].jobId;
                    maxProfit+=jobs[j].profit;
                    numberOfJobs++;
                    break;
                }
            }
        }
    }
    cout << numberOfJobs << " " << maxProfit << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // queriesAboutLessOrEqualElements();
    jobSequencing();
    return 0;
}