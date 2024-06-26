#pragma once

typedef float tinytype;  // should be double if you want to generate code

#define NSTATES 6
#define NINPUTS 3

#define NUM_INPUT_CONES 1
#define NUM_STATE_CONES 1

#define NHORIZON 20
#define NTOTAL 100  // 100 step takes 1 second at 100 Hz