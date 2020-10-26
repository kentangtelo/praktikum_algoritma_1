#include <iostream>
#define phi 3.14
using namespace std;

main()
{
	float r,t,s,luas;
	
	cout<<"Masukkan Jari - jari\t=";cin>>r;
	
	cout<<"\nMasukkan Tinggi\t=";cin>>t;
	
	cout<<"\nMasukkan Garis Pelukis\t=";cin>>s;
	
	luas = phi*r*r+phi*r*s;
	
	cout<<"\nLuas Permukaan\t="<<luas<<endl;
}
