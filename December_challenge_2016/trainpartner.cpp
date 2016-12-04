#include<iostream>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t>0){
       int n;
       cin>>n;
       int key = n%8;
       int num;
       int check = n/8;
       num = check*8;
       if(key == 0)  {
       	num = num - 8 + 7;
        cout<<num<<"SL\n";
       }else if(key == 1){
         num = num + 4;
         cout<<num<<"LB\n";
       }else if(key == 2){
          num = num + 5;
          cout<<num<<"MB\n";
       }else if(key == 3){
          num = num + 6;
          cout<<num<<"UB\n";
       }else if(key == 4){
          num = num + 1;
          cout<<num<<"LB\n";
       }else if(key == 5){
          num = num + 2;
          cout<<num<<"MB\n";
       }else if(key == 6){
          num = num + 3;
          cout<<num<<"UB\n";
       }else if(key == 7){
          num = num + 8;
          cout<<num<<"SU\n";
       }    
    t--;
    }
	return 0;
}
