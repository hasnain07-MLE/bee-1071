#include<iostream>
using namespace std;
void bubble(int a[], int n){

int i,j,flag=0,temp=0;

for(i=0; i<n-1; i++){

    for(j=0; j<n-1-i; j++){

        if(a[j] > a[j+1]){

            temp=a[j];

            a[j]=a[j+1];

            a[j+1]=temp;

            flag=1;}
            }
      if(flag==0){
        break;
      }}
   for(i=0; i<3; i++){

    cout<<a[i]<<endl;
   }
}
int main(){
int i, arr[3],brr[3];

for(i=0; i<3; i++){

    cin>>arr[i];

    brr[i]=arr[i];
}

bubble(arr,3);

cout<<endl;

   for(i=0; i<3; i++){

    cout<<brr[i]<<endl;

   }


return 0;
}
