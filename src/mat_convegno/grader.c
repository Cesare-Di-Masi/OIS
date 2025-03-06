#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

static FILE *fr, *fw;

// Declaring variables
static int N;
static int* C;
static int res;

// Declaring functions
int coppie(int N, int* C);

int main() {
	fr = stdin;
	fw = stdout;

	// Reading input
	fscanf(fr, " %d", &N);
	C = (int*)malloc((N) * sizeof(int));
	for (int i0 = 0; i0 < N; i0++) {
		fscanf(fr, " %d", &C[i0]);
	}

	// Calling functions
	res = coppie(N, C);

	// Writing output
	fprintf(fw, "%d\n", res);

	fclose(fr);
	fclose(fw);
	return 0;
}
