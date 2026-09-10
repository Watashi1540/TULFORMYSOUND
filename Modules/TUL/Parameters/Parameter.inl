#pragma once

namespace TUL
{
    template<typename T>
    Parameter<T>::Parameter()
    {
        this->value = T();
    }

    template<typename T>
    Parameter<T>::Parameter(const T& value)
    {
        this->value = value;
    }

    template<typename T>
    Parameter<T>::~Parameter()
    {
    }

    template<typename T>
    void Parameter<T>::set(const T& value)
    {
        this->value = value;
    }

    template<typename T>
    T Parameter<T>::get() const
    {
        return this->value;
    }
}