# ADR-0002 - Estilo de Código

Estado: Aceptado

## Llaves

Se utiliza Allman.

Correcto

if (...)
{
}

Incorrecto

if (...) {
}

## Miembros

Siempre acceder mediante this->

Correcto

this->gain = gain;

## Inicialización

Toda variable miembro se inicializa en el constructor.

## Includes

Se utiliza:

#pragma once

No se utilizan include guards tradicionales.

## Nombres

Clases:
PascalCase

Funciones:
camelCase

Variables miembro:
camelCase

Constantes:
UPPER_CASE

## Comentarios

Explicar el por qué.
No explicar lo evidente.