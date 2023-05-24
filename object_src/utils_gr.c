#include <stdio.h>
#include "definitive.h"

#define _BUFF_REND(MVGR, MV, GR) (memcpy(MVGR, GR, 12 * 100), _buffer_db(MV, GR), _hd_buff_crs(), buff_render(GR))


extern void _res_curs_pos(int _vr, int _vrr) {
	 HANDLE _hout = GetStdHandle(STD_OUTPUT_HANDLE);
	 COORD coord = {(SHORT)_vr, (SHORT)_vrr};
	 SetConsoleCursorPosition(_hout, coord);
}

extern void _hd_buff_crs() {
        HANDLE _hout = GetStdHandle(STD_OUTPUT_HANDLE); 
	CONSOLE_CURSOR_INFO _inf_cr;
	_inf_cr.dwSize = 100;
	_inf_cr.bVisible = FALSE;
	SetConsoleCursorInfo(_hout, &_inf_cr);
}


extern void buff_render(char16 _grid[12][100]){
	fflush(stdout);
	Sleep(10);
	_res_curs_pos(0, 0); 

	for (size_t g = 0; g < 12; ++g) {
		 for (size_t b = 0; b < 6; ++b) {
		     for (size_t a = 0; b >= 5 && a < 24; ++a) {	
			  if(_grid[g][a] == '-' || g == 0 || g == 11 || a == 23 || a == 0){  
			      if(_grid[g][a] == '-') {printf("%s", _actorPL);}
				   printf("%c", _grid[g][a]);
				   printf("%s", _reset_);
                               if (a == 23)
                                    goto _sep;
                               continue;
			  }
							
                      printf(" ");
                     _sep:
                        if (a >= 23) {
                           printf("\n");
							}
			}
	   }
     }

}

extern void _buffer_db(char16 _grid_d[12][100], char16 _grid[12][100]) {
	  
	 for (size_t r_s = 0; r_s != 12; ++r_s) {
	      for (size_t s_s = 0; s_s != 24; ++ s_s){
                 _grid[r_s][s_s] = _grid_d[r_s][s_s] == _grid[r_s][s_s] ? _grid[r_s][s_s] : _grid_d[r_s][s_s];
	      }
         }
}
