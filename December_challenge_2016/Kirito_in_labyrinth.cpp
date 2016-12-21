#include<iostream>
using namespace std;
int GCD(long int a , long int b){
  long int c;
   while ( a != 0 ) {
     c = a;
     a = b%a; 
     b = c;
  }
  //cout<<b<<"\n";
  if (b>1){
  	return 1;
  }else{
  	return 0;
  }
}
long int important_Function(long int key, long int n , long int * rooms){
  long int num=0 ,i=0;
  for(i=key+1;i<n;i++){
        	if(rooms[i] == 1){
          		continue;
          	}
          	if(rooms[i]>=rooms[key]){
          	  if(GCD(rooms[i] , rooms[key])){
                num++;
                key = i;
          	  }
            }else{
            	if (GCD(rooms[key] , rooms[i])){
            		num++;
            		key = i;
              }
            }
          }

  return num;
}
int main(int argc, char const *argv[])
{
	int t ; 
	cin>>t;
	while(t>0){
        long int n,i=0,k=0,key=0,imp=0,impNum;
         cin>>n;
         long int rooms[n];
          for(i=0;i<n;i++){
          	cin>>rooms[i];
          }
          //
        /*  for(i=0;i<n-1;i++){
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
          }*/
          //
          for(i=0;i<n-1;i++){
          	if(rooms[i] == 1){
          		continue;
          	}
          	if(rooms[i]>=rooms[i+1]){
          	  if(GCD(rooms[i] , rooms[i+1])){
                key = i+1;
                     
                 impNum =important_Function( key, n , rooms);
                if(impNum >= imp){
                     imp = impNum;
                   } 
          	  }
            }else{
            	if (GCD(rooms[i+1] , rooms[i])){
            		
            		key = i+1;
                         
                        impNum =important_Function( key, n , rooms);
                     if(impNum >= imp){
                     imp = impNum;
              }
            }
          }
         }
        /*for(i=key+1;i<n;i++){
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
          }*/
     cout<<imp+2<<"\n";
     t--;
      }
	return 0;
}
