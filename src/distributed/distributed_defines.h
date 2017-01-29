#ifndef _distributed_defines_
#define _distributed_defines_

#include <iostream>
#include <vector>
#include <map>
#include <cassert>
#include "../mnist/mnist.h"
#include "../nn/nn.h"
#include "../nn/nn_params.h"
#include "../nn/nn_layer.h"
#include <mpi.h>

#define STEP_TAG 0
#define STEP_START 1
#define STEP_UNINITIALIZED (STEP_START-1)
#define MASTER_RANK 0

#endif