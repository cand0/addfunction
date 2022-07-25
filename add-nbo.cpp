#include <arpa/inet.h>
#include <stdio.h>
#include <stdint.h>
#include "add.h"

int main(int argc, char* argv[]){

	uint32_t buffer1 = 0;
	uint32_t buffer2 = 0;
	uint32_t result = 0;

	if(argc != 3){
		printf("Syntax : ./add-nbo <File1> <File2> \n");
		return 1;
	}

	FILE *fp1 = fopen(argv[1], "rb");
	FILE *fp2 = fopen(argv[2], "rb");

	fread(&buffer1, sizeof(int), 4, fp1);
	fread(&buffer2, sizeof(int), 4, fp2);

	result = add(buffer1, buffer2);
	printf("%d(%x) + %d(%x) = %d(%x) \n", ntohl(buffer1), ntohl(buffer1), ntohl(buffer2), ntohl(buffer2), result, result);

	return 0;
}
