# testQt-M7024
This is very simple project to test remote analog output module M-7024 from ICP-DAS [1] by Raspberry Pi 2 [2] with touch screen [3] through Modbus using libmodbus [4]. The comunication port ```/dev/ttyUSB0```, protocol parameters ```9600,N,8,1``` and device address ```1``` are hardcoded.

To launch the application on Raspberry Pi you have to install libmodbus:
```
sudo apt-get install libmodbus5
```

To develop it further:
```
sudo apt-get install libmodbus-dev
```

And follow the steps to setup Qt cross-compiling environment [5].

[1] https://www.icpdas-europe.com/en/remote-io-modules/rs-485/analog-output/m-7024-g-cr-modbus-rtu-module-4a0-14bits-isol.html

[2] https://www.raspberrypi.org/products/raspberry-pi-2-model-b/

[3] http://hdmipi.com/

[4] http://libmodbus.org/

[5] https://wiki.qt.io/RaspberryPi2EGLFS
