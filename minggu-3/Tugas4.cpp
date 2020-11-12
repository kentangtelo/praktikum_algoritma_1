#include <iostream>
using namespace std;

main()
{
long int total,jumlah1,jumlah2,jenjang;

cout<<"Program Perhitungan Biaya Pengeluaran Untuk Kuota Bantuan\n";
cout<<"-----------------------------------------------------------------\n\n";
cout<<"Jenjang = ";
cout<<"\n[1]Paud";
cout<<"\n[2]SD";
cout<<"\n[3]SMP";
cout<<"\n[4]SMA";
cout<<"\n[5]Universitas";
cout<<"\nMasukkan Nomor Jenjang = ";cin>>jenjang;
cout<<"Jumlah siswa atau mahasiswa = ";cin>>jumlah1;
cout<<"Jumlah pengajar = ";cin>>jumlah2;
	
	
	if (jenjang == 1)
	{
		total = ((42*jumlah1)+(20*jumlah2))*6000;
	} else if (jenjang >=2 && jenjang <=4)
		{
			total = ((42*jumlah1)+(35*jumlah2))*6000;
		} else if (jenjang == 4)
			{
				total = ((50*jumlah1)+(50*jumlah2))*6000;
			}
		
cout<<"Total Pengeluaran = Rp. "<<total;

cin.get();
return 0;

}
