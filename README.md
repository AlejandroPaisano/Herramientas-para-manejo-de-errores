# Herramientas-para-manejo-de-errores
# Introduccion
En este proyecto se busca hacer uso de sistemas internos (en este caso del lenguaje c++), con el objetivo de poder tratar con los errores que puedan surgir durante su ejecucion. En este caso se usaran unicamente las funciones de try, catch y throw.

Try tiene como funcion principal el poder ejecutar un bloque de codigo y que el sistema detecte si ha existido algun tipo de excepcion que genere un error, en caso de que no haya tratamiento para la excepcion, el programa se cerrara sin mayor problema, aqui es donde aparece la funcion catch. Catch permite detectar algun codigo de error encontrado durante la ejecucion de una funcion try, para luego ejecutar su propio bloque de codigo, la venteja que tiene ante otros metodos es que puede frenarse en cualquier momento para detectar las excepciones para las que haya sido programado. 

Por ultimo esta throw que nos permite lanzar nuestros propios codigos de error en respuesta a situaciones no consideradas o existentes, como el caso de c++ que no tiene una excepcione en caso de dividir con 0.

Como ultimo detalle, se debe resaltar que este codigo fue hecho en el ambiente de codeblocks y en un sistema operativo de windows, como aclaracion por si se encuentran funciones que no hagan su trabajo correctamente debido a alguno de estos factores

# Desarrollo
En primera instancia, debemos aclarar cual es la funcion base del programa, en este caso es una calculadora que tiene 6 funciones: sumar, restar, multiplicar, dividir, raiz cuadrada y salir.

![prueba](https://github.com/AlejandroPaisano/Herramientas-para-manejo-de-errores/assets/91223611/071aedda-6542-4a33-b600-5230ce3bdadc)
