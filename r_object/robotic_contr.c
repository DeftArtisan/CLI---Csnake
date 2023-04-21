#ifndef ROBOTIC_CONTR_H
#define ROBOTIC_CONTR_H
#endif

#include <stdio.h>
#include "definitive.h"
#include "generator_r.h"


typedef struct _RBT_CTR_{
    struct _GNR_D* _gener_dr;
		_ptr_int32* _coord_tgbl;
		_bool_ _init_;
}_RBT_CTR_;


extern void _buff_render(char16 _DECOR_[12][100]){
 
system("CLS");

for (size_t g = 0; g < 12; ++g) {
		 for (size_t b = 0; b < 6; ++b) {
				printf("\t");
					for (size_t a = 0; b >= 5 && a < 24; ++a) {
						 if (_DECOR_[g][a] == '-') {
								printf("%s", _actorPL);
							}
							printf("%c", _DECOR_[g][a]);
							if (a >= 23) {
								printf("\n");
							}
							printf("%s", _reset_);
					}
				}
			}
}

extern void __attribute__((malloc)) _in_fld_coord(struct _RBT_CTR_* _rbt_ctr) {
	
	_rbt_ctr->_init_ = true;
	_ptr_int32* _exm = (_ptr_int32*)_allocative_(sizeof(_ptr_int32) * 2);
	for (size_t g = 0; g < 2; ++g) {
		*(_exm + g) = (_ptr_int32)_allocative_(sizeof(int) * 2);
		for (size_t a = 0; a < 2; ++a) {
			*(*(_exm + g) + a) = 0;
		}
	}
	_rbt_ctr->_coord_tgbl = &(*_exm);
}


extern void __attribute__((no_inline)) _nav_rb_handle(struct _RBT_CTR_* _RBT_CTR, char16 _DECOR_[12][100]) {
	   //delineate optimal path to collectible using head-root and index each optimal index for row-traversion as to actualize the organic movement(the row-switch will occur contiguously once coinciding with the respective index by the provided structure containing the gathered coordinates) whilst preventing self-consumption if applicable since you *could* emulate fallability sporadically
		 //identical rows - employ bi-directional linear collection
		 //differing rows(lesser origin) - bi-directionally determine weak-informed-intuitive path/ averting self-obstruction if the partial row-length pertaining to the obstructive row exceeeds head-root path up until collision, circumvent by opting for a lenghtier materializable path
		 //multi-obstructive rows -> sequentially calculate each collision
		 //tail-movement self-coordinated until it superimposes upon the the provided head-root path
		 //bigger origin differing rows -> shortest accessible without any anti-obstructive coordination

char16 _grid[12][100] = {
	  {'-','-', '-', '-', '-','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', 'X','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	  {'*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*','*','*', '*', '*', '*','*', '*', '*', '*','*', '*', '*'},
	};

	for (size_t a = 0; a < 20; ++a) {
		printf("\n");
	}

	_ptr_char16 _defa = "{ROTATIVE}";
	_ptr_char16 _decor = "{TRAVERSING..}";
	_ptr_char16 _acti = "{?}";

	printf("\t\t\t\t\t\t\t  %s\n\n\n", _acti);

	/*
	
	for (size_t g = 0; g < 12; ++g) {
		for (size_t b = 0; b < 6; ++b) {
			printf("\t");
			for (size_t a = 0; b >= 5 && a < 24; ++a) {
				printf("%c", _DECOR_[g][a]);
				if (a >= 23) {
				    printf("\n");
				}
			}
		}
	}
	*/
	_buff_render(_grid);
  _in_fld_coord(_RBT_CTR);

	*(*(_RBT_CTR->_coord_tgbl + 1) + 0) = 0;
	*(*(_RBT_CTR->_coord_tgbl + 1) + 1) = 4;
	*(*(_RBT_CTR->_coord_tgbl + 0) + 1) = 0;
	*(*(_RBT_CTR->_coord_tgbl + 0) + 0) = 0;
	

	while(!(_get_async_key_state_win(VK_ESCAPE))) {
		 _pause_thread(100); 
          
		 //if(!((*(*(_RBT_CTR->_coord_tgbl + 1) + 1) == 4)) && _RBT_CTR->_init_) {_grid[*(*(_RBT_CTR->_coord_tgbl + 1) + 0)][*(*(_RBT_CTR->_coord_tgbl + 1) + 1) += 1] = '-';
											           //_grid[*(*(_RBT_CTR->_coord_tgbl + 0) + 0)][*(*(_RBT_CTR->_coord_tgbl + 0) + 1)] = '*'; *(*(_RBT_CTR->_coord_tgbl + 0) + 1) += 1; _buff_render(_grid); _pause_thread(300); continue; }

		  _bool_ bi_dir_v = *(*(_RBT_CTR->_coord_tgbl + 1) + 1) > 4 ? false : true;
			if(bi_dir_v) {
				_RBT_CTR->_init_ = false;
				//dw-left
                               if(!(*(*(_RBT_CTR->_coord_tgbl + 1) + 1) < 4)) {
					     //fprintf(stderr, "inaccessible");
							 //replace the experimentative arguments for generic
			             while(!(*(*(_RBT_CTR->_coord_tgbl + 1) + 1) != 4) && !(_grid[7][4] != '*')) { 
						_bool_ _dissector = false;

			                      if(!(*(*(_RBT_CTR->_coord_tgbl+ 1) + 2) <= _min_all) && !(_grid[*(*(_RBT_CTR->_coord_tgbl + 0) + 0)][*(*(_RBT_CTR->_coord_tgbl + 0) + 1) + 1] != '-')){
							_grid[*(*(_RBT_CTR->_coord_tgbl + 0) + 0)][*(*(_RBT_CTR->_coord_tgbl+ 0) + 1)] = '*'; *(*(_RBT_CTR->_coord_tgbl + 0) + 1) += 1; 
													
								if(!(*(*(_RBT_CTR->_coord_tgbl + 1) + 0) == 7) && !(*(*(_RBT_CTR->_coord_tgbl + 1) + 1) != 4)) 
									{_grid[*(*(_RBT_CTR->_coord_tgbl+ 1) + 0) += 1][*(*(_RBT_CTR->_coord_tgbl + 1) + 1)] = 'B';}
						                               _dissector = true; _buff_render(_grid); _pause_thread(300);}
								    
					       if(!_dissector && !(_grid[*(*(_RBT_CTR->_coord_tgbl+ 0) + 0) + 1][*(*(_RBT_CTR->_coord_tgbl + 0) + 1)] != '-')) { _grid[*(*(_RBT_CTR->_coord_tgbl + 0) + 0)][*(*(_RBT_CTR->_coord_tgbl+ 0) + 1)] = '*'; 
											                *(*(_RBT_CTR->_coord_tgbl + 0) + 0) += 1; 
                                                                  if(!(*(*(_RBT_CTR->_coord_tgbl+ 0) + 1) == 7)) { _grid[*(*(_RBT_CTR->_coord_tgbl+ 1) + 0) += 1][*(*(_RBT_CTR->_coord_tgbl + 1) + 1)] = '-';}
										          _buff_render(_grid); _pause_thread(300);
									     }

                                                 if(!(*(*(_RBT_CTR->_coord_tgbl + 1) + 0) != 7)) {
							    _grid[*(*(_RBT_CTR->_coord_tgbl + 1) + 0)][*(*(_RBT_CTR->_coord_tgbl + 1) + 1) -= 1] = '-';
							            if(!(_grid[*(*(_RBT_CTR->_coord_tgbl + 0) + 0)][*(*(_RBT_CTR->_coord_tgbl + 0) + 1) - 1] != '-')) {
										  _grid[*(*(_RBT_CTR->_coord_tgbl + 0) + 0)][*(*(_RBT_CTR->_coord_tgbl+ 0) + 1)] = '*'; 
										  *(*(_RBT_CTR->_coord_tgbl + 0) + 1) -= 1;}
									          _buff_render(_grid); _pause_thread(100);	
										} 
						   
							}

                                         _grid[*(*(_RBT_CTR->_coord_tgbl + 0) + 0)][*(*(_RBT_CTR->_coord_tgbl+ 0) + 1)] = '-';
				         _grid[*(*(_RBT_CTR->_coord_tgbl + 1) + 0)][*(*(_RBT_CTR->_coord_tgbl + 1) + 1)] = '-';

			}
    
	}

  }

}
