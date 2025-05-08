#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin>> t;
    for(int i=0;i<t;i++)
    {

    
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int>b(n);
    vector<int>c(n);
    

    for(int i = 0; i < n; i++)
     {
        cin >> a[i];
    }
    
    
    sort(a.begin(), a.end());

    long long score =0;
    int min_value =a[0];
    int min2= a[n-1];
    int max_value = a[n-1];  
    

    for(int i = 1; i < n; i++) {
        
        score += max_value - min_value;
    }
    
    cout << score << endl;  
    }
    
    return 0;
}