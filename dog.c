#include<stdio.h>
int main(int argc, char *argv[]) {
	int i;
	for(i=1; i<argc; ++i) {
		output_file(argv[i]);
	}
}

int output_file(char *filename) {
	const BUF_SIZE = 1000;
	char buf[BUF_SIZE];
	FILE *f;

	printf("---\noutput_file: %s\n\n", filename);

	f = fopen(filename, "r");

	if(!f) return 1;

	while(fgets(buf, BUF_SIZE, f) != NULL) printf("%s", buf);

	fclose(f);
	return 0;
}

