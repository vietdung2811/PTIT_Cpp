/*Timestamps are described in three components: hour, minute and second.

Given N timestamps, your task is to sort them in ascending order.*/
#include <bits/stdc++.h>
using namespace std;

struct TimeStamp
{
    int h,m,s;
};

typedef TimeStamp ts;

int sum (ts t){
    return t.h*3600 + t.m*60 + t.s;
}

bool cmp(ts t1, ts t2){
    return sum(t1) < sum(t2);
}

int main(){
    int n;
    cin>>n;
    ts arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].h>>arr[i].m>>arr[i].s;
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout<<arr[i].h<<" "<<arr[i].m<<" "<<arr[i].s<<endl;
    }
    return 0;
}