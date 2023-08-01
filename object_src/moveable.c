#include <stdio.h>
#include "moveable.h"
#include "util_gr"

extern void __attribute__((no_inline)) _traversion( struct _MOVEABLE_* _mbvl, const size_t seed, char16 _grid[12][24]) { 
	  _assert_(_mbvl != NULL);
	  _buff_render(_grid);
		
	   while(!_get_async_key_state_win(VK_ESCAPE)) {
	         if(_get_async_key_state_win(VK_RIGHT)) {_trv_clb_r(_mbvl, _grid); _pause_thread(200);}
		 else if(_get_async_key_state_win(VK_LEFT)) {_pause_thread(200); _trv_clb_l(_mbvl, _grid);}
                 else if(_get_async_key_state_win(VK_UP)) {_pause_thread(200);_trv_clb_u(_mbvl, _grid);}
                 else if(_get_async_key_state_win(VK_DOWN)) {_pause_thread(200); _trv_clb_d(_mbvl, _grid);}
	  }
}

extern _bool_ _cmp_str(_ptr_char16 _n1, _ptr_char16 _n2) {return (*(_ptr_char16)(_n1)) == (*(_ptr_char16)(_n2));}

_bool_ __attribute__((no_inline)) _trv_clb_r(struct _MOVEABLE_* _mvbl, char16 _grid[12][24]) {
      
	    _mvbl->_trv_r_reenabled = true;
			//bool _exf = false;
			//if(_exf && _mvbl->_direction == "L") {_exf = false; _mvbl->flg_state_of_mlt_r = false; _is_rowized = false;} 

			//TODO handle the dynamic exchange's(for both directions) incompletion(e.g avoided trigger-point) since procures inconsistency in coordination 
	    if(_mvbl->_trv_exf && _cmp_str(_mvbl->_direction,  "L")) { _mvbl->_trv_exf = false; _mvbl->_trv_exf_dis = true;}
	    if(!_mvbl->_trv_exf && _mvbl->_trv_exf_dis) {_mvbl->_prv_direction = _mvbl->_direction; _mvbl->_trv_exf_dis = false;}

	   _mvbl->_direction = "R";
		  
	if (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] == '-')) { _mvbl->flg_state_of_row_indicator = false;}

	if (!_mvbl->flg_ena_mlt && _cmp_str(_mvbl->_prv_direction, "L") && !_mvbl->flg_state_of_row_indicator && !_mvbl->flg_state_of_mlt_r) {
		if (!_mvbl->_trv_exf) { size_t _tm = _mvbl->_coord[0][1]; size_t _pn = _mvbl->_coord[0][0]; _mvbl->_coord[0][0] = _mvbl->_coord[1][0];
			_mvbl->_coord[0][1] = _mvbl->_coord[1][1]; _mvbl->_coord[1][0] = _pn; _mvbl->_coord[1][1] = _tm; }
		_mvbl->_trv_exf = true; _mvbl->flg_disable_prem_r = true;
		_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*'; _mvbl->_coord[0][0] -= 1; _mvbl->flg_ena_mlt = true;
		_mvbl->flg_state_of_mlt_r = true; _mvbl->_dyn_exch_l = false; }

	if (!(_grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] + 1] != 'X')) {
		_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '-';
		_grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] += 1] = '-';
		system("CLS");
		for (size_t a = 0; a < 20; ++a) {
			printf("\n");
		}

		_buff_render(_grid);

		return false;
	}

	system("CLS");
	bool _traversed_dig = false;
	bool _traversed = false;
	bool _exfoliate = false;
	bool _dw_l_r = false;
	bool _trv_r_non_dyn = false;
	///$WinREAgent_direc_r = true;
	//char* _g = " ";

	//add support for left-down request and its top clearance

	if (_mvbl->flg_disable_prem_r && (!(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1] - 1] != '-')) && _mvbl->_trv_exf) { _mvbl->_coord[0][0] += 1;}
	
	if (_cmp_str(_mvbl->_prv_direction, "L") && _mvbl->_trv_exf && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-') &&
		(!(_mvbl->_coord[0][0] < _mvbl->_coord[1][0]) || !(_mvbl->_coord[0][0] > _mvbl->_coord[1][0]))) {
		_mvbl->flg_state_of_row_indicator = true;
		if (_mvbl->flg_disable_prem_r
	

      //add support for left-down request and its top clearance

    

        if (_mvbl->flg_disable_prem_r && (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-')) && _mvbl->_trv_exf) {
    _mvbl->_coord[0][0] += 1;
} //determination of multi-tail flag for lprv + up

        if (_mvbl->flg_disable_prem_r && (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-')) && _mvbl->_trv_exf) {
                _mvbl->_coord[0][0] += 1;
        }         //determination of multi-tail flag for lprv + up

        if (_cmp_str(_mvbl->_prv_direction, "L") && _mvbl->_trv_exf && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-') &&
                (!(_mvbl->_coord[0][0] < _mvbl->_coord[1][0]) || !(_mvbl->_coord[0][0] > _mvbl->_coord[1][0]))) {
                _mvbl->flg_state_of_row_indicator = true;
                if (_mvbl->flg_disable_prem_r) {
                        _mvbl->flg_disable_prem_r = false;
                        _mvbl->flg_state_of_mlt_r = false;
                }
                _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
                _mvbl->_coord[0][1] -= 1;
        }     //escalation request prv-left + up / multi-tail s clearence

        if (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] != '-') && _cmp_str(_mvbl->_prv_direction, "L") &&
                !(_mvbl->_coord[0][0] < _mvbl->_coord[1][0])) {
                _mvbl->flg_state_of_mlt_r = false;
        }

        if (!(_grid[_mvbl->_coord[0][0] - 1][_mvbl->_coord[0][1]] != '-') && _cmp_str(_mvbl->_prv_direction, "L") &&
                _mvbl->flg_state_of_row_indicator && !_mvbl->flg_state_of_mlt_r && !_trv_r_non_dyn) {
                if (_mvbl->flg_disable_prem_r) {
                        _mvbl->flg_disable_prem_r = false;
                        _mvbl->flg_state_of_mlt_r = false;
                        _mvbl->_coord[0][0] += 1;
                }
                _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
                _mvbl->_coord[0][0] -= 1;
                _dw_l_r = true;
        }

        if (!_dw_l_r && !_mvbl->_trv_exf && !_trv_r_non_dyn && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] + 1] == '-') &&
                !(_mvbl->_coord[0][0] <= _mvbl->_coord[1][0])) {
                (_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*');
                _mvbl->_coord[0][0] -= 1;
                _exfoliate = true;
        }

        if (!_mvbl->_trv_exf && !_exfoliate && !(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] != '-') &&
                !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] == '-') && !_trv_r_non_dyn) {
                _mvbl->_coord[0][0] += 1;
                _traversed = true;
        }

        if (!_exfoliate && !_traversed && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] != '-') &&
                !(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] != '-')) {
                _traversed_dig = true;
        }

        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] + 1] = '-';

        if (!_traversed_dig && _traversed) {
                _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] = '*';
                _traversed = false;
        } else {
                if (!_trv_r_non_dyn && !_dw_l_r && ((!_exfoliate && !_mvbl->flg_state_of_row_indicator) ||
                        (_mvbl->flg_state_of_mlt_r && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] == '-')) ||
                        (_cmp_str(_mvbl->_prv_direction, "L") && _grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] == '-' && !_mvbl->flg_state_of_row_indicator))) {
                        if (_mvbl->flg_disable_prem_r && _mvbl->flg_state_of_mlt_r && !_trv_r_non_dyn) {
                                _mvbl->flg_disable_prem_r = false;
                        }
                        _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
                        if (!_traversed_dig) {
                                _mvbl->_coord[0][1] += 1;
                        } else {
                                _mvbl->_coord[0][0] += 1;
                                _traversed_dig = false;
                        }
                }
        }


// dw traversion l prv/r prv supported
// TODO l prv-dw without top-clearence mend the undefined immediate overriding of a recently modified cell

if (_mvbl->flg_state_of_mlt_r && _cmp_str(_mvbl->_prv_direction, "L") && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-') && !_trv_r_non_dyn) {
	_mvbl->flg_disable_prem_r = false;
	_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
	_mvbl->_coord[0][1] -= 1;
}
	    
		    

	for (size_t a = 0; a < 20; ++a) {
		printf("\n");
	}
	
	_buff_render(_grid);

       return true;
}


extern _bool_ _trv_clb_l(struct _MOVEABLE_* _mvbl, char16 _grid[12][24]) {
        
	    
        if (_mvbl->flg_disable_prem_r && (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-')) && _mvbl->_trv_exf) {
                _mvbl->_coord[0][0] += 1;
        }         //determination of multi-tail flag for lprv + up

        if (_cmp_str(_mvbl->_prv_direction, "L") && _mvbl->_trv_exf && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-') &&
                (!(_mvbl->_coord[0][0] < _mvbl->_coord[1][0]) || !(_mvbl->_coord[0][0] > _mvbl->_coord[1][0]))) {
                _mvbl->flg_state_of_row_indicator = true;
                if (_mvbl->flg_disable_prem_r) {
                        _mvbl->flg_disable_prem_r = false;
                        _mvbl->flg_state_of_mlt_r = false;
                }
                _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
                _mvbl->_coord[0][1] -= 1;
        }     //escalation request prv-left + up / multi-tail s clearence

        if (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] != '-') && _cmp_str(_mvbl->_prv_direction, "L") &&
                !(_mvbl->_coord[0][0] < _mvbl->_coord[1][0])) {
                _mvbl->flg_state_of_mlt_r = false;
        }

        if (!(_grid[_mvbl->_coord[0][0] - 1][_mvbl->_coord[0][1]] != '-') && _cmp_str(_mvbl->_prv_direction, "L") &&
                _mvbl->flg_state_of_row_indicator && !_mvbl->flg_state_of_mlt_r && !_trv_r_non_dyn) {
                if (_mvbl->flg_disable_prem_r) {
                        _mvbl->flg_disable_prem_r = false;
                        _mvbl->flg_state_of_mlt_r = false;
                        _mvbl->_coord[0][0] += 1;
                }
                _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
                _mvbl->_coord[0][0] -= 1;
                _dw_l_r = true;
        }

        if (!_dw_l_r && !_mvbl->_trv_exf && !_trv_r_non_dyn && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] + 1] == '-') &&
                !(_mvbl->_coord[0][0] <= _mvbl->_coord[1][0])) {
                (_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*');
                _mvbl->_coord[0][0] -= 1;
                _exfoliate = true;
        }

        if (!_mvbl->_trv_exf && !_exfoliate && !(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] != '-') &&
                !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] == '-') && !_trv_r_non_dyn) {
                _mvbl->_coord[0][0] += 1;
                _traversed = true;
        }

        if (!_exfoliate && !_traversed && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] != '-') &&
                !(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] != '-')) {
                _traversed_dig = true;
        }

        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] + 1] = '-';

        if (!_traversed_dig && _traversed) {
                _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] = '*';
                _traversed = false;
        } else {
                if (!_trv_r_non_dyn && !_dw_l_r && ((!_exfoliate && !_mvbl->flg_state_of_row_indicator) ||
                        (_mvbl->flg_state_of_mlt_r && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] == '-')) ||
                        (_cmp_str(_mvbl->_prv_direction, "L") && _grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] == '-' && !_mvbl->flg_state_of_row_indicator))) {
                        if (_mvbl->flg_disable_prem_r && _mvbl->flg_state_of_mlt_r && !_trv_r_non_dyn) {
                                _mvbl->flg_disable_prem_r = false;
                        }
                        _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
                        if (!_traversed_dig) {
                                _mvbl->_coord[0][1] += 1;
                        } else {
                                _mvbl->_coord[0][0] += 1;
                                _traversed_dig = false;
                        }
                }
        }

	for (size_t a = 0; a < 20; ++a) {
		printf("\n");
	}
      //ProgramData_traversed_b = false;
			//printf("\t\t\t\t\t\t    %s%s\n\n\n", _exclaimed_, _decor); printf("%s", _reset_);

	_buff_render(_grid);
       return true;

}

extern _bool_ __attribute__((no_inline)) _trv_clb_d(struct _MOVEABLE_* _mvbl, char16 _grid[12][24]) {

	   if ((!(_grid[*(*(_mvbl->_coord + 1) + 0) + 1][*(*(_mvbl->_coord + 1) + 1)] != 'X') && _cmp_str(_mvbl->_direction, "R")) || 
				             (!(_grid[*(*(_mvbl->_coord + 0) + 0) + 1][*(*(_mvbl->_coord + 0) + 1)] != 'X') && _cmp_str(_mvbl->_direction, "L"))){
				
			  
	      switch(_cmp_str(_mvbl->_direction, "R")) {

                      case 0:
                          _grid[*(*(_mvbl->_coord + 1) + 0)][*(*(_mvbl->_coord + 1) + 1)] = '-';
                          _grid[*(*(_mvbl->_coord + 0) + 0) += 1][*(*(_mvbl->_coord + 0) + 1)] = '-';
                      break;
                      case 1:
                           _grid[*(*(_mvbl->_coord + 0) + 0)][*(*(_mvbl->_coord + 0) + 1)] = '-';
                           _grid[*(*(_mvbl->_coord + 1) + 0) += 1][*(*(_mvbl->_coord + 1) + 1)] = '-';
	               break;
					 
	    }			 
	_reset_grid("CLS");
	for (size_t a = 0; a < 20; ++a) {
	   printf("\n");
        }

       	//printf("\t\t\t\t\t\t   %s%s\n\n\n", _exclaimed_, _decor); printf("%s", _reset_);
			
	_buff_render(_grid);

    return false;

       }

        _reset_grid("CLS");

	bool _traversed_b = false;

	 //implement prv r/prv l request collection of multi-tail for
	 //tail - 1 (collection) / tail - 1(prv r)  (row-collection) or tail + 1 / tail - 1(prv l)
			
if(_cmp_str(_mvbl->_direction, "R")) {

				
			//top-dw-l && dw-top-r
			//TODO recollection from fluid points(dynamic exchange of preconditions)  

if (_mvbl->flg_disable_prem_r && (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-')) && !(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] == '-') &&
        (!(_mvbl->_direction != "R") || _mvbl->_direction == "L")) {
    _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
    _mvbl->_coord[0][1] -= 1;
    _grid[_mvbl->_coord[1][0] - 1][_mvbl->_coord[1][1]] = '-';
    _trv_tp = true;
}

//top clearance l/r
if (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] + 1] != '-') && !(*(_mvbl->_coord[0][0]) > *(_mvbl->_coord[1][0]))) {
    _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
    _mvbl->_coord[0][1] += 1;
}
else if (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-') && !(*(_mvbl->_coord[0][0]) > *(_mvbl->_coord[1][0]))) {
    _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
    _mvbl->_coord[0][1] -= 1;
}
//it dynamically adjusts to an altered(from the basis of how it's defined) context(i.e change the precondition to be dynamically determined by identifying the collection direction without utilizing coordinate comparison)
//comparison between incremented and current location to determine viable direction since collection context becomes progressively muddled
//dw-top-l/r
else if (!(*(_mvbl->_coord[0][0]) < *(_mvbl->_coord[1][0])) && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] + 1] != '-')) {
    _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
    _mvbl->_coord[0][1] += 1;
}
else if (!(*(_mvbl->_coord[0][0]) < *(_mvbl->_coord[1][0])) && !(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-')) {
    _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
    _mvbl->_coord[0][1] -= 1;
}
else if (!(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] != '-')) {
    _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
    _mvbl->_coord[0][0] += 1;
}
else if (!(_grid[_mvbl->_coord[0][0] - 1][_mvbl->_coord[0][1]] != '-')) {
    _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
    _mvbl->_coord[0][0] -= 1;
}
_grid[_mvbl->_coord[1][0] + 1][_mvbl->_coord[1][1]] = '-';
}
else {
    if (!(_grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] + 1] != '-') && !(*(_mvbl->_coord[1][0]) > *(_mvbl->_coord[0][0]))) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][1] += 1;
    }
    else if (!(_grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] - 1] != '-') && !(*(_mvbl->_coord[1][0]) > *(_mvbl->_coord[0][0]))) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][1] -= 1;
    }
    //it dynamically adjusts to an altered(from the basis of how it's defined) context(i.e change the precondition to be dynamically determined by identifying the collection direction without utilizing coordinate comparison)
    //comparison between incremented and current location to determine viable direction since collection context becomes progressively muddled
    //dw-top-l/r
    else if (!(*(_mvbl->_coord[1][0]) < *(_mvbl->_coord[0][0])) && !(_grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] + 1] != '-')) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][1] += 1;
    }
    else if (!(*(_mvbl->_coord[1][0]) < *(_mvbl->_coord[0][0])) && !(_grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] - 1] != '-')) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][1] -= 1;
    }
    else if (!(_grid[_mvbl->_coord[1][0] + 1][_mvbl->_coord[1][1]] != '-')) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][0] += 1;
    }
    else if (!(_grid[_mvbl->_coord[1][0] - 1][_mvbl->_coord[1][1]] != '-')) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][0] -= 1;
    }
    _grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] = '-';
}

			//directional mis-coordination(tail-reduction flag facet present in line above)
	for (size_t a = 0; a < 20; ++a) {
		printf("\n");
	}
      //_traversed_b = false			
				//printf("\t\t\t\t\t\t    %s%s\n\n\n", _exclaimed_, _decor); printf("%s", _reset_);
			
	_buff_render(_grid);
		  //printf("%d %d %s", *(*(_mvbl->_coord + 0) + 0),*(*(_mvbl->_coord + 1) + 1) ,_mvbl->_direction);
				
	
	return true;
}

extern _bool_ __attribute__((no_inline)) _trv_clb_u(struct _MOVEABLE_* _mvbl, char16 _grid[12][24]) {


	
	if((!(*(*(_mvbl->_coord + 1) + 0) < 0) && !(_grid[*(*(_mvbl->_coord + 1) + 0) - 1][*(*(_mvbl->_coord + 1) + 1)] != 'X') && _cmp_str(_mvbl->_direction, "R")) || 
                    ((!(*(*(_mvbl->_coord + 0) + 0)) < 0) && !(_grid[*(*(_mvbl->_coord + 0) + 0) - 1][*(*(_mvbl->_coord + 0) + 1)] != 'X') && _cmp_str(_mvbl->_direction, "L")) 
                         || ((!(*(*(_mvbl->_coord + 0) + 0)) < 0) && !(_grid[*(*(_mvbl->_coord + 1) + 0) - 1][*(*(_mvbl->_coord + 1) + 1)] != 'X') && _cmp_str(_mvbl->_direction, " "))) {
			  
				switch(_cmp_str(_mvbl->_direction, "R")) {

					case 0:
				              _grid[*(*(_mvbl->_coord + 0) + 0)][*(*(_mvbl->_coord + 0) + 1)] = '-';
				               _grid[*(*(_mvbl->_coord + 1) + 0) -= 1][*(*(_mvbl->_coord + 1) + 1)] = '-';
				              break;
					case 1:
				             _grid[*(*(_mvbl->_coord + 1) + 0)][*(*(_mvbl->_coord + 1) + 1)] = '-';
				             _grid[*(*(_mvbl->_coord + 0) + 0) -= 1][*(*(_mvbl->_coord + 0) + 1)] = '-';
				             break;
				}

				_reset_grid("CLS");
				for (size_t a = 0; a < 20; ++a) {
					printf("\n");
				}
				//printf("\t\t\t\t\t\t       %s%s\n\n\n", _exclaimed_, _defa); printf("%s", _reset_);
				//srand(time(NULL));
				//_grid[rand() % 10][rand() % 10] = 'X';	
				_buff_render(_grid);
				
				return false; 
			} 

			
			_reset_grid("CLS");
			bool _traversed_b = true;
			bool _trv_rg = false;
			bool _trv_tp = false;	
			bool _tpv_astr = false;
			bool _trv_sw = false;



  if (_mvbl->_direction == "R") {
     if (_mvbl->flg_disable_prem_r && (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] - 1] != '-')) && !(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] == '-') &&
        (!(_mvbl->_direction != "R") || _mvbl->_direction == "L")) {
       _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
       _mvbl->_coord[0][1] -= 1;
       _grid[_mvbl->_coord[1][0] - 1][_mvbl->_coord[1][1]] = '-';
      _trv_tp = true;
     }

//top clearance l/r
   if (!(_grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1] + 1] != '-') && !(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] == '-')) {
       _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
       _mvbl->_coord[0][1] += 1;
      _grid[_mvbl->_coord[1][0] - 1][_mvbl->_coord[1][1]] = '-';
      _trv_rg = true;
  } else {
    if (!(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] == '-') && !_trv_tp) {
        _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
        _mvbl->_coord[0][0] -= 1;
        _grid[_mvbl->_coord[1][0] - 1][_mvbl->_coord[1][1]] = '-';
    }
    _trv_sw = false;
}
//prv r parallel wall clearance
  if (!(_grid[_mvbl->_coord[0][0] + 1][_mvbl->_coord[0][1]] != '-') && !_trv_rg && !_trv_tp) {
      _grid[_mvbl->_coord[0][0]][_mvbl->_coord[0][1]] = '*';
      _mvbl->_coord[0][0] += 1;
      _grid[_mvbl->_coord[1][0] - 1][_mvbl->_coord[1][1]] = '-';
   }

          
else if (_cmp_str(_mvbl->_direction, "L")) {

    if (!(_grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] - 1] != '-') && !(_grid[_mvbl->_coord[1][0] + 1][_mvbl->_coord[1][1]] == '-')) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][1] -= 1;
        _grid[_mvbl->_coord[0][0] - 1][_mvbl->_coord[0][1]] = '-';
        _trv_tp = true;
    }

    //top clearance l/r
    if (!(_grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1] + 1] != '-') && !(_grid[_mvbl->_coord[1][0] + 1][_mvbl->_coord[1][1]] == '-')) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][1] += 1;
        _grid[_mvbl->_coord[0][0] - 1][_mvbl->_coord[0][1]] = '-';
        _trv_rg = true;
    } else {
        if (!(_grid[_mvbl->_coord[1][0] + 1][_mvbl->_coord[1][1]] == '-') && !_trv_tp) {
            _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
            _mvbl->_coord[1][0] -= 1;
            _grid[_mvbl->_coord[0][0] - 1][_mvbl->_coord[0][1]] = '-';
        }
        _trv_sw = false;
    }
    //prv r parallel wall clearance
    if (!(_grid[_mvbl->_coord[1][0] + 1][_mvbl->_coord[1][1]] != '-') && !_trv_rg && !_trv_tp) {
        _grid[_mvbl->_coord[1][0]][_mvbl->_coord[1][1]] = '*';
        _mvbl->_coord[1][0] += 1;
        _grid[_mvbl->_coord[0][0] - 1][_mvbl->_coord[0][1]] = '-';
    }
}


			//directional mis-coordination(tail-reduction flag facet present in line above)
	for (size_t a = 0; a < 20; ++a) {
		printf("\n");
	}
      //_traversed_b = false			
				//printf("\t\t\t\t\t\t    %s%s\n\n\n", _exclaimed_, _decor); printf("%s", _reset_);
			
	_buff_render(_grid);
		  //printf("%d %d %s", *(*(_mvbl->_coord + 0) + 0),*(*(_mvbl->_coord + 1) + 1) ,_mvbl->_direction);

	return true;

}

extern void _deallocative_mbvl(struct _MOVEABLE_* _mbvl) {
	_assert_(_mbvl != NULL);
	_deallocative_(_mbvl->_coord);

}
extern _ptr_int32* __attribute__((malloc))_init_fld_coord() {
	
	_ptr_int32* _exm = (_ptr_int32*)_allocative_(sizeof(_ptr_int32) * 2);
	for (size_t g = 0; g < 2; ++g) {
		*(_exm + g) = (_ptr_int32)_allocative_(sizeof(int) * 2);
		for (size_t a = 0; a < 2; ++a) {
			*(*(_exm + g) + a) = 0;
		}
	}

	return &(*_exm);
}

extern void __attribute__((no_inline)) _mbvl_res(struct _MOVEABLE_* _moveb_) {
		_moveb_->_coord = _init_fld_coord();
		_moveb_->_direction = " ";
		_moveb_->_prv_direction = " ";
               _moveb_->_trv_exf = true;
}

extern struct _MOVEABLE_* __attribute__((malloc)) _init_mvbl() {   
  struct _MOVEABLE_* _mvb_locale = (struct _MOVEABLE_*) _allocative_(sizeof(struct _MOVEABLE_)); 
	_mbvl_res(_mvb_locale);
	_pause_thread(200);
	return _mvb_locale;
}
