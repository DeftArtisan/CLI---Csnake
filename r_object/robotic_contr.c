#include <stdio.h>
#include "definitive.h"
#include "generator_r.h"


extern void __attribute__((no_inline)) _nav_rb_handle(struct _RBT_CTR_* _RBT_CTR, char16 _DECOR_[12][100]) {
	   /*
	    delineate optimal path to collectible using head-root and index each optimal index for row-traversion as to actualize the organic movement(the row-switch will occur contiguously once coinciding with the respective index by the provided structure containing the gathered coordinates) 
	    whilst preventing self-consumption if applicable since you *could* emulate fallability sporadically
            identical rows - employ bi-directional linear collection
	    differing rows(lesser origin) - bi-directionally determine weak-informed-intuitive path/ averting self-obstruction if the partial row-length pertaining to the obstructive row exceeeds head-root path up until collision, circumvent by opting for a lenghtier materializable path
	    multi-obstructive rows -> sequentially calculate each collision
	    tail-movement self-coordinated until it superimposes upon the the provided head-root path
	    bigger origin differing rows -> shortest accessible without any anti-obstructive coordination
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
				_RBT_CTR->_dispatched_ = false;
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
