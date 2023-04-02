#pragma once
#pragma warning(disable:6011)
#pragma warning(disable:6308)
#pragma warning(disable:28182)
#ifndef  SRC_LINKED_LISt_H_
#define SRC_LINKED_LIST_H_
#endif 

#include "definitive.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

typedef enum SRT {B_K, B_V};


 typedef struct hash_map {
	_generic _node_l;
	__generic _dimensio_ptr;
	size_t cont_capac;
	size_t _sz_d;
}hash_map;


extern hash_map*  _allocative_linl(size_t init_cap);

extern inline void _deallocative_linl(struct hash_map* _receptive);

extern inline _generic _elm_removal(struct hash_map* _receptive, _generic _elm);

extern inline _bool_ _opt_srt(struct hash_map* _receptive, enum SRT _srt);

extern inline _bool_ put_contiguous(struct hash_map* _receptive, _generic genic_i, _generic mapped_inp);
