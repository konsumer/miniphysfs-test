#include <stdio.h>
#include "miniphysfs.h"

int main(int argc, char **argv) {
    if(!PHYSFS_init(argv[0])) {
        printf("PhysFS initialization failed: %s\n", PHYSFS_getErrorByCode(PHYSFS_getLastErrorCode()));
        return -1;
    }
    /* your PhysFS logic here */
    PHYSFS_deinit();
    return 0;
}