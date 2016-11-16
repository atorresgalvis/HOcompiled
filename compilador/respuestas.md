# Respuestas: Ambrosio Torres Galvis
### Ejercicios:
#	1. ¿qué espera de cada uno de los pasos?
		i-Pre-procesador:
			Es un paso que toma el archivo imput y lo transforma para el siguiente paso
			de compilación. Se encarga de las directivas # como los includes y los macros.
			Así se evita tener que definir funciones y macros. También elimina comentarios.
		ii-Compilación I:
			Se espera que realice los tres pasos básicos de compilación que son,
			a. El front end: Análisis sintáctico, semántico y léxico.
			Genera una intermediate representation (IR)
			b. El middle end: Toma la IR del front end y la
			optimiza -vamos a ver en otras clases cómo-.
			c. El back end: Genera el código de assembler y
			realiza optimizaciones de hardware (por ejemplo,
			elige qué registros se utilizan para las variables)
			Le suma en el directorio un archivo llamado "calculator.asm". En el compilado I pasa 
			del lenguaje del preproceso a lenguaje assembler.
		iii-Compilación II:
			Le suma en el directorio un archivo llamado "calculator.o". En el compilado I pasa 
			del lenguaje del preproceso a lenguaje assembler. Y está más cerca del código de 
			la máquima que es binario.
		iv-'Linkeo':
			Hace el archivo ejecutable y linkea las funciones que no están aún definidas.
			De este modo resuelve los problemas de dependencias de las librerias.
#	2. ¿Qué agregó el preprocesador?
		Le suma en el directorio un archivo llamado "calculator.pp_c", declarando funciones
		que se encuentran en las librerias y macros que son necesarios para compilar después 
		en assembler.
#	3. Identificar en la rutina de assembler las funciones:
		- 'type	main, @function' (esta llama a dos funciones más: call	add_numbers; call	printf).
		- 'type	add_numbers, @function'
#   4. Explicar qué quieren decir los símbolos que se crean en el objeto.
		Tenemos dos funciones con simbolos T ('main' y 'add_numbers').
		Tenemos una función indefinida con simbolo U (printf).
#	5. ¿En qué se diferencian los símbolos del objeto y del ejecutable?
		Agrega los simbolos de las cosas que linkeo y de los que depende para hacer las cosas
		que uno necesita y en el código binario.
	
