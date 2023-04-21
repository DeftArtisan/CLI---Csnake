#ifndef ROBOTIC_CONTR_H
#define ROBOT_CONTR_H

#include <stdio.h>
#include "definitive.h"
#include "generator_r.h"
#include "grid_handle.h"


typedef struct _RBT_CTR_{
    struct _GNR_D* _gener_dr;
		_ptr_int32* _coord_tgbl;
		_bool_ _init_;
}_RBT_CTR_;

extern void __attribute__((no_inline)) _nav_rb_handle(struct _RBT_CTR_* _RBT_CTR, char16 _DECOR_[12][100]);


#endif
