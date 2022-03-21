#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int bil1,bil2, pil, loop=1;
	float hasil;
	string operasi;
	
	while(true){
		cout<<endl;
	cout<<"	PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<endl;
	cout<<"  1. Penjumlahan"<<endl;
	cout<<"  2. Pengurangan"<<endl;
	cout<<"  3. Perkalian"<<endl;
	cout<<"  4. Pembagian"<<endl;
	cout<<"  5. Modulus"<<endl;
	cout<<"  6. Keluar"<<endl;
	cout<<endl;
	cout<<" Masukan Pilihan : ";
	cin>>pil;
	system("cls");
	
	if (pil < 6){
		cout<<endl;
		cout<<" Masukan Bilangan pertama :";
		cin>>bil1;
		cout<<" Masukan Bilangan kedua   :";
		cin>>bil2;	
		
		switch(pil){
		        case 1 : hasil=bil1+bil2;
				operasi='+';
				break;
				case 2 : hasil=bil1-bil2;
					operasi='-';
					break;
				case 3 : hasil=bil1*bil2;
					operasi='*';
					break;
				case 4 : hasil=bil1/bil2;
					operasi='/';
					break;
				case 5 : hasil=bil1%bil2;
					 operasi='%';
					break;
				default :
					cout<<" Anda Salah Memasukan Operator"<<endl;
			}
			cout<<"-----------------------------"<<endl;
			cout<<"    "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
			cout<<"-----------------------------"<<endl;
			
			getch();
			system("cls");
	}else{
		break;
		}
	
	
	}
	
	
}
