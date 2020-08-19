/* 
	Auther       : me
	Date         : 8/19/2020
	Question URL : "https://codeforces.com/group/RHiSEwu37t/contest/268108"
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
 
void process(int n)
{
	int arr[n];
	// input arr array data 
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	// sorting the arr array
	int size = sizeof(arr)/sizeof(arr[0]); 
	sort(arr, arr+size); 
	// output the result 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<" ";	
	}
}
 
int main()
{
	// n is number of col.
	int n;
	cin >> n;
	process(n);
	return 0;
}
