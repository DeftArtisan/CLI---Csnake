#ifndef GENERATOR_R_H
#define GENERATOR_R_H
#endif

#include "definitive.h"
#include "moveable.h"
#include <stdio.h> 
#include <stdint.h> 
#include <assert.h>
#include <stdlib.h>

typedef struct _GNR_D{ 
	 
	union{
          uint32_t seed_recep;
	  uint32_t m1_tm;
	  uint32_t m2_tm;
	  uint64_t tmp_recep;
	 };

}_GNR_D;

extern uint32_t __attribute__((no_inline)) _util_gener(struct _GNR_D* _genr, const uint32_t seed);

extern uint32_t* _handler_gen(struct _GNR_D* _genr, const char16 _grid[45][40], const struct _MOVEABLE_* _trg_obj);

