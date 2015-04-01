#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"

#define dir "/usr/local/share/samples/piano/"
#define base "bright_"

/* change PROGRAM_NAME and PROGRAM_VERSION appropriately */

char *PROGRAM_NAME = "drums";
char *PROGRAM_VERSION = "0.01";
int verse();
int
main()
    {
    songInit();
    
    setTempo(500);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.2);

    openOutput("drums.rra",0,0);
    verse();
    closeOutput();

    return 0;
    }

int
verse()
{
    int i, spot, j;
    for(j=0;j<16;j++){
    for(i=0;i<2;++i){
        spot=getLocation();     
         drumkitKick(1,3,"x---------------",SX);setLocation(spot);
     drumkitHHClosed(1,1,"--------x-------",SX); setLocation(spot);
        drumkitSnare(1,1,"--------x-------",SX);
    }
        spot=getLocation();     
        drumkitKick(1,3,"x-----------x---",SX);setLocation(spot);
    drumkitHHClosed(1,1,"--------x-------",SX);setLocation(spot);
       drumkitSnare(1,1,"--------x-------",SX);
        
        spot=getLocation();     
        drumkitKick(1,3,"----x-----------",SX);setLocation(spot);
    drumkitHHClosed(1,1,"--------x-------",SX);setLocation(spot);
       drumkitSnare(1,1,"--------x-------",SX);
    }
return 0;
}
