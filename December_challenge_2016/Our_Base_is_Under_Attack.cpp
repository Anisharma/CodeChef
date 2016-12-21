#include<iostream>
using namespace std;
int main(){
	long int t;
	cin>>t;
	while(t>0){
		long long int n,i=0,counter,j=0,rem;
		cin>>n;
		    if(n== 0){
		    	cout<<0<<"\n";
			    continue;
	     	}
        if(n == 1){
        	cout<<"INFINITY\n";
        	continue;
        }
        j = j+ (n - n/2);
        
         if(n%2==0){
        for(i=2;i<=n/2;i++){
        	rem =0;
         counter = i;
          while(counter <= n){
          	if(counter>n/2){
          		rem =1;
          		break;
          	}
          	counter = counter*counter;
          }
            if (rem == 1)
           {
            j++;
           }
          }
        }else{

        }
        cout<<j<<"\n";
		t--;
	}
	return 0;
}