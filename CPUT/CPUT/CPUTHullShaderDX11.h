/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
/////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _CPUTHULLSHADERDX11_H
#define _CPUTHULLSHADERDX11_H

#include "CPUT.h"
#include "CPUTShaderDX11.h"

class CPUTHullShaderDX11 : public CPUTShaderDX11
{
protected:
    ID3D11HullShader *mpHullShader;

    // Destructor is not public.  Must release instead of delete.
    ~CPUTHullShaderDX11(){ SAFE_RELEASE(mpHullShader); }

public:
    static CPUTHullShaderDX11 *CreateHullShader(
        const cString     &name,
        const cString     &shaderMain,
        const cString     &shaderProfile,
        CPUT_SHADER_MACRO *pShaderMacros=NULL
    );
    static CPUTHullShaderDX11 *CreateHullShaderFromMemory(
        const cString     &name,
        const cString     &shaderMain,
        const cString     &shaderProfile,
        const char        *pShaderSource,
        CPUT_SHADER_MACRO *pShaderMacros=NULL
    );

    CPUTHullShaderDX11() : mpHullShader(NULL), CPUTShaderDX11(NULL) {}
    CPUTHullShaderDX11(ID3D11HullShader *pD3D11HullShader, ID3DBlob *pBlob) : mpHullShader(pD3D11HullShader), CPUTShaderDX11(pBlob) {}
    ID3DBlob *GetBlob() { return mpBlob; }
    ID3D11HullShader *GetNativeHullShader() { return mpHullShader; }
};

#endif //_CPUTHULLSHADER_H