#include<iostream>
using namespace std;
int main(){
double a[3];
int i,j;

for(i=0; i<3; i++){
    cin>>a[i];
}

for(i=0; i<2; i++){
 for(j=i+1; j<3; j++){
    if(a[i]<a[j]){
        int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
    }
}
}
double A,B,C;
A=a[0];
B=a[1];
C=a[2];
if(A >= B+C){
    cout<<"NAO FORMA TRIANGULO"<<endl;
}

else if((A*A==B*B+C*C) && (A==B && B==C && A==C)){
    cout<<"TRIANGULO RETANGULO"<<endl;
      cout<<"TRIANGULO EQUILATERO"<<endl;
}
else if((A*A>B*B+C*C) && (A==B && B==C && A==C)){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
    cout<<"TRIANGULO EQUILATERO"<<endl;
}
else if((A*A<B*B+C*C) && (A==B && B==C && A==C)){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
    cout<<"TRIANGULO EQUILATERO"<<endl;
}


else if(A*A==B*B+C*C && (A==B && B!=C && A!=C)){
    cout<<"TRIANGULO RETANGULO"<<endl;
      cout<<"TRIANGULO ISOSCELES"<<endl;
}
else if(A*A>B*B+C*C && (A==B && B!=C && A!=C)){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
    cout<<"TRIANGULO ISOSCELES"<<endl;
}
else if(A*A<B*B+C*C && (A==B && B!=C && A!=C)){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
    cout<<"TRIANGULO ISOSCELES"<<endl;
}

else if(A*A==B*B+C*C && (B==C && B!=A && A!=C)){
    cout<<"TRIANGULO RETANGULO"<<endl;
      cout<<"TRIANGULO ISOSCELES"<<endl;
}
else if(A*A>B*B+C*C && (B==C && B!=A && A!=C)){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
    cout<<"TRIANGULO ISOSCELES"<<endl;
}
else if(A*A<B*B+C*C && (B==C && B!=A && A!=C)){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
    cout<<"TRIANGULO ISOSCELES"<<endl;
}


else if(A*A==B*B+C*C && (A==C && B!=A && B!=C)){
    cout<<"TRIANGULO RETANGULO"<<endl;
      cout<<"TRIANGULO ISOSCELES"<<endl;
}
else if(A*A>B*B+C*C && (A==C && B!=A && B!=C)){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
    cout<<"TRIANGULO ISOSCELES"<<endl;
}


else if(A*A<B*B+C*C && (A==C && B!=A && B!=C)){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
    cout<<"TRIANGULO ISOSCELES"<<endl;
}



else if(A*A == B*B+C*C){
    cout<<"TRIANGULO RETANGULO"<<endl;
}
else if(A*A>B*B+C*C){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
}
else if(A*A<B*B+C*C){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
}
return 0;
}
