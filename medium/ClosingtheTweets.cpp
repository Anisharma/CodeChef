#include <iostream>
#include <vector>
#include <array>
using namespace std;
int main(){
    int n,k,total=0;
    cin>>n>>k;
    array<int , n> a;
    a.fill(0);
    string check;int num=0;
    for (int i = 0; i < k; ++i)
    {
         cin>>check>>num;
         if(check=='CLICK'){
              if (a[num-1]==0)
              {
              	a[num-1]=1;
              	total++;

              }else if(a[num-1]==1){
              	a[num-1] = 0;
              	total--;
              }
         }else if(check=='CLOSEALL'){
          a.fill(0);
          total = 0;
         }
         cout<<total<<"\n";
    }
	return 0;
}