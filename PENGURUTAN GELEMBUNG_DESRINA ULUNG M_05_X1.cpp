#include<iostream>
#include<cstdlib>
using namespace std;

void Bubble_Sort(int A[], int n)
{
	int i, j, buffer;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n-i-1; j++)
		{
			if( A[j] > A[j+1])
			{
				buffer = A[j];
				A[j] = A[j+1];
				A[j+1] = buffer;
			}
		}
	}
	cout<<("Hasil Pengurutan: ");
	for(i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}

int main()
{
	int i, n;
	cout << "Masukkan jumlah elemen yg akan diurutkan: ";
	cin>> n;
	int A[n];
	for(i = 0; i < n; i++)
	{
		cout<< "Masukkan bilangan ke-" << i+1 << " : ";
		cin >> A[i];
	}
	Bubble_Sort(A, n);
	system("Pause");
	return 0;
}
