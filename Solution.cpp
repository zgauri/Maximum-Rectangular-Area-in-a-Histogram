#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n) {
        stack<long long> s;
        long long maxArea = 0;
        
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[i] < arr[s.top()]) {
                long long height = arr[s.top()];
                s.pop();
                long long width = s.empty() ? i : i - s.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            s.push(i);
        }
        
        while (!s.empty()) {
            long long height = arr[s.top()];
            s.pop();
            long long width = s.empty() ? n : n - s.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        
        return maxArea;
    }
};

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}