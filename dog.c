#include<stdio.h>
int main(int argc, char *argv[]) {
	int i=0, status=0;
	while(++i < argc && !status)
		status = output_file(argv[i]);
	return status;
}

int output_file(char *filename) {
	const BUF_SIZE = 1000;
	char buf[BUF_SIZE];
	FILE *f;

	f = fopen(filename, "r");

	if(!f) return 1;

	while(fgets(buf, BUF_SIZE, f) != NULL) printf("%s", buf);

	fclose(f);
	return 0;
}

