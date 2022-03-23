#include <iostream>
using namespace std;

int main(){
	int diskon, i, j, x, tot_bayar;
	int harga[10], bayar[10], jbrg[10], total = 0;;
	char nama[30][x];
	cout<<"==============================="<<endl;
  	cout<<"========KEDAI MAKAN ========"<<endl;
  	cout<<" Jenis Makanan : "<<endl;
  	cout<<" 1. Ayam goreng "<<endl;
  	cout<<" 2. Ayam Bakar "<<endl;
  	cout<<"===============================\n"<<endl;
  	
  	cout<<"Masukkan jumlah pesanan : ";cin>>x;
  	system("cls");
  	cout<<"========KEDAI MAKAN ========"<<endl;
  	 for(i=0;i<x;i++){
  		cout<<"==============================="<<endl;
  		cout<<endl;
  		cout<< "Masukkan menu ayam    = ";
  		cin>>nama[i];
	  	cout<< "Masukkan Harga ayam   = ";
	 	 cin>>harga[i];
	  	cout<< "Masukkan Jumlah ayam  = ";
	  	cin>>jbrg[i];
	  	bayar[i]=harga[i]*jbrg[i];
	  	total += bayar[i];
  		cout<<endl;
  	}
  	cout<<" NO   	 	Pesanan    		jumlah			harga "<<endl;
	for(i=0;i<x;i++){
 		cout<<i+1<<"\t\t"<<nama[i]<<"\t\t\t"<<jbrg[i]<<"\t\t\t"<<harga[i]<<endl;
 	}

	if (total>45000){
		diskon = 0.1*total;
 		tot_bayar=total-diskon;
 	} 
 	cout<<"================================================\n";
 	cout<<" jumlah bayar 			: Rp. "<<total<<endl;
 	cout<<" Diskon 10%   			: Rp. "<<diskon<<endl;
 	cout<<" total bayar jika diskon : Rp. "<<tot_bayar<<endl;
	return 0;
}
