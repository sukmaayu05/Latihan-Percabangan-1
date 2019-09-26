#include <iostream>
using namespace std;

int main () {
	int x,y;
	string pilihan;
	cout << "Masukkan nilai x : ";cin>>x;
	cout << "Masukkan nilai y : ";cin>>y;
	cout << "Masukkan pilihan : ";cin>>pilihan;
	
	if (pilihan == "penjumlahan") {
		cout <<" Hasil penjumlahan " << x+y << endl;
	}
	else if (pilihan == "Pembagian"){
		cout <<"Hasil pembagian " << x+y << endl;
	}
	else if (pilihan == "Perkalian"){
		cout <<"Hasil perkalian "<< x+y << endl;
	}
	else if (pilihan == "Pengurangan"){
		cout <<"Hasil pengurangan" << x+y << endl;
	}
	
	cout << "Program ini menggunakan program kalkulator sederhana"<<endl;
	return 0;
}

