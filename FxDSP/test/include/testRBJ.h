//
//  testRBJ.h
//  FxDSP
//
//  Created by Hamilton Kibbe on 11/21/13.
//  Copyright (c) 2013 Hamilton Kibbe. All rights reserved.
//

#ifndef FxDSP_testRBJ_h
#define FxDSP_testRBJ_h

static const float input[10] =
{
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0
};


// Matlab Result (Lowpass, 3k cutoff, 44100)
// >> b = [ 0.0372597650 0.0745195299 0.0372597650];
// >> a = [ 1.0000000000 -1.5075972080 0.6566362381]
// >> filter(b, a, ones(1,10))
static const float lowpassOutput[10] =
{
    0.037259765000000,
    0.167952012584736,
    0.377776933228639,
    0.608291131957334,
    0.818035047813827,
    0.982880413472218,
    1.093675370618177,
    1.152466097897758,
    1.168346850339972,
    1.153684506386766
};



// Matlab Result (Highpass, 3k cutoff, 44100)
// >> b = [ 0.7910583615 -1.5821167231 0.7910583615];
// >> a = [ 1.0000000000 -1.5075972080 0.6566362381];
// >> filter(b, a, ones(1,10))
static const float highpassOutput[10] =
{
    0.791058361500000,
    0.401539015562455,
    0.085921512052115,
    -0.134130037052400,
    -0.258633247914900,
    -0.301840119606173,
    -0.285225358722228,
    -0.231805793914578,
    -0.162180461241754,
    -0.092290726174369
};


// Matlab Result (Bandpass, 3k cutoff, 44100)
// >> b = [ 0.1800261736 0.0000000000 -0.1800261736];
// >> a = [ 1.0000000000 -1.5808714628 0.7371543646];
static const float bandpassOutput[10] =
{
    0.180026173600000,
    0.464624414001319,
    0.601804397403380,
    0.608875483361765,
    0.518931137863796,
    0.371528206949148,
    0.204805986788019,
    0.049898300599197,
    -0.072090827597512,
    -0.150749082151362
};



// Matlab Result (Allpass, 3k cutoff, 44100)
// >> b = [ 0.6566362381 -1.5075972080 1.0000000000];
// >> a = [ 1.0000000000 -1.5075972080 0.6566362381];
static const float allpassOutput[10] =
{
    0.656636238100000,
    0.138981989331183,
    -0.072603260008142,
    -0.051678052618055,
    0.118803273783685,
    0.362080196020997,
    0.616899587922065,
    0.841320148661917,
    1.012332312558267,
    1.122787100625932
};


// Matlab Result (Notch, 3k cutoff, 44100)
// >> b = [ 1.0000000000 -1.5808714628 0.7371543646];
// >> a = [ 1.0000000000 -1.5808714628 0.7371543646];
// >> filter(b, a, ones(1,10))
static const float notchOutput[10] =
{
    0.868577182300000,
    0.660814600237303,
    0.560670384592328,
    0.555508346082780,
    0.621169572365298,
    0.728776750425331,
    0.850487407873728,
    0.963573211983284,
    1.052627790191449,
    1.110049937438769
};


// Matlab Result (Peak, 3k cutoff, Q=2.0, 44100)
// >> b = [ 0.9999999404 -1.3766036034 0.5126928687];
// >> a = [ 1.0000000000 -1.3766036034 0.5126928687];
// >> filter(b, a, ones(1,10))
static const float peakOutput[10] =
{
    0.999999940400000,
    0.999999858354425,
    0.999999775966686,
    0.999999704615609,
    0.999999648633066,
    0.999999608148483,
    0.999999581119111,
    0.999999564666537,
    0.999999555875631,
    0.999999552209155
};


// Matlab Result (Low Shelf, 300 cutoff, Q = 0.5, 44100)
// >> b = [ 1.0000000000 -1.4075053930 0.5466495156];
// >> a = [ 1.0000000000 -1.4075053930 0.5466495156];
// >> filter(b, a, ones(1,10))
static const float lowShelfOutput[10] =
{
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0
};


// Matlab Result (High Shelf, 300 cutoff, Q = 0.5, 44100)
// >> b = [ 1.0000000000 -1.9162907600 0.9180425406];
// >> a = [ 1.0000000000 -1.9162907600 0.9180425406];
// >> filter(b, a, ones(1,10))
static const float highShelfOutput[10] =
{
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0
};


#endif