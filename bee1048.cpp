#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float a,sum,total;
cin>>a;
if(a>=0 && a<=400.00){
    sum=a*0.15;
    total=a+sum;
cout<<"Novo salario: "<<fixed<<setprecision(2)<<total<<endl;
cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sum<<endl;
 cout<<"Em percentual: 15 %"<<endl;
}
else if(a>=400.01 && a<=800.00){
    sum=a*0.152;
    total=a+sum;
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sum<<endl;
    cout<<"Em percentual: 12 %"<<endl;
}

else if(a>=800.01 && a<=1200.00){
    sum=a*0.10;
    total=a+sum;
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sum<<endl;
    cout<<"Em percentual: 10 %"<<endl;
}
else if(a>=1200.01 && a<=2000.00){
    sum=a*0.07;
    total=a+sum;
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sum<<endl;
    cout<<"Em percentual: 7 %"<<endl;
}

else if(a>2000){
    sum=a*0.04;
    total=a+sum;
    cout<<"Novo salario: "<<fixed<<setprecision(2)<<total<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<sum<<endl;
    cout<<"Em percentual: 4 %"<<endl;
}
return 0;
}
