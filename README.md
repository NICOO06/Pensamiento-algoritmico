# Cálculo de Daño por Zona en Apex Legends 🛡️
#### Objetivo
Evaluar la capacidad del estudiante para analizar un problema, diseñar una solución adecuada, implementarla en dos lenguajes de programación diferentes y documentar apropiadamente todo el proceso.
## Análisis del Problema
##### Descripción del problema
En el videojuego **Apex Legends**, el daño de la zona es un mecanismo clave que obliga a los jugadores a moverse hacia áreas seguras a medida que el círculo se cierra. El daño aumenta progresivamente dependiendo del círculo en el que se encuentre el jugador.

El programa calcula el daño total recibido según el círculo actual y el tiempo que el jugador permanece en la zona. Los valores de daño por segundo según el círculo son los siguientes:

- **Círculo 1:** 2 de daño por segundo.

- **Círculo 2:** 5 de daño por segundo.

- **Círculo 3:** 10 de daño por segundo.

- **Círculo 4 o mayor:** 25 de daño por segundo.

##### Requisitos Funcionales

- Calcular el daño total recibido según el círculo y el tiempo ingresado.

- Mostrar el resultado con dos decimales de precisión.

- Implementar el programa en dos lenguajes de programación: **C++** y **Python**.

##### Requisitos No Funcionales
- Eficiencia en el tiempo de ejecución.

- Código claro, modular y fácilmente entendible.

- Compatibilidad con distintos entornos de ejecución.

##### Análisis de Casos de Uso Principales

**1.** El usuario ingresa el número de círculo en el que se encuentra.

**2.** El usuario ingresa el tiempo que permaneció en la zona.

**3.** El programa calcula el daño total recibido.

**4.** El programa muestra el resultado con dos decimales de precisión.

## Justificación de la Solución
##### Estrategia Elegida
La estrategia se basa en el uso de estructuras condicionales en ambos lenguajes para calcular el daño según el círculo ingresado y el tiempo de permanencia.

En **Python**, se utilizan ***input()*** para capturar datos y ***format()*** para mostrar el daño con dos decimales. Las estructuras ***if-elif-else*** permiten evaluar el círculo de manera clara.

En **C++**, se usan ***cin*** y ***cout*** junto con ***fixed*** y ***setprecision(2)*** para formatear el resultado. Las sentencias ***if-else*** garantizan decisiones rápidas y precisas.
##### Justificación de Algoritmos y Estructuras de Datos
Se optó por estructuras condicionales por su simplicidad y eficiencia en problemas con casos específicos. El uso de operadores de comparación permite un rendimiento adecuado sin cálculos adicionales.
##### Alternativas Consideradas
Aunque se podrían haber usado diccionarios en **Python** o mapas en **C++** para asociar el número de círculo con el daño correspondiente, estas opciones resultan innecesarias debido a la simplicidad del problema y al número reducido de casos.

Las estructuras condicionales ***(if, elif, else)*** permiten un código más claro y fácil de entender, especialmente para principiantes. Además, garantizan una ejecución eficiente en problemas sencillos como este.
#### Implementación
##### Codigo en phyton 
```python
c = int(input("Introduce el circulo en el cual te encuentras: "))
t = float(input("Introduce el tiempo que pasaste en la zona: "))
if  c==1:
    daño=t*2
    da= "{:.2f}".format(daño)
    print("El daño recibido por estar en la primera zona es: ", da)
elif c==2:
    daño=t*5
    da= "{:.2f}".format(daño)
    print("el daño recibido por estar en la segunda zona es: ", da)
elif c==3:
    daño=t*10
    da= "{:.2f}".format(daño)
    print("El daño recibido por estar en la tercera zona es: ", da)
elif c>=4:
    daño=t*25
    da= "{:.2f}".format(daño)
    print("EL daño recibido por estar en la cuarta o mayor zona es: ", da)
else: 
    print("Error")
```
##### Codigo en C++
```cpp
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    double c, t, daño;
    cout <<"Ingrese el numero de zona en el que se encuentra: ";
    cin >>c ;
    cout << "Ingrese el tiempo en el que estuvo dentro de la zona: ";
    cin >>t ;
    if (c==1) {
        daño=t*2;
        cout << fixed << setprecision(2);
        cout << "El daño recibido por estar en la primer zona es: "<<daño<< endl;
    }else if (c==2){
        daño=t*5;
        cout << fixed << setprecision(2);
        cout<< "El daño recibido por estar en la segunda zona es: "<<daño<<endl;
    } else if (c==3){
        daño=t*10;
        cout << fixed << setprecision(2);
        cout<<"El daño recibido por estar en la tercera zona es: "<<daño<<endl;
    }else if (c>=4){
        daño=t*25;
        cout << fixed << setprecision(2);
        cout<<"El daño recibido por estar en la cuarta o mayor zona es: "<<daño<<endl;
    }else{
        cout<<"Error"<<endl;
    }
    return 0;
}
```
#### Documentación del código
##### Documentación Python
###### Ejecución en Sistemas Operativos

###### Windows:

**1.** Abre la terminal (Cmd o PowerShell).

**2.** Ejecuta el siguiente comando:

`python nombre_del_archivo.py`

###### Linux/MacOS:

**1.** Abre una terminal.

**2.** Ejecuta el siguiente comando:

`python3 nombre_del_archivo.py`

##### Ejemplos de Uso

###### Ejemplo 1:

`Introduce el círculo en el cual te encuentras: 2`
`Introduce el tiempo que pasaste en la zona: 10`
`El daño recibido por estar en la segunda zona es: 50.00`

###### Ejemplo 2:

`Introduce el círculo en el cual te encuentras: 3`
`Introduce el tiempo que pasaste en la zona: 0`
`El daño recibido por estar en la tercera zona es: 0.00`

###### Ejemplo 3 (Error):

`Introduce el círculo en el cual te encuentras: -1`
`Introduce el tiempo que pasaste en la zona: 5`
`Error: círculo no válido`
##### Documentación C++
###### Ejecución en Sistemas Operativos

###### Windows:
**1.** Abre la terminal (Cmd o PowerShell).

**2.** Compila el programa con el siguiente comando:

`g++ -o calculo_dano calculo_dano.cpp`

**3** Ejecuta el programa:

`calculo_dano`

###### Linux/MacOS:

**1.** Abre una terminal.

**2.** Compila el programa:

`g++ -o calculo_dano calculo_dano.cpp`

**3.** Ejecuta el programa:

`./calculo_dano`

##### Ejemplos de Uso

###### Ejemplo 1:

`Ingrese el número de zona en el que se encuentra: 1`
`Ingrese el tiempo en el que estuvo dentro de la zona: 20`
`El daño recibido por estar en la primera zona es: 40.00`

###### Ejemplo 2:

`Ingrese el número de zona en el que se encuentra: 4`
`Ingrese el tiempo en el que estuvo dentro de la zona: 7.5`
`El daño recibido por estar en la cuarta o mayor zona es: 187.50`

###### Ejemplo 3 (Error):

`Ingrese el número de zona en el que se encuentra: 5`
`Ingrese el tiempo en el que estuvo dentro de la zona: -3`
`Error: círculo no válido`
#### Referencias utilizadas 
- [datacamp](https://www.datacamp.com/es/tutorial/python-round-to-two-decimal-places "datacamp")
- [Codegym](https://codegym.cc/es/forum/939 "Codegym")
- [pandao](https://pandao.github.io/ "pandao")
- [Markdownguide](https://www.markdownguide.org/basic-syntax/ "Markdownguide")

## End
