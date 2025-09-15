//stipple.h, Praise The Lord Jesus For All My Code, Not Me
//Hunter M.

#ifndef STIPPLE_H
#define STIPPLE_H

//use for dummy testing...
typedef struct stipple_t;


//
// lineacal value
//
unsigned char ss_stipple_value[64];

/*

Stipple types :

 - Dotted
 - Solid
 - Wire

*/

class Stipple {
public:
   Stipple();
   virtual ~Stipple();

   unsigned float ff_stipple_code[12];
   unsigned float ff_stipple_color[3];

   virtual void GetLine(void) = 0;
   virtual bool StippleSwap() = 0;
};

typedef void (*StippleBegin)(Stipple* stipple);
typedef void (*StippleEnd)(Stipple* stipple);


#endif
