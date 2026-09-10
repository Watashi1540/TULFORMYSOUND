# ADR-0005 - Estrategia de Framework

Estado: Aceptado

JUCE no representa la arquitectura.

JUCE es únicamente un framework de soporte.

Toda dependencia con JUCE debe minimizarse.

Siempre que sea posible se utilizarán clases propias del framework TUL.

Ejemplo

Incorrecto

juce::AudioBuffer

Correcto

TUL::AudioBuffer

Los adaptadores serán responsables de convertir entre ambas estructuras.