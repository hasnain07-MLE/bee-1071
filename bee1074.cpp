#include<iostream>
using namespace std;
int main(){

int N;

cin>>N;
int i,a[N];
for(i=0; i<N; i++){
    cin>>a[i];

}

  for(i=0; i<N; i++){
    if(a[i]<0 && a[i]%2==0){
            cout<<"EVEN NEGATIVE"<<endl;

    }
      else if(a[i]>0 && a[i]%2==0){
            cout<<"EVEN POSITIVE"<<endl;

    }
    else if(a[i]>0 && a[i]%2!=0){
            cout<<"ODD POSITIVE"<<endl;

    }


   else if(a[i]<0 && a[i]%2!=0){
            cout<<"ODD NEGATIVE"<<endl;

    }
     else if(a[i]==0){

            cout<<"NULL"<<endl;

    }

  }
return 0;
}
