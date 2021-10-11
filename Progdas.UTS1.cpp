/*Buat Program dengan output seperti berikut :
	Katagori 		Umur 
	Bayi 			0-1 
	Batita 			1-3 
	Balita			3-5 
	Anak-anak 		5-12 
	Remaja 			12-17 
	Pemuda 			17-30 
	Dewasa 			30-60 
	Lansia 			60-100*/
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int umur;
	char yn;

	cout<<"\t   Program Umur"<<endl;
	cout<<" =============================="<<endl;
	cout<<"| Bayi\t\t|\t0-1    |"<<endl;
	cout<<"| Batita\t|\t1-3    |"<<endl;
	cout<<"| Balita\t|\t3-5    |"<<endl;
	cout<<"| Anak-anak\t|\t5-12   |"<<endl;
	cout<<"| Remaja\t|\t12-17  |"<<endl;
	cout<<"| Pemuda\t|\t17-30  |"<<endl;
	cout<<"| Dewasa\t|\t30-60  |"<<endl;
	cout<<"| Lansia\t|\t60-100 |"<<endl;
	cout<<" =============================="<<endl;
	awal:
	cout<<" masukkan umur : ";cin>>umur;
	
	if(umur>=60 && umur<=100){
		cout<<" Anda Termasuk Kategori Lansia";

	}else if(umur>=30 && umur<=59){
		cout<<" Anda Termasuk Kategori Dewasa";

	}else if(umur>=18 && umur<=29){
		cout<<" Anda Termasuk Kategori Pemuda";

	}else if(umur>=12 && umur<=17){
		cout<<" Anda Termasuk Kategori Remaja";

	}else if(umur>=6 && umur<=11){
		cout<<" Anda Termasuk Kategori Anak-anak";

    }else if(umur>=3 && umur<=5){
		cout<<" Anda Termasuk Kategori Balita";

    }else if(umur>=1 && umur<=2){
		cout<<" Anda Termasuk Kategori Batita";

    }else if(umur>=0 && umur<=0){
		cout<<" Anda Termasuk Kategori Bayi";

	}else {
		cout<<" Umur yang anda masukan salah"<<endl;
		goto awal;
	}
	
	cout<<"\n\n apakah anda ingin melihat kategori umur lagi? <Y> atau <N> ";
	cin>>yn;
	cout<<endl;
	if(yn=='Y' || yn=='y'){
		goto awal;
	}else if(yn=='N' || yn=='n'){
		cout<<" terima kasih sudah menggunakan program kategori umur ini"<<endl<<endl;
	}
	
	getch();
}
