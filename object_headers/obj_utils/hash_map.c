#include "definitive.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include "hash_map.h"

extern hash_map*  _allocative_linl(size_t init_cap) {
	hash_map* receptive_v = (hash_map*)_allocative_(sizeof(hash_map*) * 10);
	_assert_(receptive_v != NULL);
	if (!(init_cap <= _min_all)) { (__ptr_char16) receptive_v->_dimensio_ptr = (__ptr_char16)_allocative_(sizeof(_ptr_char16) * init_cap); receptive_v->_sz_d = 0; receptive_v->_node_l = NULL; receptive_v->cont_capac = init_cap; }
	for (size_t d = 0; d < init_cap; ++d) { *(_ptr_char16)(receptive_v->_dimensio_ptr + d) = (_ptr_char16)_allocative_(sizeof(char16) * 10);};
	return &(*receptive_v);
}

extern inline void _deallocative_linl(struct hash_map* _receptive) {
	_assert_(!(_receptive == NULL) && !(_receptive->_dimensio_ptr == NULL));
	for (size_t s = 0; s < _receptive->_sz_d; ++s) { _deallocative_(*(__ptr_char16)_receptive->_dimensio_ptr + s); }
	_deallocative_(_receptive);
}

static inline _bool_ _precedence_factr(_generic facti_i, _generic _decor_m) {
	return strlen((_ptr_char16)(facti_i)) > strlen((_ptr_char16)(_decor_m));
}

extern inline _generic _elm_removal(struct hash_map* _receptive, _generic _elm) {return NULL;}

extern inline _bool_ _opt_srt(struct hash_map* _receptive, enum SRT _srt) {
	switch (_srt) {
	case 0:
		FACILITY_K(_receptive);
		break;
	case 1:
		FACILITY_V(_receptive);
		break;
	default:
		return false;
	}

	return true;
}

extern inline _bool_ put_contiguous(struct hash_map* _receptive, _generic genic_i, _generic mapped_inp) {
	_assert_(!(_receptive == NULL) && !(_receptive->_dimensio_ptr == NULL) && !(genic_i == NULL) && !(mapped_inp == NULL));
	register size_t _decal = 0;
  
	for (size_t n_r = 0, b_nt = 0; true; ++n_r) {
		if ((*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + n_r)) + 1) == *((_ptr_char16)(genic_i) + 0))) {
			while (!((*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + n_r)) + b_nt) != *((_ptr_char16)(genic_i) + b_nt)))) {
				if (!((*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + n_r)) + b_nt) != '!'))) {
					register size_t enc_r = strlen((*(_ptr_char16)_receptive->_dimensio_ptr + n_r));
					*(__ptr_char16)(_receptive->_dimensio_ptr + n_r) = (_ptr_char16)_reallocative_((*(_ptr_char16)_receptive->_dimensio_ptr + n_r), strlen((_ptr_char16)mapped_inp) + _min_linl);
					for (size_t de_v = enc_r + strlen((__ptr_char16)(mapped_inp)) + _min_linl, b_cnt = 0; true; de_v++, ++b_cnt) {
						if (de_v == strlen((_ptr_char16)mapped_inp) + _min_linl + enc_r) { (*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _decal)) + de_v)) = '!'; break; }
						*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _decal)) + de_v) = *((_ptr_char16)mapped_inp + b_cnt);
					}
					break;
				}
				b_nt++;
			}
		}
		break;
	}

	while (!(_decal > _receptive->_sz_d) && !(*(__ptr_char16)(_receptive->_dimensio_ptr + _decal) == '0')) { _decal++; } 
	_decal--; //decrementation to match inclusivity of indexication 

	if (!(_receptive->cont_capac >= _receptive->_sz_d)) { (__ptr_char16)_receptive->_dimensio_ptr = (__ptr_char16)_reallocative_((__ptr_char16)_receptive->_dimensio_ptr, _receptive->_sz_d * 2); _decal++; _receptive->cont_capac *= 2;} //_decal cnt incremented to account for the re-sizing
	bool apparative = false;


	//novel insertion
	for (size_t de_r = 0; true; ++de_r) {

		 *(__ptr_char16)(_receptive->_dimensio_ptr + _decal ) = (__ptr_char16)_allocative_(sizeof(_ptr_char16) * strlen((_ptr_char16)genic_i) + 1);
		 for (size_t de_n = 0; de_n < strlen((_ptr_char16)genic_i) + 1; ++de_n) {
			 if (de_n == strlen((_ptr_char16)genic_i)) { *(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _decal)) + de_n) = '!'; apparative = true; }
			 else { *(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _decal)) + de_n) = *((_ptr_char16)genic_i + de_n); }
			 
			 if (apparative){
			     _receptive->_sz_d++;
				 for (size_t de_x = 0; true; ++de_x) {	
					 if (*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _decal)) + de_x) == '!' || *(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _decal)) + de_x) == '/0') {
						 *(__ptr_char16)(_receptive->_dimensio_ptr + _decal) = (_ptr_char16)_reallocative_(*(__ptr_char16)(_receptive->_dimensio_ptr + _decal), strlen((_ptr_char16)mapped_inp) + 1); // mapped //separator/returned length might be exclusive of unoccupied cells
						 for (size_t de_v = strlen((__ptr_char16)(genic_i)) + 1, b_cnt = 0; true; de_v++, ++b_cnt) {
							 if (de_v == strlen((_ptr_char16)mapped_inp) + _min_linl + strlen((__ptr_char16)(genic_i))) { (*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _decal)) + de_v)) = '!'; break; }
							 *(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _decal)) + de_v) = *((_ptr_char16)mapped_inp + b_cnt);
						 }
						 break;
					 }
				 }
				 break;
			
		     }
			    
			}

		break;
	}


	return true;
}
