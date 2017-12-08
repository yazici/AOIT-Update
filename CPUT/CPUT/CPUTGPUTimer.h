/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
/////////////////////////////////////////////////////////////////////////////////////////////

#ifndef CPUTGPUTIMER_H
#define CPUTGPUTIMER_H

class CPUTGPUTimer
{
public:
    virtual void   Start()     = 0;
    virtual void   Stop()      = 0;
    virtual        ~CPUTGPUTimer() {};

	static CPUTGPUTimer *CreateTimer(  );
};

#endif // CPUTGPUTIMER_H