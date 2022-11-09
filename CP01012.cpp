#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;
  while(test--)
  {
    int n;
    cin >> n;
    long long a[n + 9];
    for(long long i = 0; i < n; i++)
    {
      cin >> a[i];
      a[i] = a[i] * a[i];
    }
    sort(a, a + n);
    bool check = false;
    for(int i = n - 1; i >= 2; i--)
    {
    	long long left = 0, right = i - 1;
    	while(left < right)
    	{
    			if(a[i] == a[left] + a[right])
    		{
    			check = true;
    			break;
			}
			else if(a[i] < a[left] + a[right])
			{
				right--;
			}
			else
			{
				left++;
			}
		}
    	
	}
    if(check)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}
