#include <cstdio>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
using namespace std;

int main() {
	int n, k, minus = 0, x;
	scanf("%d %d", &n, &k);
	priority_queue<int, vector<int>, greater<int>> pq;
	while (n--) {
		scanf("%d", &x);
		pq.push(x);
	}
	while (k--) {
		while (!pq.empty()) {
			if (pq.top() - minus == 0) {
				pq.pop();
			}
			else {
				break;
			}
		}
		if (pq.empty()) printf("0\n");
		else {
			printf("%d\n", pq.top() - minus);
			minus += pq.top() - minus;
			pq.pop();
		}
	}

	return 0;
}