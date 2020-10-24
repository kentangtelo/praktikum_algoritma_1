#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

main()
{
	string nama,nim,plug;
	
	cout<<"Masukkan :"<<endl;
	
	cout<<"NIM\t:";	
	getline(cin,nim);
	
	cout<<"Nama\t:";
	getline(cin,nama);
	
	cout<<"Plug\t:";
	getline(cin,plug);
	
	cout<<"\n\nInilah data Anda :\n";
	cout<<"NIM\t:"<<nim<<endl;
	cout<<"Nama\t:"<<nama<<endl;
	cout<<"Plug\t:"<<plug<<endl<<endl;
	
	cout<<"Tabel\t:\n";
	cout<<"=============================================\n";
	cout<<"NIM"<<setw(10)<<"|"<<setw(10)<<"Nama"<<setw(10)<<"|"<<setw(10)<<"Plug"<<endl;
	cout<<"=============================================\n";
	cout<<nim<<setw(4)<<"|"<<setw(10)<<nama<<setw(4)<<"|"<<setw(8)<<plug<<endl;
}
