#include <iostream>
using namespace std;

main()
{
	int positif1,odp1,kematian1;
	int positif2,odp2,kematian2;
	
	cout<<"Program Survey Covid-19 Minggu Pertama dan Kedua\n";
	cout<<"-----------------------------------------------------------\n\n";
	cout<<"Survey Minggu Pertama : \n";
	cout<<"Kasus Positif Covid-19 = ";cin>>positif1;
	cout<<"Kasus Kematian karena Covid-19 = ";cin>>kematian1;
	cout<<"Kasus ODP = ";cin>>odp1;
	
	cout<<"\nSurvey Minggu Kedua : \n";
	cout<<"Kasus Positif Covid-19 = ";cin>>positif2;
	cout<<"Kasus Kematian karena Covid-19 = ";cin>>kematian2;
	cout<<"Kasus ODP = ";cin>>odp2;
	
	
	if (positif1>0 || positif2>0)
	{
		if ((kematian1>0 || kematian2>0) && (odp1>0 || odp2>0))
			{
				cout<<"\nZona Hitam";
			} else if ((kematian1==0 && kematian2==0) && (odp1>0 || odp2>0))
			{
				cout<<"\nZona Merah";
			}
	} else if (positif1==0 && positif2==0)
	{
		if ((kematian1==0 && kematian2==0) && (odp1>0 || odp2>0))
			{
				cout<<"\nZona Oranye";
			} else if ((kematian1==0 && kematian2==0) && (odp1==0 && odp2==0))
			{
				cout<<"\nZona Hijau";
			}
	}
	
}
