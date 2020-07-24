#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
main ()
{
	char nama [30], nis[10];
	float nilai1, nilai2, nilai3,nilai4, totalnilai;
	cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
	cout<<"//                                             //"<<endl;
	cout<<"//\t        MENGHITUNG NILAI AKHIR   		  //"<<endl;
	cout<<"//                                             //"<<endl;
	cout<<"._._._._._._._._._._._._._._._._._._._._._._._._."<<endl;
	cout<<endl;
	{
ulang:	
	cout<<"Nama Lengkap   : ";
	cin>>nama;
	cout<<"NIS    : ";
	cin>>nis;
	
	cout<<endl;
	cout<<"Masukkan Nilai RATA-RATA TUGAS\t\t : "; cin>>nilai1;
	cout<<"Masukkan Nilai RATA-RATA ULANGAN HARIAN\t : "; cin>>nilai2;
	cout<<"Masukkan Nilai RATA-RATA UTS\t\t : "; cin>>nilai3;
	cout<<"Masukkan Nilai RATA-RATA UAS\t\t : "; cin>>nilai4;
	}
	{
	
		totalnilai=(nilai1+nilai2+nilai3+nilai4)/4;
		cout<<"--------------------------------"<<endl;
		if    (totalnilai >=91 && totalnilai >=100)
    	cout<<"// Grade Yang Anda Peroleh: A //"<<endl;

    	else if (totalnilai >=81 && totalnilai <=90)

    	cout<<"// Grade Yang Anda Peroleh: B //"<<endl;

    	else if (totalnilai >=65 && totalnilai <=80)

    	cout<<"// Grade Yang Anda Peroleh: C //"<<endl;

    	else if (totalnilai >=40 && totalnilai <=65)

    	cout<<"// Grade Yang Anda Peroleh: D //"<<endl;

    	else if (totalnilai >=0 && totalnilai <=41)

    	cout<<"// Grade Yang Anda Peroleh: E //"<<endl;
    	cout<<"--------------------------------"<<endl;
	}
	
	cout<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"Siswa Atas Nama : " <<nama <<endl;
	cout<<"NIS: "<<nis;
	cout<<endl;
	cout<<"RATA-RATA SELURUH NILAI  :"<<totalnilai<<endl;
	cout<<"Selamat atas perjuangannya di SD NEGERI SLOGOHIMO"<<endl;
	cout<<"-------------------------------------------"<<endl;
	getch ();
	
	char pilih;
	cout << "Lanjut isi nilai (y/n) : ";
	cin >> pilih;
	if(pilih=='y')
	{
		cout << "--------------------------------------" << endl;
		goto ulang;
	}
	else
	{
		cout << "Porgram Selesai";
	}
 	return 0;
 	
}




