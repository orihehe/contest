#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

long long n, t,minB;
vector<int> arr;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("B-small-attempt0.in", "r", stdin);
	string score;
	cin >> t;
	for (long long ca = 1; ca <= t; ca++) {
		cin >> n;
		cin >> score;
		arr.clear();
		arr.resize(n + 1);
		fill(arr.begin(), arr.end(), 0);
		long long le = score.size();
		minB = 0;
		for (long long i = 1; i <= le; i++) {
			arr[i] += arr[i-1] + score[i-1]-'0';
		}
		long long beauty=n/2;
		if (n % 2 == 1) beauty++;
		for (long long i = beauty; i <= le; i++) {
			if (arr[i]-arr[i - beauty] > minB) {
				minB = arr[i] - arr[i - beauty];
			}
		}

		printf("Case #%lld: %lld\n", ca, minB);
	}
	

	return 0;
}