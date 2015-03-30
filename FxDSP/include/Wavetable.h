//
//  Wavetable.h
//  Test
//
//  Created by Hamilton Kibbe on 5/17/13.
//
//

#ifndef Test_Wavetable_h
#define Test_Wavetable_h

#include "Error.h"

#define NUMBER_OF_TABLES (128)


#ifdef __cplusplus
extern "C" {
#endif


/** Opaque BiquadFilter structure */
typedef struct Wavetable Wavetable;

/** wavetable Generator function pointer */
typedef float* (*WavetableGenerator)(float,float,unsigned );


typedef enum _WaveType_t
{
    SQUARE = 0,
    SAWTOOTH = 1,
    TRIANGLE = 2,
    OTHER = 3,
    N_WAVE_TYPES
    
}WaveType_t;

Wavetable *
WavetableInit(WaveType_t type, float sampleRate);


Wavetable *
CustomWavetableInit(WavetableGenerator generator, const char* waveName, float sampleRate);


Error_t
WavetableFree(Wavetable *table);



float *
generateSawTable(float frequency, float sampleRate, unsigned length);

float *
generateSquareTable(float frequency, float sampleRate, unsigned length);

float *
generateTriangleTable(float frequency, float sampleRate, unsigned length);

    
#ifdef __cplusplus
}
#endif
        
#endif