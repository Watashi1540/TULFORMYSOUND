#include <TUL/Parameters/Parameter.h>

#pragma once

namespace TUL
{
    class GainProcessor
    {
    public:

        GainProcessor();

        ~GainProcessor();

        void process(float& sample);

        Parameter<float>& getGainParameter();

    private:

        Parameter<float> gain;
    };
}