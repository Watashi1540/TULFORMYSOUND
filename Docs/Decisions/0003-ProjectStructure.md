# ADR-0003 - Organización del Proyecto

Estado: Aceptado

Estructura principal

Modules/
Plugins/
SharedUI/
Docs/
JUCE/

Modules contiene el framework.

Plugins contiene únicamente productos finales.

SharedUI contiene componentes gráficos reutilizables.

JUCE es una dependencia externa.

Nunca colocar lógica DSP dentro de Plugins.
