//*Revina Aurigha Firdaus_21091397003*//

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char user [17];
	int total_waktu,jam,total_jam,menit,total_menit;

	cout<<"PROGRAM BILLING WARNET\n";
	cout<<"Tarif Rp.5000 = 1 jam" <<endl;
	cout<<"--------------------------------\n";
	cout<<"Masukkan Nama User : " ;cin>>user;
	cout<<"--------------------------------\n";
	cout<<"Berapa Lama User Bermain" << endl;
	cout<<"Masukkan jam :";
	cin>>jam;
	cout<<"Masukkan Menit :";
	cin>>menit;

	total_jam=jam*5000;
	total_menit=menit*2500/30;

	cout<< "Total Pembayaran: Rp. ";
	total_waktu =total_jam+total_menit;
	cout<<total_waktu <<endl;


	getch();



}
