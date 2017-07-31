#include "fastq_pair.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc < 3) {
        printf("%s [options] [fastq file 1] [fastq file 2]\n", argv[0]);
        exit(0);
    }

    int success = pair_files(argv[1], argv[2]);

    return success;
}