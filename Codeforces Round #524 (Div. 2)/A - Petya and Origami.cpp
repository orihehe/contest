#include <cstdio>
using namespace std;

int main() {
	int n, k, cnt = 0;
	scanf("%d %d", &n, &k);
	cnt += (2 * n + k - 1) / k;
	cnt += (5 * n + k - 1) / k;
	cnt += (8 * n + k - 1) / k;
	printf("%d", cnt);

	return 0;
}