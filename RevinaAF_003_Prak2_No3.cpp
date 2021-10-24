//*Revina Aurigha Firdaus_2191397003*//

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std; 

main(){
	long int a, t, c, l, k, pl;
	cout<<"Menu Operasi Segitiga Siku-siku"<<endl;
	cout<<"1.Mencari panjang sisi miring segitiga siku-siku"<<endl;
	cout<<"2.Mencari luas seitiga siku-siku"<<endl;
	cout<<"3.Mencari keliling segitiga siku-siku"<<endl;
	cout<<"4.Untuk mengakhiri program"<<endl;
	cout<<"-----------------------------------------------------"<<endl;
	cout<<"Pilih menu [1]/[2]/[3]/[4] : "; cin>>pl;
	if(pl==4);
	
	cout<<"Alas Segitiga Siku-Siku : "; cin>>a;
	cout<<"Tinggi Segitiga Siku-Siku : "; cin>>t;
	cout<<"------------------------------------------------------"<<endl;
	
	c=((a*a)+(t*t));
	l=0.5*a*t;
	k=a+t+c;
	
	switch(pl){
		case 1: {
			cout<<"-------------------------------------------------"<<endl;
			cout<<"Hasil panjang sisi miring segitiga siku-siku : "<<c<<endl;
			cout<<"-------------------------------------------------"<<endl;
			break;
			}
		case 2: {
			cout<<"-------------------------------------------------------="<<endl;
			cout<<"Hasil luas segitiga siku-siku="<<l<<endl;
			cout<<"--------------------------------------------------------"<<endl;
			break;
		}
		case 3: {
			cout<<"-------------------------------------------------------"<<endl;
			cout<<"Hasil keliling segitiga siku-siku="<<k<<endl;
			cout<<"---------------------------------------------------------"<<endl;
			break;
		}
	}
	
	cout<<"Terima Kasih Telah Menggunakan Program Ini"<<endl;
}
