#include "generator_r.h"
#include <stdlib.h>
#include <assert.h>



extern uint32_t __attribute__((no_inline)) _util_gener(struct _GNR_D* _genr, const uint32_t seed) {
                 _genr->seed_recep = seed;
	         _genr->seed_recep += 0xe120fc15;
		 _genr->tmp_recep = (uint64_t)_genr->seed_recep * 0x4a39b70d;
		 _genr->m1_tm = (_genr->tmp_recep >> 32) ^ _genr->seed_recep;
		 _genr->tmp_recep = (uint64_t) _genr->m1_tm * 0x12fad5c9;
		 _genr->m2_tm = (_genr->tmp_recep >> 32) ^ _genr->tmp_recep;
		 
		 return _genr->m2_tm;
}

extern uint32_t* _handler_gen(struct _GNR_D* _genr, const char16 _grid[45][40], const struct _MOVEABLE_* _trg_obj) {
	 assert(_trg_obj != NULL && _genr != NULL);
	 uint32_t* _contr_r = (uint32_t*) _allocative_(sizeof(uint32_t) * 2);
	 *(_contr_r + 0) = _util_gener(_genr, 40);
	 _bool_ _dissective_ = false;
	 _dissective_ = *(*(_trg_obj->_coord + 0) + 1) > *(*(_trg_obj->_coord + 1) + 1) ? 
		                               !(*(_contr_r + 1) > (uint32_t) *(*(_trg_obj->_coord + 0) + 1) || *(_contr_r + 1) < (uint32_t)*(*(_trg_obj->_coord + 1) + 1)) :  
					       !(*(_contr_r + 1) < (uint32_t) *(*(_trg_obj->_coord + 0) + 1) || *(_contr_r + 1) > (uint32_t) *(*(_trg_obj->_coord + 1) + 1));

	 while(_dissective_) { 
			*(_contr_r + 1) = _util_gener(_genr, 45);
	 }
	 
	 return _contr_r;
}

