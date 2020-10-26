#include <iostream>
using namespace std;

main()
{
	float c,f,k,r;
	
	cout<<"Program Konversi Suhu dari Celcius ke Fahrenheit, Kelvin, dan Reamur\n";
	
	cout<<"\nMasukkan Suhu Celcius\t= ";cin>>c;
	
	f = (9/5*c)+32;
	k = 273+c;
	r = (4/9*c)+32;
	
	cout<<"Fahrenheit\t\t= "<<f<<endl;
	cout<<"Kelvin\t\t\t= "<<k<<endl;
	cout<<"Reamur\t\t\t= "<<r<<endl;
}
	
