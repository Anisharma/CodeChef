#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void zero(int * a,int n){
  for (int i = 0; i < n; ++i)
    {
     a[i] = 0;
    }
}
int main(){
    int n,k,total=0;
    cin>>n>>k;
    int a[n];
    char click[] = "CLICK";
    char close[] = "CLOSEALL";
    zero(a,n);
    string check;int num=0;
    for (int i = 0; i < k; ++i)
    {
         cin>>check>>num;
         if(!check.compare(click)){
              if (a[num-1]==0)
              {
              	a[num-1]=1;
              	total++;

              }else if(a[num-1]==1){
              	a[num-1] = 0;
              	total--;
              }
         }else if(!check.compare(close)){
          zero(a,n);
          total = 0;
         }
         cout<<total<<"\n";
    }
	return 0;
}