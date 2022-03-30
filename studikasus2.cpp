#include<iostream>
using namespace std;

int main ()
{
	int i, m1, m2, m3, m4, m5;
	int porsi, pil, ongkir, jm, total;
	float diskon;
	int bayar, tot_harga, kembalian;
	cout<<"\t Menu Makanan : "<<endl;
	cout<<"1. Ayam Geprek  : Rp21000\n";
	cout<<"2. Ayam Goreng  : Rp17000\n";
	cout<<"3. Udang Goreng : Rp19000\n";
	cout<<"4. Cumi Goreng  : Rp20000\n";
	cout<<"5. Ayam Bakar   : Rp25000\n";
	
	m1 = 21000; m2 = 17000; m3 = 20000; m4 = 25000; m5 = 25000;
	
	cout<<"jarak lokasi anda : ";cin>>jm;
	if(jm < 3){
		ongkir = 15000;
	}else if(jm >= 3){
		ongkir = 25000;
	}
	mulai : 
	cout<<"Masukkan pilhan menu anda : ";cin>>pil;
	if(pil == 1){
		cout<<"Jumlah porsi : ";cin>>porsi;
		total = m1*porsi;
	}else if(pil == 2){
		cout<<"Jumlah porsi : ";cin>>porsi;
		total = m2*porsi;
	}else if(pil == 3){
		cout<<"Jumlah porsi : ";cin>>porsi;
		total = m3*porsi;
	}else if(pil == 4){
		cout<<"Jumlah porsi : ";cin>>porsi;
		total = m4*porsi;
	}else if(pil == 5){
		cout<<"Jumlah porsi : ";cin>>porsi;
		total = m5*porsi;
	}
	cout<<endl;	
		
	if(total > 25000){
			ongkir-=3000;
		}else if(total > 50000){
			ongkir-=5000;		
		}else if(total > 150000){
			ongkir-=8000;
		}
	if(total > 50000){
			diskon = 10/100;	
		}else if(total > 150000){
			diskon = 35/100;
		}
		tot_harga = total + ongkir - (total*diskon);
		cout<<"Ongkir       : "<<ongkir<<endl;
		cout<<"harga pesanan: "<<total<<endl;
		cout<<"Diskon       : "<<total*diskon<<endl;
		cout<<"total harga  : "<<tot_harga<<endl;
		cout<<"Bayar        : ";cin>>bayar;
		kembalian = bayar - tot_harga;
		cout<<"Kembalian    : "<<kembalian;
		
		cout<<"Apakah anda ingin memesan lagi [y/n]: ";cin>>i;
		if(i == 'y'){
			goto mulai;
		}
		
		return 0;
}
