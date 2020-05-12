#include <iostream>
using namespace std ;
main(){
	int baris , space , kolom, i ;
	cout << "Masukan banyak baris : " ;
	cin >> i ;
	for ( baris = i ; baris >= 0 ; baris-- ) {
		for ( space = baris ; space >= 0 ; space-- ) {
			cout << " " ;
		}
		for ( kolom = 1 ; kolom <= i - baris ; kolom++ ) {
			cout << "*" ;
		}
		for ( kolom = 1 ; kolom < i-baris ; kolom ++ ) {
			cout << "*" ;
		}
		cout << endl ;
    }
}
