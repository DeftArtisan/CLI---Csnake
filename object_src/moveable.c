
#include <stdio.h> 
#include "grid_handle.h"
#include "moveable.h"





extern void __attribute__((no_inline)) _traversion(void (*_clb_relocate)(char16 _grid[12][100], struct _MOVEABLE_ _mvbl), void (*_populate_grid) (char16 _grid[12][100], struct _MOVEABLE_ _mbvl, const size_t _seed)) {
	  
}

extern void __attribute__((no_inline)) _trv_clb_r(struct _MOVEABLE_* _mvbl, char16 _grid[12][100]) {
			//bool _exf = false;
			//if(_exf && _dir_f == "L") {_exf = false; _is_dw_lf_down = false; _is_rowized = false;} 
			if(_exf && !(_dir_f != "L")) {_exf = false;}
			if(!_exf) _dir_prv = _dir_f;
			_dir_f = "R";
		  
			if(!(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) - 1] == '-')) {_is_rowized = false;}
			if (!_trv_b && _dir_prv == "L" && !(*(*(_exm + 0) + 0) == *(*(_exm + 1) + 0) && !_is_rowized) && !_is_dw_lf_down) {
				         if (!_exf) { size_t _tm = *(*(_exm + 0) + 1); size_t _pn = *(*(_exm + 0) + 0); 
				                    *(*(_exm + 0) + 0) = *(*(_exm + 1) + 0); *(*(_exm + 0) + 1) = *(*(_exm + 1) + 1); *(*(_exm + 1) + 0) = _pn; *(*(_exm + 1) + 1) = _tm; } 
				                     _exf = true; _trv_b = true; _DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '*';	
			                             *(*(_exm + 0) + 0) -= 1; _bvr_a = true; _is_dw_lf_down = true;} //escalation-request from up prv-left node
																																																																																															
			if (!(_DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1) + 1] != 'X')){
				_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '-';
				_DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1) += 1] = '-';
				_tl++;
				system("CLS");
				for (size_t a = 0; a < 20; ++a) {
					printf("\n");
				}

       	printf("\t\t\t\t\t\t   %s%s\n\n\n", _exclaimed_, _decor); printf("%s", _reset_);
			
			  _buff_render(_DECOR_);

				continue;

       }

			system("CLS");
			bool _traversed_dig = false;
			bool _exfoliate = false;
			bool _dw_l_r = false;
			int c = 0;
			int tr = 0;
			_direc_r = true;

      //add support for left-down request and its top clearance

			if(_bvr_a && (!(_DECOR_[*(*(_exm + 0) + 0) + 1][*(*(_exm + 0) + 1) - 1] != '-'))) {*(*(_exm + 0) + 0) += 1;} //determination of multi-tail flag for lprv + up
      
			if(!(_dir_prv != "L") && _exf && !(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) - 1] != '-') && !(*(*(_exm + 0) + 0) < *(*(_exm + 1) + 0))) {
				                  _is_rowized = true; 
				                  if(_bvr_a) {_bvr_a = false; _is_dw_lf_down = false;} 
			                          _DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '*'; *(*(_exm + 0) + 1) -= 1;} //escalation request prv-left + up / multi-tail s clearence
																																											 //
			if(!_exf && !(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) + 1] == '-') && !(*(*(_exm + 0) + 0) <= *(*(_exm + 1) + 0))) {(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '*'); 
				                    *(*(_exm + 0) + 0) -= 1; _exfoliate = true;}
			
			if (!_exf && !_exfoliate && !(_DECOR_[*(*(_exm + 0) + 0) + 1][*(*(_exm + 0) + 1)] != '-') && !(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] == '-') ) {*(*(_exm + 0) + 0) += 1;_traversed = true;}
                        if(! _exfoliate && !_traversed && !(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] != '-') && !(_DECOR_[*(*(_exm + 0) + 0) + 1][*(*(_exm + 0) + 1)] != '-')) {_traversed_dig = true; }
			
			_DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1) += 1] = '-';

			if(!(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] != '-') && _dir_prv == "L" && !(*(*(_exm + 0) + 0) < *(*(_exm + 1) + 0))) {_is_dw_lf_down = false;}
			if(!(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] != '-') && _dir_prv == "L" && !_is_rowized && !_is_dw_lf_down) {
			                 if(_bvr_a) {_bvr_a = false; _is_dw_lf_down = false; *(*(_exm + 0) + 0) += 1;} 
			                         _DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '*';*(*(_exm + 0) + 0) -= 1; _dw_l_r = true;}
			
			if(!_traversed_dig && _traversed) { _DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) - 1] = '*'; _traversed = false;} 
			else { 
				     if((!_exfoliate && !_exf) || (_is_dw_lf_down && !(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) - 1] == '-'))) 
				             {if (_bvr_a && _is_dw_lf_down) {_bvr_a = false;}_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '*'; 
			                    if(!_traversed_dig && !_exf) *(*(_exm + 0) + 1) += 1; 
			                           else { *(*(_exm + 0) + 0) += 1; _traversed_dig = false;  }  } } //dw traversion l prv/r prv supported
																																//TODO l prv-dw without top-clearence mend the undefined immediate overriding of a recently modified cell
     	                if(_is_dw_lf_down && !(_dir_prv != "L") && !(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) - 1] != '-')) {_bvr_a = false; _DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '*'; *(*(_exm + 0) + 1) -= 1;} //top-clearance for prv left/dw request
			
	                if ((!_is_rowized && _exf && _dir_prv == "L" && !(*(*(_exm + 0) + 0) != *(*(_exm + 1) + 0)))) {_exf = false; _is_dw_lf_down = false; _trv_b = false;} 

			for (size_t a = 0; a < 20; ++a) {
				printf("\n");
			}

			 printf("\t\t\t\t\t\t    %s%s\n\n\n", _exclaimed_, _decor); printf("%s", _reset_);	
			_buff_render(_DECOR_);
			_direc_down = false;

}

extern void __attribute__((no_return)) _trv_clb_l(struct _MOVEABLE_* _mvbl, char16 _grid[12][100]) {
  
			if(!_exf) {_dir_prv = _dir_f; _exf = true;} //re-synchronize to falsity prior to directional switch
			_dir_f = "L";
			
			//add directional-support
                         if((!(*(*(_exm + 0) + 1)) <= 0) && !(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) - 1] != 'X')) {
				    _DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) -= 1] = '-';
				    // printf("%d",*(*(_exm + 0) + 1));
				     _DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1)] = '-'; 

				   _tl++;
				  system("CLS");
				  for (size_t a = 0; a < 20; ++a) {
					  printf("\n");
			 	  }
				  printf("\t\t\t\t\t\t       %s%s\n\n\n", _exclaimed_, _defa); printf("%s", _reset_);
				//srand(time(NULL));
				//_DECOR_[rand() % 10][rand() % 10] = 'X';	
				  _buff_render(_DECOR_);
				
				continue; 
			}


                      system("CLS");

			bool _traversed_l_d = false;
			bool _trv_all = false;
			bool _clr_tl_d = false;
			bool _ltr_f = false;
			bool _trv_tp_clr_rprv = false;
			bool _trv_tp_clr_rprv_ldw = false;
			bool _trv_tp_clr_row = false;
			bool _trv_dw_prvl_row = false;
			bool _trv_dw_rgl = false;

			if(!(_DECOR_[*(*(_exm + 1) + 0) + 1][*(*(_exm + 1) + 1)] != '-') && !(*(*(_exm + 1) + 0) >= *(*(_exm + 0) + 0))) { _DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1)] = '*'; 
				                              *(*(_exm + 1) + 0) += 1; _trv_dw_prvl_row = true;}
			//prv l dw request top clearance
			if(!(_DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1) - 1] != '-') && !(*(*(_exm + 1) + 0) >= *(*(_exm + 0) + 0))) {_DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1)] = '*';*(*(_exm + 1) + 1) -= 1; 
				                              _trv_tp_clr_rprv_ldw = true;}

			if(!(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) + 1] != '-') && !(_dir_prv != "R") && !(*(*(_exm + 0) + 0) >= *(*(_exm + 1) + 0))) {_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '*'; 
				                              *(*(_exm + 0) + 1) += 1; _trv_tp_clr_rprv = true;}  

			if (!_trv_tp_clr_rprv && !_clr_tl_d && !(_DECOR_[*(*(_exm + 0) + 0) + 1][*(*(_exm + 0) + 1) - 1] != '-') && !(_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] != '-') && !(_dir_prv != "R")) {
				                              _DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1) -= 1] = '-'; *(*(_exm + 0) + 0) += 1;
							              _traversed_l_d = true;}//dynamic coordinate exchange
      
			if(!_clr_tl_d && !_traversed_l_d && (*(*(_exm + 0) + 0) == *(*(_exm + 1) + 0)) && !_trv_dw_prvl_row) {	_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) -= 1] = '-'; 
			                 _DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1)] = '*';	*(*(_exm + 1) + 1) -= 1;  b++; _ecm = 0;} //regular L traversion
			
			else {if(!_clr_tl_d && !_traversed_l_d && !_trv_all && !_ltr_f) { { 
				                        if(!_trv_tp_clr_rprv_ldw && !_trv_dw_prvl_row) _DECOR_[*(*(_exm + 1) + 0)][*(*(_exm + 1) + 1) -= 1] = '-'; 
				                              else { _DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1) -= 1] = '-';} 
						                      if(!_trv_tp_clr_rprv && !_trv_tp_clr_rprv_ldw && !_trv_dw_prvl_row) {_DECOR_[*(*(_exm + 0) + 0)][*(*(_exm + 0) + 1)] = '*'; 
					                                                                 *(*(_exm + 0) + 0) += 1 ;c = 2000;} } } 
			}
			//prv R bottom traversion
			if(_traversed_l_d)  { _DECOR_[*(*(_exm + 0) + 0) - 1][*(*(_exm + 0) + 1)] = '*'; _traversed_l_d = false; size_t _tm = *(*(_exm + 0) + 1); 
				                       *(*(_exm + 0) + 1) = *(*(_exm + 1) + 1); *(*(_exm + 1) + 1) = _tm; }
			 //actualized dynamic exchange
																//
		       for (size_t a = 0; a < 20; ++a) {
				printf("\n");
			}
      //_traversed_b = false;
			printf("\t\t\t\t\t\t    %s%s\n\n\n", _exclaimed_, _decor); printf("%s", _reset_);

			_buff_render(_DECOR_); 


}

extern void __attribute__((no_inline)) _trv_clb_d(struct _MOVEABLE_* _mvbl, char16 _grid[12][100]) {}

extern void __attribute__((no_inline)) _trv_clb_u(struct _MOVEABLE_* _mvbl, char16 _grid[12][100]) {}
