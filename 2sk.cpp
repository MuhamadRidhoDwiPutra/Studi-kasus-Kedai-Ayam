#include<iostream>
using namespace std;

int main(){
	
	int m1,m2,m3,m4,m5,age,ago,ugo,cgo,aba,jml,jrk,ogkr,jbyr,dsk,byr,kbl;
	cout<<"Menu Makanan Restoran 99"<<endl;
	cout<<"1. Ayam Geprek Rp.21.000"<<endl;
	cout<<"2. Ayam Goreng Rp.17.000"<<endl;
	cout<<"3. Udang Goreng ; Rp.19,000"<<endl;
	cout<<"4. Cumi Goreng : Rp.20,000"<<endl;
	cout<<"5. Ayam Bakar : RP.25,000"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Jumlah Ayam Geprek : ";cin>>age;
	cout<<"Masukkan Jumlah Ayam Goreng : ";cin>>ago;
	cout<<"Masukkan Jumlah Udang Goreng : ";cin>>ugo;
	cout<<"Masukkan Jumlah Cumi Goreng : ";cin>>cgo;
	cout<<"Masukkan Jumlah Ayam Bakar : ";cin>>aba;
	cout<<endl;
	
	m1 = age * 21000;
	m2 = ago * 17000;
	m3 = ugo * 19000;
	m4 = cgo * 20000;
	m5 = aba * 25000;
	
	cout<<"Masukkan Jarak : ";cin>>jrk;
	
	if(jrk<=3){
		ogkr = 15000;	
	}
	else if(jrk>3){
		ogkr = 25000;
		
	}
	
	jml= m1+m2+m3+m4+m5;
	cout<<"Jumlah Pembelian anda : "<<jml<<endl;
	cout<<"Biaya Ongkir : "<<ogkr<<endl;
	
	if(jml>=25000 && jml<50000){
		ogkr=ogkr-3000;
		dsk=0;	
	}
	else if(jml>=50000 && jml<150000){
		ogkr=ogkr-5000;
		dsk=15/100;
	}
	else if(jml>=150000){
		ogkr=ogkr-8000;
		dsk=35/100;
	}
	jbyr=jml+ogkr;
	cout<<"Anda Mendapatkan potongan Ongkir sebesar = "<<ogkr<<endl;
	cout<<"Anda Mendapatkan total Diskon = "<<dsk<<endl;
	jbyr=jbyr-dsk;
	cout<<"Total Bayar : "<<jbyr<<endl;
	
	cout<<"Bayar : ";cin>>byr;
	kbl = byr - jbyr;
	cout<<"Kembalian anda adalah : "<<kbl<<endl;
	

return 0;	
}
