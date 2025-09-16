#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
double A,B,C,r1,r2;
cin>>A>>B>>C;
if(A==0 || (B*B-4*A*C)<0){

    cout<<"Impossivel calcular"<<endl;
}
else{
    r1=(-B+sqrt(B*B-4*A*C))/ (2*A);

    cout<<"R1 = "<<fixed<<setprecision(5)<<r1<<endl;

     r2=(-B-sqrt(B*B-4*A*C))/(2*A);

      cout<<"R2 = "<<fixed<<setprecision(5)<<r2<<endl;


}
return 0;
}
