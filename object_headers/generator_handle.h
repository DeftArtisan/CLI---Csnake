#include "definitive.h"
#include "moveable.h"
#include <stdio.h> 
#include <stdint.h> 
#include <assert.h>


typedef struct _GNR_D{ 
	 uint32_t seed_recep;
	 uint32_t m1_tm;
	 uint32_t m2_tm;
	 uint64_t tmp_recep;
}_GNR_D;

extern _ptr_char16 _handler_gen(struct _GNR_D* _genr, const char16[45][40] _grid, const struct _MOVEABLE_* _trg_obj) {
	 static_assert(_MOVEABLE_ && _GNR_D, "UNDEFINED");
}

static uint32_t __attribute__((no_inline)) _util_gener(struct _GNR_D* _genr) {
                 _genr->seed_recep += 0xe120fc15;
		 _genr->tmp_recep = (uint64_t)_genr->seed_recep * 0x4a39b70d;
		 _genr->m1_tm = (_genr->tmp_recep >> 32) ^ _genr->seed_recep;
		 _genr->tmp_recep = (uint64_t) _genr->m1_tm * 0x12fad5c9;
		 _genr->m2_tm = (_genr->tmp_recep >> 32) ^ _genr->tmp_recep;
		 
		 return _genr->m2_tm;
}
