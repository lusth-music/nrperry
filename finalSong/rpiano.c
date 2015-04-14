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
int chorus(int, int);
int verse(int, int);
int
main()
    {
    int instrument;
    int octave = 4;

    songInit();

    instrument = readScale(dir,base);

    setTempo(500);
    setTime(4,4);
    setStride(0.05);
    setSustain(0.99995);
    setAmplitude(0.1);

    openOutput("rpiano.rra",0,0);
//    verse(instrument, octave);
    setTempo(250);
//    b(1,Q,instrument,octave,"---",SX);
    chorus(instrument, octave);
    closeOutput();
    return 0;
    }

int 
chorus(int instrument, int octave){ 
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
        ci2(5,Q,instrument,octave-1);
        b(1,I,instrument,octave, "x--", SX);
        b(2,I,instrument,octave, "x--", SX);
        b(3,I,instrument,octave, "x--", SX);
        b(2,I,instrument,octave, "x--", SX);
        b(1,I,instrument,octave, "x--", SX);
        b(3,I,instrument,octave, "x--", SX);

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
        b(5,Q,instrument,octave,"xx-",SX);


        b(1,I,instrument,octave, "x--", SX);
        b(2,I,instrument,octave, "x--", SX);
        b(3,I,instrument,octave, "x--", SX);
        b(2,I,instrument,octave, "x--", SX);
        b(1,I,instrument,octave, "x--", SX);
        b(3,I,instrument,octave, "x--", SX);

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
        return 0;
        }

int 
verse(int instrument, int octave)
{
    int i;
    for(i=0; i<4; ++i)
    {
        c(1,H,instrument,octave); 
        b(1,H,instrument,octave,"---",SX);
        c(1,H,instrument,octave); 
        b(1,H,instrument,octave,"---",SX);
        c(1,Q,instrument,octave); 
        b(1,H,instrument,octave, "---","xxx",SX); 
        b(1,H,instrument,octave, "xxx","---",SX); 
        b(1,H,instrument,octave, "xxx","xxx",SX); 
        c(1,Q,instrument,octave); 
        
        c(2,H,instrument,octave); 
        b(2,H,instrument,octave,"---",SX);
        c(2,H,instrument,octave); 
        b(2,H,instrument,octave,"---",SX);
        c(2,Q,instrument,octave); 
        b(2,H,instrument,octave, "---","xxx",SX); 
        b(2,H,instrument,octave, "xxx","---",SX); 
        b(2,H,instrument,octave, "xxx","xxx",SX); 
        c(2,Q,instrument,octave); 

        c(3,H,instrument,octave); 
        b(3,H,instrument,octave,"---",SX);
        c(3,H,instrument,octave); 
        b(3,H,instrument,octave,"---",SX);
        c(3,Q,instrument,octave); 
        b(3,H,instrument,octave, "---","xxx",SX); 
        b(3,H,instrument,octave, "xxx","---",SX); 
        b(3,H,instrument,octave, "xxx","xxx",SX); 
        c(3,Q,instrument,octave); 
    
        c(1,H,instrument,octave); 
        b(1,H,instrument,octave,"---",SX);
        c(1,H,instrument,octave); 
        b(1,H,instrument,octave,"---",SX);
        c(1,Q,instrument,octave); 
        b(1,H,instrument,octave, "---","xxx",SX); 
        b(1,H,instrument,octave, "xxx","---",SX); 
        b(1,H,instrument,octave, "xxx","xxx",SX); 
        c(1,Q,instrument,octave); 
    }
    return 0;
}

