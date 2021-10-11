/*ada suatu kondisi dimana pada tempat fotokopi "GRAFITY Fotocopy"
  apabila dia pelanggan pada tempat itu maka berapa lembar pun banyaknya dia fotokopi di dapat harga Rp.75,-.
  tapi jika dia bukan pelanggan maka : 
  a. jika dia fotokopi kurang dari 100 lembar maka dapet harga Rp.150,- 
  b. jika fotokopi sebanyak 100-200 lembar dapet harga Rp.100,- 
  c. tapi jika fotokopi lebih dari 200 lembar dia dapet harga Rp.80,- 
  contoh keluaran : 
  - Apakah pelanggan ? = ... 
  - Banyak fotokopi = ... 
  - Harga = otomatis keluar 
  - Bayar = ...(didapat dari jumlah lembar fotokopi x harga)*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int harga, lembar, bayar;
	char yn;
	
	cout<<"\t\tGRAFITY Fotocopy"<<endl;
	cout<<" =============================================== "<<endl;
	cout<<" apakah anda seorang pelanggan ? <Y>or<N> "; cin>>yn;
	cout<<" berapa lembar anda ingin mencetak : "; cin>>lembar;
	
	if(yn=='Y' || yn=='y'){
		harga=75;
		bayar=harga*lembar;
	}
	else if(yn=='N' || yn=='n' && lembar<=100){
		harga=150;
		bayar=harga*lembar;
	}
	else if(yn=='N' || yn=='n' && lembar<=200 && lembar>=100){
		harga=100;
		bayar=harga*lembar;
	}
	else if(yn=='N' || yn=='n' && lembar>=200){
		harga=80;
		bayar=harga*lembar;
	}
	
	cout<<"\n =============================================== "<<endl;
	
	if(yn=='Y' || yn=='y'){
		cout<<"\n anda adalah seorang pelanggan";
	}
	else if(yn=='N' || yn=='n'){
		cout<<"\n anda bukan seorang pelanggan";
	}
	
	cout<<"\n Harga per lembar = Rp."<<harga;
	cout<<"\n Total pembayaran = Rp."<<bayar;	
	
	getch();
}
