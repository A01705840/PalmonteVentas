# PalmonteVentas

## Contexto
Las nuevas aplicaciones para pedir productos en línea están en demanda cada día más. Este proyecto tiene la funcionalidad de proporcionar 
esta dinámica entre el cliente y el menú de un restaurante. 

## Explicación código
El proyecto usa tres clases:
Puntos: Tarjeta de puntos por venta
Cliente: Usuario / Nuevo y Registrado
Productos: Alimento / Comida y Bebida

Las clases podrán interactuar una con la otra en el proyecto, para mantener la dinámica.

Al darles la bienvenida se podrá ser admitido con un usuario nuevo y un regalo de $ 100.
Si se desea entrar con un usuario existente, los usuario registrados son los siguientes nombres:
Helena $150
Samir $600
Dayra $70
Benjamin $135

Después se utiliza una lista de compras para seleccionar los productos y la cantidad que se desea de cada producto.
El programa calcular y retira el dinero necesario del saldo o regalo para conseguir el pago.

Al final, se le otorga al usuario la opción de tomar la nueva tarjeta de puntos, la cual inicialmente estará en ceros.
Si el usuario decide tomarla, se le indicara sus puntos, y si no, el programa solo finalizará.

## Resumen
Esta dinámica de compra de productos por medio de una app o programa es un sistema muy eficiente en restaurantes de alta demanada, como en la comida rápida.
Las clases y sus objetos ayudan a mantener organizado y efectivo el uso de las funcionalidades del programa, brindando coherencia y eficiencia a los negocios.

##CORRECIÓNES
Para este proyecto se realizaron las siguientes correcciones:

Diseño clases sencillas completas (presente en Cliente.h, Puntos.h y Producto.h, y en el UML

Codifico métodos y atributos de clase correctamente. (presente uso de getters en ventamain.cpp (69-72) o (128 - 143))

Utilizo el concepto de composición (o agreagación) en el diagrama de clases. (presente en Cliente.h líneas 72 y 110; en Producto.h
líneas 99 y 127)

Implemento las clases en c++ siguiendo el diseño del diagrama de clases en UML. "Se comentó que faltaban clases en el UML, ahora todas son incluidas y el programa esta basado en el UML.

Codifico métodos y atributos de clase correctamente. (constructores, getters, setters) (presente en Cliente.h, Puntos.h y Producto.h, cada clase e clase hija tienen un constrcutor default y otro con valores para llenar,  Ej. Cliente.h (118 a 122))

Implemento herencia de manera correcta y util ( presente en Cliente.h, se presenta la diferencia de ingreso entre clases hijas Nuevo y Registrado, variando las variables int regalo (Nuevo) e int saldo (Registrado), se muestra en Cliente.h (Línea 75 y 114)

Impemento composición (o agregación) sieguiendo mi diagrama de clases( Composición de la clase Puntos.h a Cliente.h para crear una tarjeta de puntos, Líneas (40 a 67).

Implemento clases apegadas a requerimientos a partir de un modelo. (presente en Cliente.h, Puntos.h y Producto.h)

Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc... (en comentarios ventamain.cpp (1 a 6), orden métodos Producto.h (32 a 42), sangrías Puntos.h (18 a 35).

Guardo correctamente los avances en commits durante la materia. "Se guardaron los archivos sin dejar archivos de versiones pasadas o extra; se implementó guía para Entrar como usuario nuevo o registrado, README.md (Explicación código)






