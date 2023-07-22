#include<iostream>
using namespace std;
int main(){
     int n,rem,sum=0,flag=1;
     cin>>n;
     int ori=n;
     sum=n%10;
     n=n/10;
     while(n>0){
        rem=n%10;
        if(rem>sum){
            sum+=rem;
            n=n/10;
        }
        else{
            flag=0;
            break;
        }
     }
     if(flag){
        cout<<ori<<" is a good number"<<endl;
     }
     else{
        cout<<ori<<" is not a good number"<<endl;
     }
return 0;
}