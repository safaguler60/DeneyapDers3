#include<iostream>
#include<time.h>

using namespace std;

int main(){
int sayi;
int tahmin;
srand(time(0));
sayi=1+rand()%9;
cout<<"Bir tahminde bulunun: "<<endl;
cin>>tahmin;
if(tahmin==sayi){
    cout<<"TAHMIN DOGRU"<<endl;
}else {
    cout<<"TAHMIN YANLIS,SAYI: "<<sayi;
}



}




