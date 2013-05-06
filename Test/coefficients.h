/*
 *  coefficients.h
 *  Test
 *
 *  Created by Hamilton Kibbe on 4/28/13.
 *  Copyright 2013 HTK Audio. All rights reserved.
 *
 */

#ifndef COEFFICIENTS_H
#define COEFFICIENTS_H


static const float taps[] = 
{
	0.00000000000000000093417616751911641,
	0.00292890317900090790814715546730440,
	0.00634234732232292867937228919572590,
	0.00378304197175636375272134159786219,
	-0.01238784805644845173067114529885657,
	-0.03432657282706219614709652887540869,
	-0.03185986108905410757463627646757232,
	0.02653121660660686526034268695184437,
	0.13786316455699657024247528624982806,
	0.25134767914641781283435761906730477,
	0.29955585837892667600002027938899118,
	0.25134767914641786834550885032513179,
	0.13786316455699657024247528624982806,
	0.02653121660660686872978963890545856,
	-0.03185986108905412145242408428202907,
	-0.03432657282706221002488433668986545,
	-0.01238784805644845520011809725247076,
	0.00378304197175636505376394858046751,
	0.00634234732232293041409576517253299,
	0.00292890317900090790814715546730440,
	0.00000000000000000093417616751911641
};

static const float MatlabFilter[22] = 
{
    -0.0018443873850628734,
    -0.0065792468376457691,
    -0.013309495523571968,
    -0.018774356693029404,
    -0.017523109912872314,
    -0.0038088480941951275,
    0.025527413934469223,
    0.068517640233039856,
    0.11734573543071747,
    0.16021603345870972,
    0.18532848358154297,
    0.18532848358154297,
    0.16021603345870972,
    0.11734573543071747,
    0.068517640233039856,
    0.025527413934469223,
    -0.0038088480941951275,
    -0.017523109912872314,
    -0.018774356693029404,
    -0.013309495523571968,
    -0.0065792468376457691,
    -0.0018443873850628734
};

#endif // COEFFICIENTS_H