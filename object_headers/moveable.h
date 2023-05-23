#ifndef MOVEABLE_H
#define MOVEABLE_H
#endif

#include <stdio.h> 
#include "definitive.h" 

enum _designation_crd {
	 M_VK_LEFT,
	 M_VK_RIGHT,
	 M_VK_UP,
	 M_VK_DOWN
};

typedef struct _MOVEABLE_{
	 enum _designation_crd _design_crd;
   _ptr_int32* _coord;
	 _ptr_char16 _direction;
	 _ptr_char16 _prv_direction;
	 _bool_ _trv_r_reenabled;
	 _bool_ _trv_exf;
	 _bool_ _trv_exf_dis;
	 _bool_ flg_state_of_row_indicator;
	 _bool_ flg_state_of_mlt_r;
	 _bool_ flg_disable_prem_r;
	 _bool_ flg_ena_mlt;
	 _bool_ _dyn_exch_l;
}_MOVEABLE_;


extern _ptr_int32* __attribute__((malloc))_init_fld_coord();

extern void __attribute__((no_inline)) _mbvl_res(struct _MOVEABLE_* _moveb_);

extern void __attribute__((no_inline)) _traversion(struct _MOVEABLE_* _mbvl, const size_t _seed, char16 _grid[12][24]);

extern _bool_ __attribute__((no_inline)) _trv_clb_r(struct _MOVEABLE_* _mvbl, char16 _grid[12][24]);

extern _bool_ __attribute__((no_inline)) _trv_clb_l(struct _MOVEABLE_* _mvbl, char16 _grid[12][24]);

extern _bool_ __attribute__((no_inline)) _trv_clb_d(struct _MOVEABLE_* _mvbl, char16 _grid[12][24]);

extern _bool_ __attribute__((no_inline)) _trv_clb_u(struct _MOVEABLE_* _mvbl, char16 _grid[12][24]);

extern void _deallocative_mbvl(struct _MOVEABLE_* _mbvl);

extern struct _MOVEABLE_* __attribute__((malloc)) _init_mvbl();
