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
int chorus();
int bridge();
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
    int i, spot;
//    verse();
//    drumkitSnare(1,1,"xxxx",SX);
    chorus();
    
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
         drumkitKick(1,.7,"x---------------",SX);setLocation(spot);
     drumkitHHClosed(1,.7,"--------x-------",SX); setLocation(spot);
        drumkitSnare(1,.7,"--------x-------",SX);
    }
        spot=getLocation();     
        drumkitKick(1,.7,"x-----------x---",SX);setLocation(spot);
    drumkitHHClosed(1,.7,"--------x-------",SX);setLocation(spot);
       drumkitSnare(1,.7,"--------x-------",SX);
        
        spot=getLocation();     
        drumkitKick(1,.7,"----x-----------",SX);setLocation(spot);
    drumkitHHClosed(1,.7,"--------x-------",SX);setLocation(spot);
       drumkitSnare(1,.7,"--------x-------",SX);
    }
return 0;
}

int
chorus()
{
    setTempo(125);
    int spot=getLocation();
    drumkitKick(1,.7,"x--x-x-xxx-x-x--",SX); setLocation(spot);
   drumkitHHClosed(1,.7,"--x---x---x---x-",SX);
return 0;
}

int
bridge(){
    int spot;
    drumkitSnare (1,1,"xxxxX---", SX);
    drumkitHHClosed (1,1,"X---X---", SX);
    setTempo(250);
    drumkitSnare (1,1,"D-x-xx--",SX);
    setTempo(275);
    drumkitHHClosed (1,1,"X---X---", SX);
    drumkitSnare (1,.5,"rrrrr---", SX);
    drumkitHHClosed (1,1,"X---X---", SX);
    setTempo(250);
    drumkitSnare (1,1,"D-x-xx--",SX);
    drumkitHHClosed (1,1,"x---x---", SX);
    setTempo(65);
    drumkitSnare(1,1,"x-x-xxxxx-x-xxxxx-x-x-x-x---x---",SX);
    setTempo(75);
    drumkitSnare(1,1,"xxxxx-x-xxxxx-x-xxxxx-x-x---",SX);
    setTempo(550);
    drumkitSnare(1,1,"xxxx",SX);

    int i;
    for(i=0; i<3; i++){
    setTempo(100);
    spot=getLocation();
    drumkitKick  (1,1,"x--x--x--x-x----",SX); setLocation(spot);
    drumkitHHOpen(1,.5,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);//last x chhhh
    drumkitSnare (1,1,"----x-------x---",SX);
    }

    for(i=0; i<3; i++){
    spot=getLocation();
    drumkitKick  (1,1,"x--x--x--x-x----",SX); setLocation(spot);
    drumkitHHOpen(1,.5,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);//last x chhhh
    drumkitSnare (1,1,"----x-------x---",SX); setLocation(spot);
    drumkitTom   (1,1,"-------------xxx",SX);
    }

    spot=getLocation();
    drumkitKick  (1,1,"x--x--x--x-x----",SX); setLocation(spot);
    drumkitHHOpen(1,.5,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);//last x chhhh
    drumkitSnare (1,1,"----x-------x---",SX); setLocation(spot);
    drumkitCrash (1,1,"--------------x-",SX);

    spot=getLocation();
    drumkitKick  (1,1,"x--x--x--x-x----",SX); setLocation(spot);
    drumkitHHOpen(1,.5,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);//last x chhhh
    drumkitSnare (1,1,"----x-------x---",SX); setLocation(spot);
    drumkitTom   (1,1,"-------------xxx",SX);

    spot=getLocation();
    drumkitKick  (1,1,"x--x--x--x-x----",SX); setLocation(spot);
    drumkitHHOpen(1,.5,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);//last x chhhh
    drumkitSnare (1,1,"----x-------x---",SX); setLocation(spot);
    drumkitCrash (1,1,"--------------x-",SX);

    spot=getLocation();
    drumkitKick  (1,1,"x--x--x--x-x----",SX); setLocation(spot);
    drumkitHHOpen(1,.5,"x-x-x-x-x-x-x-x-",SX); setLocation(spot);//last x chhhh
    drumkitSnare (1,1,"----x-------x---",SX); setLocation(spot);
    drumkitTom   (1,1,"-------------xxx",SX);

    drumkitTom(1,1,"x---x---x-x-x-x-",SX);

return 0;
}
