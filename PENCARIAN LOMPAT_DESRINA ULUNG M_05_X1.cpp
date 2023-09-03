#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int Jump_Search (int A[], int n, int k) {
	int m = sqrt(n);
	int i = 0;
	while (A[m] <= k && m < n) {
		i = m;
		m += sqrt(n);
		if(m > n - 1)
			return -1;
			
	}
	
	for (int x = i; x<m; x++) {
		if (A[x] == k)
			return x;
	}
	return -1;
}

int main() {
	int n, kriteria, Posisi;
	cout << "Masukkan ukuran Array :";
	cin >> n;
	int Array[n];
	cout << "Masukkan Elemen Array: " << endl;
	
	for(int i = 0; i< n; i++) {
		cin >> Array[i];
	}
	cout << "Masukkan Kriteria yang ingin dicari: ";
	cin >> kriteria;
	Posisi = Jump_Search(Array, n, kriteria);
	if(Posisi>=0)
	cout << "Kriteria ditemukan di posisi: " << Posisi << endl;
	else
		cout << "Kriteria tidak ditemukan." << endl;
		
		system("Pause");
}
