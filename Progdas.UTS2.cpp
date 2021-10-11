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
	int harga, lembar, member, bayar;
	char yn;
	
	cout<<"\t\tGRAFITY Fotocopy"<<endl;
	cout<<" =============================================== "<<endl;
	cout<<"|      Paket            lembar          harga   |"<<endl;
	cout<<"|-----------------------------------------------|"<<endl;
	cout<<"|   Paket Member      berapa pun       Rp.75,-  |"<<endl;
	cout<<"|     Paket a      kurang dari 100     Rp.150,- |"<<endl;
	cout<<"|     Paket b          100-200         Rp.100,- |"<<endl;
	cout<<"|     Paket c       lebih dari 200     Rp.80,-  |"<<endl;
	cout<<" =============================================== "<<endl;
	cout<<"Apakah anda member Grafity Fotocopy (0=tidak 1=iya) = "; cin>>member;
	cout<<"Berapa lembar fotocopy = "; cin>>lembar;
	cout<<endl<<endl;
	
	if(member==1){
		harga=75;
		bayar=lembar*harga;
	}
	else if(member==0 && lembar<=100){
		harga=150;
		bayar=lembar*harga;
	}
	else if(member==0 && lembar<=100 && lembar==100 && lembar>=100){
		harga=100;
		bayar=lembar*harga;
	}
	else if(member==0 && lembar>=200){
		harga=80;
		bayar=lembar*harga;
	}
	
	if(member==1){
		cout<<"Apakah dia pelanggan = iya"<<endl;
	}
	else if(member==0){
		cout<<"Apakah dia pelanggan = tidak"<<endl;
	}
	
	cout<<"Banyak Fotocopy = "<<lembar<<endl;
	cout<<"Harga Per Lembar = Rp."<<harga<<endl;
	cout<<"Yang Harus Dibayarkan = Rp."<<bayar<<endl;
	
	getch ();
	return 0;

}
