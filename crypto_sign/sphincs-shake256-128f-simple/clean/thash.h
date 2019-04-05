#ifndef SPX_THASH_H
#define SPX_THASH_H

#include <stdint.h>

void PQCLEAN_SPHINCSSHAKE256128FSIMPLE_CLEAN_thash(
    unsigned char *out, const unsigned char *in, unsigned int inblocks,
    const unsigned char *pub_seed, uint32_t addr[8]);

#endif
