#include<iostream>
#include<cstdlib>
using namespace std;
int Binary_Search(int A[], int n, int k)
{
	int i;
	int max = (n - 1);
	int min = 0;
	int iterasi = 0;
	
	while (max >= min)
	{
		i = (max + min) / 2;
		iterasi++;
		
		if(A[i] == k)
		{
		cout << "Jumlah iterasi: " << iterasi << endl;
			return i;
		}
		else if(A[i] > k)
		{
			max = (i - 1);
		}
		else
		{
			min = (i + 1);
		}
	}	
	
	return -1; 
}

int main(void)
{
	int n, kriteria, Posisi;
	cout << "Masukkan ukuran Array: ";
	cin >> n;
	int Array[n];
	cout << "Masukkan Elemen Array: " << endl;
	
	for(int i = 0; i< n; i++) {
		cin >> Array[i];
	}
	cout << "Masukkan kriteria yang ingin dicari: ";
	cin >> kriteria;
	
	Posisi = Binary_Search(Array, n, kriteria);
	if(Posisi == -1)
	{
		cout <<("Elemen yang dicari tidak ada ");
	}
	else
	{
		cout << "Elemen ada di indeks : " << Posisi << endl;
	}
	system("Pause");
	return 0;
}
