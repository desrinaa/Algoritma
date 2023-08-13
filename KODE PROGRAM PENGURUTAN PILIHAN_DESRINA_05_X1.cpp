#include <stdlib.h>
#include <iostream>
using namespace std;

int Indeks_NilaiMin(int array[], int indeksAwal, int n)
{
		int nilaiMin = array[indeksAwal];
		int indeksMin = indeksAwal; 
	
		for(int i = indeksMin + 1; i < n; i++) {
		  		if(array[i] < nilaiMin) 
				{
						indeksMin = i;
						nilaiMin = array [i];
				}
		}
		return indeksMin;
}

void Selection_Sort(int array[], int n)
{
	 	int buffer, indeks;
	 	for(int i = 0; i < n; i++)
	 	{
	 	indeks = Indeks_NilaiMin(array, i, n);
	 	buffer = array[i];
	 	array[i] = array [indeks];
	 	array[indeks] = buffer;
	 	}
}

int main()
{
	int i, n;
	cout << "Masukan jumlah elemen yg dilarutkan: ";
	cin >> n;
	int A[n];
	for(i = 0; i < n; i++)
	{
		cout<< "Masukkan bilangan ke-" << i+1 << " : ";
		  cin >> A[i];
	}
	Selection_Sort(A, n	);
	cout<< "Hasil Pengurutan Pilihan : ";
	for(i = 0; i < n; i++)
	{
		cout << " " << A[i];
	}
	cout << endl;
	system ("pause");
	return 0;
}
