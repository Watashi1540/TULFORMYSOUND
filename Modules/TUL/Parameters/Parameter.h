#pragma once

namespace TUL
{
    template<typename T>
    class Parameter
    {
    public:

        Parameter();

        Parameter(const T& value);

        ~Parameter();

        void set(const T& value);

        T get() const;

    private:

        T value;
    };
}

#include <TUL/Parameters/Parameter.inl>