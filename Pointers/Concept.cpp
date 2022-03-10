#include <bits/stdc++.h>
using namespace std;

bool perfectCube(int N)
{
	int cube_root;
	cube_root = (int)round(pow(N, 1.0 / 3.0));
	if (cube_root * cube_root * cube_root == N) {
		return true;
	}

	return false;
}

void countSubarrays(int a[], int n)
{
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int prod = 1;
		for (int j = i; j < n; j++) {

			prod = prod * a[j];
			if (perfectCube(prod))
				ans++;
		}
	}

	cout << ans <<endl;;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

	countSubarrays(arr, n);

	return 0;
}
