# Cálculo de Daño por Zona en Apex Legends 🛡️
#### Objetivo
Evaluar la capacidad del estudiante para analizar un problema, diseñar una solución adecuada, implementarla en dos lenguajes de programación diferentes y documentar apropiadamente todo el proceso.
## Análisis del Problema
#####Descripción del problema
En el videojuego **Apex Legends**, el daño de la zona es un mecanismo clave que obliga a los jugadores a moverse hacia áreas seguras a medida que el círculo se cierra. El daño aumenta progresivamente dependiendo del círculo en el que se encuentre el jugador.

El programa calcula el daño total recibido según el círculo actual y el tiempo que el jugador permanece en la zona. Los valores de daño por segundo según el círculo son los siguientes:

- **Círculo 1:** 2 de daño por segundo.

- **Círculo 2:** 5 de daño por segundo.

- **Círculo 3:** 10 de daño por segundo.

- **Círculo 4 o mayor:** 25 de daño por segundo.

#####Requisitos Funcionales

- Calcular el daño total recibido según el círculo y el tiempo ingresado.

- Mostrar el resultado con dos decimales de precisión.

- Implementar el programa en dos lenguajes de programación: C++ y Python.

#####Requisitos No Funcionales
- Eficiencia en el tiempo de ejecución.

- Código claro, modular y fácilmente entendible.

- Compatibilidad con distintos entornos de ejecución.

#####Análisis de Casos de Uso Principales

**1.** El usuario ingresa el número de círculo en el que se encuentra.

**2.** El usuario ingresa el tiempo que permaneció en la zona.

**3.** El programa calcula el daño total recibido.

**4.** El programa muestra el resultado con dos decimales de precisión.

##Justificación de la Solución
#####Estrategia Elegida
La estrategia se basa en el uso de estructuras condicionales en ambos lenguajes para calcular el daño según el círculo ingresado y el tiempo de permanencia.

En **Python**, se utilizan ***input()*** para capturar datos y ***format()* **para mostrar el daño con dos decimales. Las estructuras ***if-elif-else*** permiten evaluar el círculo de manera clara.

En **C++**, se usan ***cin*** y ***cout*** junto con ***fixed*** y ***setprecision(2)*** para formatear el resultado. Las sentencias ***if-else*** garantizan decisiones rápidas y precisas.
#####Justificación de Algoritmos y Estructuras de Datos
Se optó por estructuras condicionales por su simplicidad y eficiencia en problemas con casos específicos. El uso de operadores de comparación permite un rendimiento adecuado sin cálculos adicionales.
#####Alternativas Consideradas
Aunque se podrían haber usado diccionarios en **Python** o mapas en **C++** para asociar el número de círculo con el daño correspondiente, estas opciones resultan innecesarias debido a la simplicidad del problema y al número reducido de casos.

Las estructuras condicionales ***(if, elif, else)*** permiten un código más claro y fácil de entender, especialmente para principiantes. Además, garantizan una ejecución eficiente en problemas sencillos como este.

###End
