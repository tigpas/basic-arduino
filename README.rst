Basic Arduino
=============

The goal of this repository is to create a collection of basic, but working
code snippets around Arduino and sensors. If it's not explicite defined, all
code snippets are designed for **Wemos D1 mini:**
(https://www.wemos.cc/en/latest/d1/d1_mini.html).

Install Arduino IDE
-------------------
Install Arduino on Linux::

   # Current Version, ex. '1.8.16'
   VERSION=$(curl -s https://www.arduino.cc/en/software/ | grep -o 'arduino-[0-9.]*-linux64' | grep -o '[0-9.]\{3,\}')
   
   # Download latest Arduino IDE
   wget https://downloads.arduino.cc/arduino-${VERSION}-linux64.tar.xz
   
   # Extract it into your home dir or global
   # home
   INSTDIR=~/bin
   # or global
   #INSTDIR=/opt
   mkdir -p $INSTDIR
   tar -xvf arduino-${VERSION}-linux64.tar.xz -C ${INSTDIR}/
   ln -s arduino-${VERSION} ${INSTDIR}/arduino
   
   # Generate shortcuts
   ${INSTDIR}/arduino/install.sh

Configure Arduino IDE
---------------------

* Set serial port: **Tools** -> **Port** -> **/dev/ttyUSB0**. 
  If you don't have permissions to use serial port, maybe you need the dialout group: ``sudo adduser $USER dialout``
* Configure board: **Tools** -> **Board** -> **LOLIN(WEMOS) D1 R2 & mini**.
  If you don't have the coorect board in List, you need to install it via **Board Mananger...**
  
  * Add additional Boards Mananger URLs: **File** -> **Preferences** -> **Settings** -> **Additional Boards Manager URLs:** -> http://arduino.esp8266.com/stable/package_esp8266com_index.json
  
  * Install Board: **Tools** -> **Board** -> **Board Mananger...** -> **"esp8266"** -> **Version: 3.0.2** (current latest) -> **install**

Basic
-----

This folder contain code snippets, that are running with the Arduino board only.

LED
---

This folder contain code snippets around LEDs.
