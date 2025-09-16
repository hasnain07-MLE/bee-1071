#include<iostream>
using namespace std;
int main(){
int a[5],i;
int cnt=0,val=0;

 for(i=0; i<5; i++){
    cin>>a[i];
 }

 for(i=0; i<4; i++){
        if(a[i] < a[i+1]){
        cnt=cnt+1;
        }
        else if(a[i] > a[i+1]){
          val=val+1;

     }}

    if(cnt==4){

      cout<<"C"<<endl;
    }
    else if(val==4){
         cout<<"D"<<endl;
    }
    else{
        cout<<"N"<<endl;
    }



return 0;
}
