## Configuración de Raspberry para conectar al PC
<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/05/20130501_003523.jpg"><img class="alignleft size-thumbnail wp-image-766" style="margin-left: 10px; margin-right: 10px;" title="20130501_003523" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/20130501_003523-150x150.jpg" alt="" width="150" height="150" /></a>Vamos a configurar nuestra raspberry y un portátil con Ubuntu para facilitar al máximo la conexión y así no tener que utilizar muchos componentes. De esta manera podremos trastear con un kit mínimo, evitando tener que usar un teclado, ratón y sobre todo un monitor.

En concreto usaremos símplemente un cable de red (ethernet) y un cable micro-usb para alimentar la raspberry.

Con esta configuración no podemos consumir en total más de los 500mA que proporciona el USB.

Tendremos que modificar ficheros de configuración en el PC y en la raspberry.

Asumiremos que tenemos conexión a internet via Wifi y utilizaremos el cable ethernet para dar conectividad a la raspberry. Crearemos una red entre el portátil y la raspberry creando una subred distinta y haremos que el portátil actúe como gateway de esa red enrutando los paquetes hacia la raspberry y dándole acceso a internet.

Comencemos editando la configuración del pc, para lo que ejecutaremos en el pc:
<pre>sudo vi /etc/network/interfaces</pre>
y dejamos el contenido del fichero (la red que se usa normalmente es las 192.168.1.x de ahí que el gateway sea 192.168.1.1 que es el real)

<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso1.png"><img class="aligncenter size-full wp-image-767" title="paso1" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso1.png" alt="" width="291" height="212" /></a>

Ahora vamos a editar la configuración de la raspberry. La forma más sencilla es editando los ficheros de configuración desde el pc, para lo que insertamos la tarjeta sd de la raspberry (obviamente con esta apagada) en el pc y ejecutamos en este:
<pre>sudo vi /media/10b4c001-2137-4418-b29e-57b7d15a6cbc/etc/network/interfaces</pre>
Quedando el mismo:

<a href="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso2.png"><img class="aligncenter size-full wp-image-769" title="paso2" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso2.png" alt="" width="232" height="230" /></a>

Ahora, colocamos la tarjeta sd en la raspberry y volvemos a encenderla

Conectamos el cable ethernet entre los dos

En el PC hacemos comprobamos que la tarjeta eth0 está ok y con la ip correspondiente, haciendo
<pre>ifconfig /all</pre>
Veremos que aparece el interface eth0 con ip 192.168.0.80

Ahora vamos a hacer que el portátil actúe como router. Para ello ejecutamos los siguientes comandos
<pre>sudo su -</pre>
<pre>root@ubuntu-asus:~# echo 1 &gt; /proc/sys/net/ipv4/ip_forward
root@ubuntu-asus:~# /sbin/iptables -t nat -A POSTROUTING -o wlan0 -j MASQUERADE</pre>
<pre>Por último editamos el fichero de configuración de DNS con</pre>
<pre>sudo vi /etc/resolv.conf</pre>
<pre>y lo dejamos así</pre>
<img class="aligncenter size-full wp-image-770" title="paso3" src="http://blog.elcacharreo.com/wp-content/uploads/2013/05/paso3.png" alt="" width="273" height="167" />

Ahora solo falta probar que tenemos conectividad, haciendo un ping
<pre>ping 192.168.0.90</pre>
Si todo es correcto ya podremos acceder

## GPIO

Vamos a describir las posibilidades de conexión de RaspBerry. Este artículo forma parte de un <a href="http://cevug.ugr.es/raspberry_pi">curso online de Raspberry</a> que imparto (próxima edición en octubre de 2014).

Por medio del  conector situado junto a la tarjeta SD podemos acceder a los GPIO o pines de entrada/salida.

<img class="alignleft" style="margin-left: 20px; margin-right: 20px;" title="Conector GPIO" src="https://learn.adafruit.com/system/guides/images/000/000/166/medium800/gpio.jpg?1396720373" alt="" width="350" />

Desde el GPIO, entradas/salidas de propósito general (General Porpouse Inputs/Outputs)  podremos hacer varias cosas:

<ul>
    <li>Encender apagar LEDs (no podemos aspirar a encender nada de mayor potencia directamente). Estas son las salidas digitales, capaces de estar en estado alto o bajo. Algunos de estos pines pueden generar PWM (modulación por ancho de pulso), algo parecido a una modulación de la potencia o PPM (modulación por posición de pulso), protocolo que usan los servos.</li>
    <li>Detectar pulsaciones de botones/interruptores. Estas son las entradas digitales.</li>
    <li>Acceso al puerto serie por los terminales TX/TX</li>
    <li>Acceso al bus I2C, bus de comunicaciones usado por muchos dispositivos</li>
    <li>Acceso al bus SPI, bus de comunicaciones similar al I2C pero con diferentes especificaciones</li>
</ul>

Podemos ver los pines de este conector en el siguiente esquema de adafruit

<p style="text-align: center;"><img class="aligncenter" title="conector" src="https://learn.adafruit.com/system/assets/assets/000/003/059/medium800/learn_raspberry_pi_gpio-srm.png?1396790782" alt="" width="500" /></p>

También están disponibles las líneas de alimentación de 5v y 3.3v y por supuesto tierra.

Todos los pines se pueden configurar tanto de entrada como de salida.

Algunos de los pines tienen una segunda función como por ejemplo los etiquetados como SCL y SDA utilizados para I2C y los MOSI, MISO y SCKL utilizados para conectar con dispositivos SPI.

Hay que tener muy claro que todos los pines usan niveles lógicos de 3.3V y no es seguro conectarlos directamente a 5V, porque las entradas han de ser menores de 3.3V. Igualmente no podemos esperar salidas superiores a 3.3V. En caso de querer conectar con lógica de 5v tendremos que usar una electrónica para adaptar niveles.


Veamos ahora un programa de ejemplo que manipula los GPIO

	import RPi.GPIO as GPIO
	# Usamos la numeración de los GPIO no el numero de los pines
	GPIO.setmode(GPIO.BCM)
	GPIO.setup(7, GPIO.IN) # establecemos el GPIO 7 como entrada
	GPIO.setup(8, GPIO.OUT) # establecemos el GPIO 8 como salida
	input_value = GPIO.input(7) # recuperamos el valor de entreda
	GPIO.output(8, True) # establecemos la salida en alto


Veamos un ejemplo más avanzado

	import RPi.GPIO as GPIO
	import time
	# Usamos la posición en el conector
	GPIO.setmode(GPIO.BOARD)
	# pin 11 (GPIO17) como output
	GPIO.setup(11, GPIO.OUT)
	var=1
	print "Empezamos el bucle infinito"
	while var==1 :
	print "Output False"
	GPIO.output(11, False)
	time.sleep(1) # esperamos un tiempo
	print "Output True"
	GPIO.output(11, True)
	time.sleep(1)