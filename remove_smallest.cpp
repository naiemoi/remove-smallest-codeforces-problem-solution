#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int f=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int j=n-1;j>0;j--){
            if(a[j]-a[j-1]>1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
    return 0;
}