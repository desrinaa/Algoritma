#include<iostream>
#include<cstdlib>
using namespace std;

void Merge(int array[], int a, int b, int c, int n)
{
	int arr[n];
	int i, j, k;
	k = 0;
	i = a;
	j = b + 1;
	while (i <= b && j <= c)
	{
		if(array[i] < array[j])
		{
			arr[k++] = array[i++];
		}
		else
		{
			arr[k++] = array[j++];
		}
	}
	while(i <= b)
	{
		arr[k++] = array[i++];
	}
	
	while(j <= c)
	{
		arr[k++] = array [j++];
	}
	
	for(i=c;i >= a; i--)
	{
		array[i] = arr[--k];
	}
}
void Merge_Sort(int array[], int p, int q, int n)
{
	int r;
	if(p < q)
	{
		r = (p + q) / 2;
		Merge_Sort(array, p, r, n);
		Merge_Sort(array, r+1, q, n);
		Merge(array, p, r, q, n);
	}
}

int main()
{
	int i, n;
	cout << "Masukkan jumlah elemen yg diurutkan: ";
	cin >> n;
	int A[n];
	for(i = 0; i < n; i++)
	{
		cout<< "Masukkan bilangan ke-" << i+1 << " : ";
		cin >> A[i];
	}
	Merge_Sort(A, 0, n - 1, n);
	cout << "Hasil pengurutan elemen : ";
	for(i=0;i<n;i++)
	cout<< A[i] << " ";
	cout << endl;
	system("Pause");
	return 0;
}
