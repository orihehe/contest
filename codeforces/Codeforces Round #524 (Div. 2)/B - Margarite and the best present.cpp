
#include <cstdio>
using namespace std;

int main() {
	int q, a, b;
	scanf("%d", &q);

	while (q--) {
		scanf("%d %d", &a, &b);
		if (a % 2 == 1) {
			if (b % 2 == 1) {
				printf("%d\n", (b - a + 1) / 2 - b);
			}
			else {
				printf("%d\n", (b - a + 1) / 2);
			}
		}
		else {
			if (b % 2 == 1) {
				printf("%d\n", -(b - a + 1) / 2);
			}
			else {
				printf("%d\n", -(b - a + 1) / 2 + b);
			}
		}
	}

	return 0;
}