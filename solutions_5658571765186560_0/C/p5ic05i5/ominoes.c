#include <stdio.h>

int w[4][4][4] = {
	{
		{1, 1, 1, 1},
		{1, 1, 1, 1},
		{1, 1, 1, 1},
		{1, 1, 1, 1},
	},
	{
		{0, 1, 0, 1},
		{1, 1, 1, 1},
		{0, 1, 0, 1},
		{1, 1, 1, 1},
	},
	{
		{0, 0, 0, 0},
		{0, 0, 1, 0},
		{0, 1, 1, 1},
		{0, 0, 1, 0},
	},
	{
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 1},
		{0, 0, 1, 1},
	},
};

int main() {
	int t, X, R, C, x = 1;
	scanf("%d\n", &t);
	while (t--) {
		scanf("%d %d %d\n", &X, &R, &C);
		printf("Case #%d: %s\n", x++, w[X-1][R-1][C-1] ? "GABRIEL" : "RICHARD");
	}
	return 0;
}