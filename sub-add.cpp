#include <stdint.h>
#include <arpa/inet.h>
#include "add.h"

int add(uint32_t First, uint32_t Second){
        return ntohl(First) + ntohl(Second);
}
