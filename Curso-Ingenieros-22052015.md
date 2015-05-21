# Herramientas open-source de programación y 3D para ingeniería 

### 20-29 Mayo de 2015

### José Antonio Vacas @javacasm
![CCbySA](imagenes/CCbySQ_88x31.png)


## Sistemas de adquisición de datos open-source 

### Herramientas de cálculo y Programación
* Herramientas de cálculo: Octave
![octave](http://mcx.sourceforge.net/upload/octave_mcxlab.png)
* Herramientas de programación: python
* Simulación de fluidos: [OpenFoam](http://www.openfoam.com/)
* R

### [RStudio](http://www.rstudio.com)

[Tutorial R](./Minitutorial R.pdf)

[Mathematica gratis en Raspberry Pi](http://www.wolfram.com/raspberry-pi/)

### Usando ADCs

#### Teoría

* Precisión
* Exactitud
* Nº bits
* Rango
* PGA

# ADC
![adc](http://www.beis.de/Elektronik/DeltaSigma/ADCSinus.GIF)

## Theory

[How sigma/delta ADCs work](http://www.beis.de/Elektronik/DeltaSigma/DeltaSigma.html)


## Arduino

[example for arduino (code and assembly) with ads1x15](https://learn.adafruit.com/adafruit-4-channel-adc-breakouts/overview)

## Raspberry

### Code
[example with 3008](http://www.electroensaimada.com/adc.html)

[example with ads1x15](https://github.com/adafruit/Adafruit-Raspberry-Pi-Python-Code/tree/master/Adafruit_ADS1x15)

[example with MCP3424](https://github.com/abelectronicsuk/ABElectronics_Python_Libraries/tree/master/ADCPi)

[tutorial LTC2309 (C code)](http://www.cooking-hacks.com/documentation/tutorials/raspberry-pi-to-arduino-shields-connection-bridge)


## SMT32

[miniscope (USB oscilloscope) 2x461kSps](http://tomeko.net/miniscope_v2c/index.php?lang=en)

[doc](https://github.com/javacasm/elcacharreo_static/blob/master/_posts/2015-04-23-STM32.md)

### Modules

#### ADC 

Description|Bits|Channels|Price|Chip|sps|PGA|Datasheet
---|---|---|---|---|---|---|---
[Deltha Sigma Pi](https://www.abelectronics.co.uk/products/3/Raspberry-Pi/14/Delta-Sigma-Pi)|18|8|18 £|[MCP3424](http://www.microchip.com/wwwproducts/Devices.aspx?product=MCP3424)|3.7(18),240(12)|No|[Datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/22088c.pdf)
[ADS1115](http://www.adafruit.com/product/1085)|16|4|$14.95||860|Yes x16|[DataSheet](http://www.adafruit.com/datasheets/ads1115.pdf)
[ADS1015](http://www.adafruit.com/products/1083)|12|4|$9.95||3300|Yes x16|[Datasheet](http://adafruit.com/datasheets/ads1015.pdf)
[LTC2309](http://www.linear.com/product/LTC2309)|12|8||14ksps|No|[Datasheet](http://www.linear.com/docs/25786)

#### DAC

[ADC+DAC Pi](https://www.abelectronics.co.uk/products/3/Raspberry-Pi/39/ADC-DAC-Pi-Raspberry-Pi-ADC-and-DAC-expansion-board) 2 ADC 12 bits channels (MCP3202) &  2 DAC 12 bits channels (MCP4822)


#### Addons
Description|Price|Chip
---|---|---
[RTC Pi](https://www.abelectronics.co.uk/products/3/Raspberry-Pi/15/RTC-Pi)|12 £|[DS1307](datasheets.maximintegrated.com/en/ds/DS1307.pdf)


#### Comparación con LabView

[Usando arduino con labview](https://geekytheory.com/arduino-y-labview/)

[Voltímetro con arduino y labview](https://geekytheory.com/labview-arduino-voltimetro/)

[Arduino y matlab](https://geekytheory.com/matlab-arduino-serial-port-communication/)

### Leguajes de programación:

* C
* C++
* python
* Perl
* Visuales (tipo scratch)

### Entornos de programación

#### Arduino

* IDE Arduino

##### Visuales

* [bitbloq](http://bitbloq.bq.com) ![bitbloq](http://revistapushstart.com/wp-content/uploads/2014/05/bq-bitbloq.jpg)

* [Visualino](http://www.visualino.net/) 

* [Visuino](http://www.visuino.com/) ![visuino](http://www.visuino.com/img/screenshot-01-tn.png)

* [Scratch](https://scratch.mit.edu/) ![Scratch]( http://bilbaodynamics.com/images/s4a_mej.png)

##### ¿Cuál elegir?

Depende de las necesidades


#### Raspberry

* [coder](https://googlecreativelab.github.io/coder/)


### Entornos de diseño de placas

* [123d.circuits.io](123d.circuits.io) 
![123d](https://123d-circuits-files.s3.amazonaws.com/14317391011f67ef855b0494d771c013de60636d6a/thumbnail20150516-21035-gk8bgx.png)

* [Fritzing](http://fritzing.org/)


### [Software para ingeniería](http://oshl.edu.umh.es/category/software-libre/ingenieria/)