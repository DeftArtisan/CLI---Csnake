import os
import math
import sys

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
    try:
        for _ in range(0, round(len(_textual_sa[0]) / (_divisor / 5))):
           _textual_sa.append(_textual_sa[1])

        with open('_grid_.txt', 'w') as _wr_fl:
           _wr_fl.write(
           ("".join([str((x + x) * (round(len(_textual_sa[0]) / (_divisor + 10)))).replace("-", "*") + "\n" for x in _textual_sa]))
           )
    except:
        sys.stderr.write("Inexistent or ill-formed/named file")

 _exemp_s()
