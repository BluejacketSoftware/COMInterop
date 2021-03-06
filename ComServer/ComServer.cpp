﻿#include "stdafx.h"
#include "ComServer.h"

HRESULT STDMETHODCALLTYPE Server::ComputePi(_Out_ double *pi)
{
    if (pi == nullptr)
        return E_POINTER;

    double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < 1024; ++i)
    {
        sum += sign / (2.0 * i + 1.0);
        sign *= -1;
    }

    *pi = 4.0 * sum;
    return S_OK;
}
