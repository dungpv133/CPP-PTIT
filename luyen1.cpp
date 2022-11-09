#include <bits/stdc++.h>
using namespace std;

bool isPrimne(int n)
{
	if(n < 2)
		return false;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

long long fibo(int n)
{
	if(n == 0 || n == 1)
		return 1;
	return fibo(n - 2) + fibo(n - 1);
}
void bubbleSort(int a [], int n)
{
	bool kt = false;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j <  n - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				kt = true;
			}
		}
		if(!kt)
			break;
	}
}
void selectionSort(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int min_pos = i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] < a[min_pos])
			{
				min_pos = j;
			}
		}
		swap(a[i], a[min_pos]);
	}
}

void insertionSort(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}

string toHexa(long long n)
{
	string res = "";
	while(n > 0)
	{
		int num = n % 16;
		if(num < 10)
		{
			res = (char)(num + '0') + res;
		}
		if(num == 10)
		{
			res = "A" + res;
		}
		else if(num == 11)
		{
			res = "B" + res;
		}
		else if(num == 12)
		{
			res = "C" + res;
		}
		else if(num == 13)
		{
			res = "D" + res;
		}
		else if(num == 14)
		{
			res = "E" + res;
		}
		else if(num == 15)
		{
			res = "F" + res;
		}
		n /= 16;
	}
	return res;
}
int main()
{
	int n;
	cin >> n;
	int a[n + 9];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
//	insertionSort(a, n);
	for(int i = 0; i < n; i++)
	{
		cout << toHexa(a[i]) << " ";
	}
	cout << endl;
	return 0; 
}
