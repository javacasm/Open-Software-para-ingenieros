# Herramientas open-source de programación y 3D para ingeniería 

### 20-29 Mayo de 2015

### José Antonio Vacas @javacasm
![CCbySA](imagenes/CCbySQ_88x31.png)

## Sistemas de adquisición de datos open-source


### Una historia

Joris van Tubergen quería imprimir un elefante

Las impresoras actuales tienen un tamaño de 20 cm x 20 cm

![ultimaker](http://blog.symoninc.com/wp-content/uploads/2014/11/pokemonme.jpg)

Pero él lo quería imprimir a tamaño real...

Le dio vueltas y finamente ...

![resultado](https://ultimaker.com/photo/image/0x0/54f6f48ef2055.jpg)

![eefante](https://ultimaker.com/photo/image/0x0/54f6f18eb6ff4.jpg)

Además de conseguir imprimirlo creó unas instrucciones para que cualquier pudiera hacerlo


![paso 1](https://s3.amazonaws.com/ksr/assets/003/369/127/05f2499c4baf87ab9c8456f4a87ec7b0_large.png?1425318983)


[vídeo](https://vimeo.com/118596199)


**¿por qué pudo hacer esto?**

* Tenía el [diseño completo](https://www.youmagine.com/designs/ultimaker-2-source-files) de su impresora. Podía imprimir [todas las piezas](https://www.youmagine.com/designs/ultimaker-2-source-files) o modificarlas ...

* Tenía todo el [código fuente del firmware](https://github.com/Ultimaker/Ultimaker2Marlin) de la impresora

* Tenía todo el [código fuente del software de control](https://github.com/Ultimaker/CuraEngine) de la impresora



([Si quieres leer la historia completa](https://ultimaker.com/en/stories/view/97-printing-out-of-the-box))	


* * * 


### Rentabilidad del modelo Open-source

* Hardware
* Formación
* Soporte
* Desarrollo de proyectos


### Proyectos open-source 

* ¿Por qué hacer open-source mi proyecto?
* Repositorios de proyectos y desarrollo colaborativo
* Ejemplos de proyectos: [Ardusat](http://en.wikipedia.org/wiki/ArduSat), [RepRap](reprap.org/)	
![ardusat](http://upload.wikimedia.org/wikipedia/commons/thumb/9/9d/ArduSat3.png/390px-ArduSat3.png)

### Por tierra, mar, áire o espacio

![osvehicle](http://oshl.edu.umh.es/wp-content/uploads/sites/371/2015/04/osvehicle-GOOGLE.jpg)
* [OSVehicle](http://oshl.edu.umh.es/2015/04/15/osvehicle-un-coche-open-source/)

![openRC](http://thingiverse-production.s3.amazonaws.com/renders/ad/a1/86/d1/dc/IMG_20130513_211521_preview_featured.jpg)
* [OpenRC](http://www.openrcproject.com/tiki-index.php) ([modelo](http://www.thingiverse.com/thing:42198))

![openrov](http://makerfaireoslo.no/content/02-program/0152-openrov-talk/OpenROVangle1.jpg)
* [OpenRov](http://www.industrytap.com/openrov-open-source-underwater-robot-can-explore-shipwrecks-bring-beers/28698)

![openpilot](http://scontent-b.cdninstagram.com/hphotos-xfa1/t51.2885-15/10844183_646936158748950_393315687_a.jpg)
* [OpenPilot](https://www.openpilot.org/)

![ardusat](https://www.ardusat.com/assets/landing/products/demosat-3f8cdfec8c9a206a414788460f0c7ff6.jpg)
* [Ardusat](https://www.ardusat.com/)

* [Desafío Cubesat](https://grabcad.com/challenges/the-additive-cubesat-challenge)

![nasa cubesat](http://gsfctechnology.gsfc.nasa.gov/images/MIRCA%20CAPEarticle.jpg)
* [NASA quiere una plataforma como cubesat](http://gsfctechnology.gsfc.nasa.gov/Crusader.html)

* [Prototipo de sistema de aviso de terremotos](https://hackaday.io/project/5587-earthquake-early-warning-and-monitoring-system)

* * *

### Open software

Linux como máximo ejemplo:

* Empezó siendo una frikada-docente (sustituo de minix)
* Hoy en día el sistema operativo más usado en los servidores en internet
* Estamos rodeado de linux o sus derivados: routers, smartphones, impresoras, ...

* * * 

### Open Hardware 

#### ¿Qué es el Open Hardware?

### Plataformas

#### [Arduino](http://arduino.cc)

![arduino](http://upload.wikimedia.org/wikipedia/commons/thumb/3/38/Arduino_Uno_-_R3.jpg/220px-Arduino_Uno_-_R3.jpg)

#### ¿ Qué es arduino? 

([tutorial](http://spainlabs.com/wiki/index.php?title=Arduino))

* Capacidades
* Virtudes
* Limitaciones

##### Clónicos

![freaduino](http://www.mathias-wilhelm.de/arduino/assets/boards/Slide1cr.jpg)
(Historias...)

* * *
#### [Raspberry](http://raspberry.org)

![raspberry](http://www.raspberrypi.org/wp-content/uploads/2014/07/rsz_b-.jpg)

([tutoria](https://www.raspberrypi.org/help/noobs-setup/))

* Capacidades
* Virtudes
* Limitaciones

* * *

#### Otras alternativas

* beaglebone
* udoo
* pcduino
* STM32
* Maple
* micropython
* ....

#### ¿Cuál elegir?

* Coste	
* Potencia de cálculo
* Robustez


* * *

[Sensores](./Sensores.pdf)

[Calibrado de sensores](https://learn.adafruit.com/calibrating-sensors?view=all)


### Redes de sensores

Cuando el número de sensores es algo se rentabiliza el usar comunicaciones por radio


Existen diferentes tecnologías inalámbricas:

Veamos una tabla comparativa

Nombre|conexión|coste|alcance|ancho de banda|inconvenientes
-----|----|----|----|----|----
3Dr|UART/serie|barato|1-2Km|100Kb/s| --
Bluetooth|UART/serie|barato|6-8m|100Kb/s|corto alcance
Wifi|SPI/Serie|hay alternativas baratas|50m|1Mb/s|interferencias y mósulos complejos
Zigbee|UART/Serie|medio|1-2Km|100kb|caros y propietarios
RF|digital|baratisimo|10m|1Kb/s|muchísimas interferencias
Nordic|SPI|baratisimo|1-2km|2Mb/s|--
GSM|UART/Serie|medio|ilimitado|1Mb/s|necesita covertura y costes de uso



* Zigbee ![zigbee](http://www.blogelectronica.com/TEMP/zigbee-xbee-super.gif)
Su mayor virtud es que permite usar redes Mesh
![mesh](http://www.icpdas-usa.com/images/zigbee_topology.jpg)

* nRF24L01 [Creando redes con nRF24L01](http://forcetronic.blogspot.com.es/2015/05/creating-nrf24l01-transceiver-network.html) [vídeo](https://www.youtube.com/watch?v=9IxsJY5e4YY)
![nrf](http://www.wvshare.com/img/devkit/accBoard/NRF24L01-RF-Board/NRF24L01-RF-Board-2.jpg)

* 3DR ![3dr](http://www.hobbyking.com/hobbyking/store/catalog/22315.jpg) Utilizan comunicaciones serie sobre radio

* RB12 ([telemetría para cohete](http://www.instructables.com/id/Radio-Telemetry-for-a-Model-Rocket/))

* ESP8266 ![esp](https://cdn.sparkfun.com//assets/parts/1/0/4/5/3/13252-01.jpg) [producto](http://www.instructables.com/id/Using-the-ESP8266-module/) Utiliza wifi


### Cómo se hacen prototipos:

## 3 Pilares

* Proyectos

* Open Hardware

* 3D

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

# Necesitamos:
* información y 
* formación

## Movimiento Open-hardware / Makers

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->



# Tecnologías muy modernas

* Programación

* Electrónica

* Impresión 3D

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->


# Programación

## Entornos visuales:

1. Scratch
2. Bitbloq
3. App Inventor

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

# Electrónica

## Módulos

* Sencillos
* Duraderos
* Baratos

Motores, sensores, microcontroladores,...

***

<!-- background: #184bc6-->
<!-- color: #fff -->
<!-- font: centurygothic -->

# Diseño e impresión

## Impresoras abiertas y baratas

* Programas de diseño sencillos
* Acceso a modelos y repositorios
* Impresoras sencillas de construir

***
