// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

struct meeting {
    int s;
    int e;
    int pos;
};

bool comparator(struct meeting m1, meeting m2){
    if(m1.e < m2.e) {
        return true;
    }
    else if(m1.e > m2.e) {
        return false;
    }
    else {
        if(m1.pos < m2.pos) {
            return true;
        }
        else{
            return false;
        }
    }
}

class Solution
{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        struct meeting meet[n];
        for(int i = 0; i < n; i++){
            meet[i].s= start[i];
            meet[i].e = end[i];
            meet[i].pos = i;
        }
        sort(meet, meet + n, comparator);
        int ans = 1,last = meet[0].e;
        //vector<int> ans;
        for(int i = 1; i < n; i++) {
            if(meet[i].s > last) {
                  ans++;
                  last = meet[i].e;
            } 
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}

//TIP-
//Just simple sorting problem...sort acording to end time and then start counting meetings whose end timing are 
//less then the next one's start time.
