#include <GainProcessor.h>

TUL::GainProcessor::GainProcessor()
{
    this->gain.set(1.0f);
}

TUL::GainProcessor::~GainProcessor()
{
}

void TUL::GainProcessor::process(float& sample)
{
    sample *= this->gain.get();
}

TUL::Parameter<float>& TUL::GainProcessor::getGainParameter()
{
    return this->gain;
}