#include<iostream>
using namespace std;
int GCD(long int a , long int b){
  long int c;
   while ( a != 0 ) {
     c = a;
     a = b%a; 
     b = c;
  }
  cout<<b<<"\n";
  if (b>1){
  	return 1;
  }else{
  	return 0;
  }
}
int main(int argc, char const *argv[])
{
	int t ; 
	cin>>t;
	while(t>0){
        long int n,i=0,k=0,key=0,j=0;
         cin>>n;
         long int rooms[n];
          for(i=0;i<n;i++){
          	cin>>rooms[i];
          }
          //
          for(i=0;i<n-1;i++){
          	if(rooms[i] == 1){
          		continue;
          	}
          	if(rooms[i]>=rooms[i+1]){
          	  if(GCD(rooms[i] , rooms[i+1])){
                j++;
          	  }
            }else{
            	if (GCD(rooms[i+1] , rooms[i])){
                    j++;
              }
            }
          }
          //
          for(i=0;i<n-1;i++){
          	if(rooms[i] == 1){
          		continue;
          	}
          	if(rooms[i]>=rooms[i+1]){
          	  if(GCD(rooms[i] , rooms[i+1])){
                k++;k++;
                key = i+1;
                break;
          	  }
            }else{
            	if (GCD(rooms[i+1] , rooms[i])){
            		k++;k++;
            		key = i+1;
            		break;
              }
            }
          }
        for(i=key+1;i<n;i++){
        	if(rooms[i] == 1){
          		continue;
          	}
          	if(rooms[i]>=rooms[key]){
          	  if(GCD(rooms[i] , rooms[key])){
                k++;
                key = i;
          	  }
            }else{
            	if (GCD(rooms[key] , rooms[i])){
            		k++;
            		key = i;
              }
            }

          }
          if(k>=j){
          cout<<k<<"\n";
          }else{
          	cout<<j<<"\n";
          }
     t--;
	}
	return 0;
}