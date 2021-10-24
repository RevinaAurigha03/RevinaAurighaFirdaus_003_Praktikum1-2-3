//*Revina Aurigha Firdaus_2191397003*//

#include <iostream>
#include <conio.h>
using namespace std;

main(){
	char nama[17], gol;
	int jam, upah_perjam, total_upah;
	
	cout<<"PROGRAM UPAH KARYAWAN PT. MAKMUR "<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"Nama : "; gets(nama);
	cout<<"Pilih golongan [A]/[B]/[C]/[D] : "; cin>>gol;
	cout<<"Jam kerja (perminggu) : "; cin>>jam;
	
	switch(gol){
		case 'A': upah_perjam=5000;
		break;
		case 'B': upah_perjam=7000;
		break;
		case 'C': upah_perjam=8000;
		break;
		case 'D': upah_perjam=10000;
		break;
		
		default:
			cout<<"nilai yang anda masukkan salah"<<endl;
	}
	
	if (jam<=48){
		total_upah=upah_perjam*jam;
	}else {
		total_upah=upah_perjam*jam+4000;
	}
	
	cout<<"------------------------------------"<<endl;
	cout<<"Upah yang didapat : Rp."<<total_upah;
	cout<<"\n";
	
	
	getch();
}
