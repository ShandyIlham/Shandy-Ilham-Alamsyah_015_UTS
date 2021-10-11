/* Program Kalkulator */
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	float a, b, hasil;
	char opr, yn;
	
	awal:
	cout<<"Enter any two number: ";
	cin>> a >> b;
	cout<<"Enter the operator (+, -, *, /) : ";
	cin>> opr;
	
	switch(opr) {
        case '+':
            cout << "The calculated result is : " << a + b;
            break;
        case '-':
            cout << "The calculated result is : " << a - b;
            break;
        case '*':
            cout << "The calculated result is : " << a * b;
            break;
        case '/':
            cout << "The calculated result is : " << a / b;
            break;
        default:
            cout << "Error!! operator is not correct";
            break;
	}
	
	cout<<"\n\n apakah anda ingin menghitung lagi? <Y> atau <N> ";
	cin>>yn;
	cout<<endl;
	if(yn=='Y' || yn=='y'){
		goto awal;
	}else if(yn=='N' || yn=='n'){
		cout<<" terima kasih sudah menggunakan kalkulator sederhana ini"<<endl<<endl;
	}
	
	getch();
}
