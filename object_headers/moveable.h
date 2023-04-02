#include <stdio.h> 
#include "definitive.h"
#include <Windows.h> 


typedef struct _MOVEABLE_{
   _ptr_int* _coord;
	 _ptr_char16 _direction;
	 _ptr_char16 _prv_direction;
	 _bool_ flg_state_of_row_indicator
	 _bool_ flg_state_of_multi_row_indicator
	 _bool_ flg_disable_premature_row_increment
};

//move to traversion handler
extern void __attribute__((no_inline)) _traversion(void (*_clb_relocate)(char_16[12][100] _grd, struct _MOVEABLE_ _mvbl), void (*_populate_grid) (char16[12][100], _grd, struct _MOVEABLE_ _mbvl, const size_t _seed)) {      

}
extern void __attribute__((no_inline)) _trv_clb_r(struct _MOVEABLE_* _mvbl, char16[12][100] _grd) {
    
}
extern void __attribute__((no_inline)) _trv_clb_l(struct _MOVEABLE_* _mvbl, char16[12][100] _grd) {
    
}
extern void __attribute__((no_inline)) _trv_clb_d(struct _MOVEABLE_* _mvbl, char16[12][100] _grd) {
    
}
extern void __attribute__((no_inline)) _trv_clb_u(struct _MOVEABLE_* _mvbl, char16[12][100] _grd) {
    
}

static _ptr_int* __attribute__((malloc))_init_fld_coord() {
	_ptr_int32* _exm = (_ptr_int32*)_allocative_(sizeof(_ptr_int32) * 2);
	for (size_t g = 0; g < 2; ++g) {
		*(_exm + g) = (_ptr_int32)_allocative_(sizeof(int) * 2);
		for (size_t a = 0; a < 2; ++a) {
			*(*(_exm + g) + a) = 0;
		}
	}

	return &(*_exm);
}

extern _MOVEABLE_* __attribute__((malloc)) _init_mvbl() {   
	_MOVEABLE_* _mvb_locale = (_MOVEABLE*) _allocative_(sizeof(struct _MOVEABLE_)); 
	_mvb_locale->_coord = _init_fld_coord();
	_pause_thread(200);
	return &(*_mvb_locale);
}
