#include <iostream>
#include <math.h>
using namespace std;

int main (){
	
	//Deklarasi
	float x1;
	float x2;
	float y1;
	float y2;
	float D;
	
	//Menanyakan dan memasukan suatu bilangan
	cout << "Masukkan absis x1 : ";
	cin >> x1;
	cout << "Masukkan ordinat y1 : ";
	cin >> y1;
	cout << "Masukkan absis x2 : ";
	cin >> x2;
	cout << "Masukkan ordinat y2 : ";
	cin >> y2;
	
	//Proses atau assign
	D = sqrt ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	//Menampilkan jarak Manhattan setelah melewati proses
	cout << "Jadi " << "jarak antara titik " << "("<<x1<<","<<y1<<")" << " dan titik " << "("<<x2<<","<<y2<<")" << " adalah " << D;
	
	return 0;
}
