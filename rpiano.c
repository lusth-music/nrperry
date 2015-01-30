#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "/usr/local/include/songlib/util.h"
#include "/usr/local/include/songlib/songlib.h"


#define dir "/usr/local/share/samples/"
#define base "piano/bright_"
//#define base "guitar-electric/strat_"
char *PROGRAM_NAME ="rpiano";
char *PROGRAM_VERSION = "v1.0";

int
main()
    {
    int instrument;
    int octave = 4;

    songInit();

    instrument = readScale(dir,base);

    setTempo(250);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.3);

    openOutput("rpiano.rra",0,0);
    int i;
    for(i=0;i<2;++i){
        c(1,Q,instrument,octave);
        b(1,Q,instrument,octave,"xxx","xxx",SX);
        b(1,Q,instrument,octave,"---","xxx",SX);
        b(1,Q,instrument,octave,"xxx""---",SX);
        c(6,Q,instrument,octave-1);
        b(6,Q,instrument,octave-1,"xxx","xxx",SX);
        b(6,Q,instrument,octave-1,"---","xxx",SX);
        b(6,Q,instrument,octave-1,"xxx""---",SX);
        ci2(4,Q,instrument,octave-1);
        ci2(4,I,instrument,octave-1);
        ci2(4,I,instrument,octave-1);
        b(4,I,instrument,octave-1, "---", SX);
        ci2(4,I,instrument,octave-1);
        ci2(4,I,instrument,octave-1);
        b(4,I,instrument,octave-1, "---", SX);
        ci2(5,W,instrument,octave-1);
        //bi2(5,W,instrument,octave-1,"xxx","xxx","---","xxx","xxx",SX);
        //c(chord,note length, instrument, octave)
        //ci is inverted chord, 1 moves bottom up, 2 moves middle up)...
    }  

        c(1,Q,instrument,octave); 
        c(1,I,instrument,octave); 
        b(1,I,instrument,octave+1,"x--",SX); 
        b(1,I,instrument,octave,"---",SX);
        b(1,I,instrument,octave+1,"x--",SX); 
        b(7,Q,instrument,octave,"x--""---",SX);
        b(6,Q,instrument,octave,"x--",SX);
        b(5,I,instrument,octave, "x--",SX);
        b(5,I,instrument,octave,"x--",SX);
        b(5,Q,instrument,octave,"---","x--",SX);
        b(5,Q,instrument,octave,"x--""---",SX);
        b(4,Q,instrument,octave,"xxx",SX);
        b(3,I,instrument,octave,"x--",SX);
        b(2,I,instrument,octave,"x--",SX);
        b(4,I,instrument,octave, "---", SX);
        b(2,I,instrument,octave,"x--",SX);
        b(6,I,instrument,octave, "xx-",SX);
        b(4,I,instrument,octave, "---", SX);
        b(5,W,instrument,octave,"xx-",SX);
        
        c(1,Q,instrument,octave); 
        c(1,I,instrument,octave); 
        b(1,I,instrument,octave+1,"x--",SX); 
        b(1,I,instrument,octave,"---",SX);
        b(1,I,instrument,octave+1,"x--",SX); 
        b(7,Q,instrument,octave,"x--""---",SX);
        b(6,Q,instrument,octave,"x--",SX);
        b(5,I,instrument,octave, "x--",SX);
        b(5,I,instrument,octave,"x--",SX);
        b(5,Q,instrument,octave,"---","x--",SX);
        b(5,Q,instrument,octave,"x--""---",SX);
        c(4,Q,instrument,octave);
        b(3,I,instrument,octave,"x--",SX);
        b(2,I,instrument,octave,"x--",SX);
        b(4,I,instrument,octave, "---", SX);
        b(2,I,instrument,octave,"x--",SX);
        b(6,I,instrument,octave, "xx-",SX);
        b(4,I,instrument,octave, "---", SX);
        b(5,H,instrument,octave,"xx-",SX);
        cpower2(1,W,instrument,octave);
    closeOutput();

    return 0;
    }
