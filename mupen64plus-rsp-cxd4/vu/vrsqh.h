/******************************************************************************\
* Authors:  Iconoclast                                                         *
* Release:  2013.11.26                                                         *
* License:  CC0 Public Domain Dedication                                       *
*                                                                              *
* To the extent possible under law, the author(s) have dedicated all copyright *
* and related and neighboring rights to this software to the public domain     *
* worldwide. This software is distributed without any warranty.                *
*                                                                              *
* You should have received a copy of the CC0 Public Domain Dedication along    *
* with this software.                                                          *
* If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.             *
\******************************************************************************/
#include "vu.h"
#include "divrom.h"

static INLINE void VRSQH(int vd, int de, int vt, int e)
{
   DivIn = VR[vt][e & 07] << 16;
   SHUFFLE_VECTOR(VACC_L, VR[vt], e);
   VR[vd][de &= 07] = DivOut >> 16;
   DPH = SP_DIV_PRECISION_DOUBLE;
}
