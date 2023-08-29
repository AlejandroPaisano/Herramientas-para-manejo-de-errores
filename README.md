# Herramientas-para-manejo-de-errores
# Introduccion
En este proyecto se busca hacer uso de sistemas internos (en este caso del lenguaje c++), con el objetivo de poder tratar con los errores que puedan surgir durante su ejecucion. En este caso se usaran unicamente las funciones de try, catch y throw.

Try tiene como funcion principal el poder ejecutar un bloque de codigo y que el sistema detecte si ha existido algun tipo de excepcion que genere un error, en caso de que no haya tratamiento para la excepcion, el programa se cerrara sin mayor problema, aqui es donde aparece la funcion catch. Catch permite detectar algun codigo de error encontrado durante la ejecucion de una funcion try, para luego ejecutar su propio bloque de codigo, la venteja que tiene ante otros metodos es que puede frenarse en cualquier momento para detectar las excepciones para las que haya sido programado. 

Por ultimo esta throw que nos permite lanzar nuestros propios codigos de error en respuesta a situaciones no consideradas o existentes, como el caso de c++ que no tiene una excepcione en caso de dividir con 0.

Como ultimo detalle, se debe resaltar que este codigo fue hecho en el ambiente de codeblocks y en un sistema operativo de windows, como aclaracion por si se encuentran funciones que no hagan su trabajo correctamente debido a alguno de estos factores

# Desarrollo
En primera instancia, debemos aclarar cual es la funcion base del programa, en este caso es una calculadora que tiene 6 funciones: sumar, restar, multiplicar, dividir, raiz cuadrada y salir. Como se puede ver a continuacion, todas estas opciones son elegidas por medio de un switch contenido en un try, que a su vez tien dos catch, el primero es usado principalmente para detectar letras cuando se piden numeros, mientras que el segundo deteta valores demasiado grandes.

Aqui tambien esta el uso de un throw, que nos permite devolver una excepcion de tipo out of range, solo para encargarnos de que el usuario introduzca un numero que salga de las opciones del menu, o que introduzca numeros mayores a 1e7

![prueba](https://github.com/AlejandroPaisano/Herramientas-para-manejo-de-errores/assets/91223611/071aedda-6542-4a33-b600-5230ce3bdadc)

Ahora podemos observar para comprobar si los datos recibidos son numeros usamos la funcion esnum, que nos hace uyn throw a un error que es solo una constante char, claro que como esto esta dentro de un throw, el programa regresa rapidamente a la fase de seleccion, evitandonos tener que ejecutar codigo innecesario.

![esnum](https://github.com/AlejandroPaisano/Herramientas-para-manejo-de-errores/assets/91223611/109c11c3-275d-44fe-91ea-62a625902481)

Ahora tenemos un uso de la misma funcion que comprueba si lo que hemos introducido son numeros validos, pero ahora solo se encarga de comprobar que lo que hayamos introducido en el lugar del divisor sea diferente de un 0.
[cero](https://github.com/AlejandroPaisano/Herramientas-para-manejo-de-errores/assets/91223611/ff65c401-2619-4af6-af1b-da0360626f6e)

Nuestro ultimo ejemplo es un underflow dentro de la funcion de root, para ello simplemente revisamos que el numero introducido sea mayor a 0, para asi ahorrarnos problemas con numeros imaginarios y simplificaremos la ejecucucion de las raices.
![underflow](https://github.com/AlejandroPaisano/Herramientas-para-manejo-de-errores/assets/91223611/aad75fa4-01e2-44da-bb68-23ffe82358cc)


#conclusion

