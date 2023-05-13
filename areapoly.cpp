/*Given a convex polygon of N vertices in the 2D plane Oxy, your task is to calculate its area.*/
#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

double area(Point arr[], int n)
{
    double area = 0.0;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (arr[j].x + arr[i].x) * (arr[j].y - arr[i].y);
        j = i;
    }
    return abs(area / 2.0);
}

typedef Point p;

int main(){
    int t;
    cin>>t;
    while(t--){
        double s;
        int n;
        cin>>n;
        p arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i].x>>arr[i].y;
        }
        s = area(arr,n);
        cout<<fixed<<setprecision(3)<<s<<endl;
    }
    return 0;
}