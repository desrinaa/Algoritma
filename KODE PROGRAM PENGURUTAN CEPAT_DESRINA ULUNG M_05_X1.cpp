#include<iostream>
#include<cstdlib>
using namespace std;

void Quick_Sort(int A[], int first, int last) {
	int i, j, pivot, buffer;
	
	if(first < last) {
		pivot = first;
		i = first;
		j = last;
		
		while(i < j) {
			while(A[i] <= A[pivot] && i < last)
			i++;
			while(A[j] > A[pivot])
			j--;
			if(i < j) {
				buffer = A[i];
				A[i] = A[j];
				A[j] = buffer;
			}
		}
		buffer = A[pivot];
		A[pivot] = A[j];
		A[j] = buffer;
		Quick_Sort (A, first, j-1);
		Quick_Sort (A, j+1, last);
	}
}

int main() {
	int i, n;
	cout << "Masukkan jumlah elemen yg diurutkan: ";
	cin >> n;
	int A[n];
	for(i = 0; i < n; i++)
	{
		cout<< "Maukkan bilangan ke-" << i+1 << " : ";
		cin >> A[i];
	}
	Quick_Sort(A, 0, n-1);
	cout << "Hasil Pengurutan elemen : ";
	for(i=0;i<n;i++)
	cout<< A[i] << " ";
	system ("Pause");
	return 0;
}
