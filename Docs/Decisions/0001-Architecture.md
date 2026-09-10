Estado: Aceptado

## Objetivo

Construir una suite de audio modular, reutilizable y desacoplada del framework.

## Principios

- Toda la lógica de negocio vive en Modules.
- Plugins solo ensamblan componentes.
- La UI nunca contiene lógica DSP.
- Los parámetros no procesan audio.
- Cada módulo tiene una única responsabilidad.

## Capas

Plugins

↓

Framework TUL

↓

JUCE (adaptador)

↓

Sistema Operativo

## Regla principal

Todo componente que pueda existir sin conocer JUCE debe pertenecer a Modules.