import os
import math

_divisor = 12

_textual_sa:list = [
   "-*************************",  
   "**************************",
   "**************************",
   "**************************",
   "**************************",
   "**************************",
   "**************************",
   "**************************",
   "**************************",
   "**************************",
   "**************************",
   "**************************",
   "**************************",
]

def _exemp_s():
    for _ in range(0, round(len(_textual_sa[0]) / (_divisor / 5))):
        _textual_sa.append(_textual_sa[1])
    with open('_grid_.txt', 'w') as _wr_fl:
        _wr_fl.write(
          ("".join([str((x + x) * (round(len(_textual_sa[0]) / (_divisor + 10)))).replace("-", "*") + "\n" for x in _textual_sa]))
        )

_exemp_s()
