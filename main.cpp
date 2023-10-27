#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void OutputArray(int* arr, const int size, int i);
void FillArrayRandomVal(int* arr, const int size, int start, int end, int i);
void SeekingIndexForMax(int* arr, const int size, int max, int &index, int i);
int main()
{
	srand((unsigned int) time(0));
	int start_random, end_random;
	int sum = 0, quantity = 0, n, index;
	cout << "n: "; cin >> n;
	cout << "start of random : "; cin >> start_random;
	cout << "end of random : "; cin >> end_random;

	int* a = new int[n];
	FillArrayRandomVal(a, n, start_random, end_random, 0);
	OutputArray(a, n, 0);
	SeekingIndexForMax(a, n, a[0], index, 0);
	cout << "index of the biggest pair value = " << index << endl;
	return 0;
}
void FillArrayRandomVal(int* arr, const int size, int start, int end, int i)
{
	if(i < size)
	{
		arr[i] = start + rand() % (end - start);
		FillArrayRandomVal(arr, size, start, end, i + 1);
	}
}
void OutputArray(int* arr, const int size, int i)
{
	if (i < size)
	{
		cout << setw(4) << arr[i];
		OutputArray(arr, size, i + 1);
	}
	else
	{
		cout << endl;
	}
	
}
void SeekingIndexForMax(int* arr, const int size, int max, int &index, int i)
{
	if(i < size)
	{
		if (arr[i] > max && arr[i] % 2 == 0)
		{
			max = arr[i];
			index = i;
		}
		SeekingIndexForMax(arr, size, max, index, i + 1);
	}
}