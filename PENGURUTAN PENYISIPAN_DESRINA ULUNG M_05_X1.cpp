#include<stdlib.h>
#include<iostream>

using namespace std;
void Insertion_Sort(int array[], int length);

int main()
{
	int i, n;
	cout << "Masukkan jumlah elemen yg diurutkan: ";
	cin >> n;
	int A[n];
	for(i = 0; i < n; i++)
	{
		cout <<"Masukkan bilangan ke-" << i+1 << " : ";
		cin >> A[i];
	}
	Insertion_Sort(A, n);
	system("Pause");
	return 0;
}

void Insertion_Sort(int array[], int lenght)
{
	int i, j, key;
	for (i = 1; i < lenght; i++)
	{
		j = i;
		while (j > 0 && array[j - 1] > array[j])
		{
			key = array[j];
			array[j] = array[j - 1];
			array[j - 1] = key;
			j--;
		}
	}
	cout << "Hasil Pengurutan: ";
	for (j = 0; j < lenght; j++)
	{
		cout <<" "<< array[j];
	}
	cout << endl;
}
