# Crazyflie Firmware  [![CI](https://github.com/bitcraze/crazyflie-firmware/workflows/CI/badge.svg)](https://github.com/bitcraze/crazyflie-firmware/actions?query=workflow%3ACI)

This repo contains the source code for the TinyMPC-integrated firmware used in the Crazyflie 2.1. TinyMPC is publicly available at [tinympc.org](https://tinympc.org/).

## Requirements
Install the dependencies at [building and flashing instructions](https://github.com/bitcraze/crazyflie-firmware/blob/master/docs/building-and-flashing/build.md) in the github docs folder.

## Building and Flashing
### Clone
```bat
git clone --recursive https://github.com/TRA370-Improve-TinyMPC/tinympc-crazyflie-firmware
```

### The first time you need to configure
```bat
cd tinympc-crazyflie-firmware
make cf2_defconfig
```

### Every time you want to build 
If you are in the root directory the next command will flash the default firmware. Which means it will use the stock controller and commander.
But if you execute the following command in `examples/controller_tinympc/` then the tinympc controller will be enabled.
```bat
make -j12
```

### To flash
```bat
CLOAD_CMDS="-w radio://0/1/2M" make cload
```

Where radio://0/1/2M is the address of the crazyflie. You can find it on cfclient

## Official Documentation

Check out the [Bitcraze crazyflie-firmware documentation](https://www.bitcraze.io/documentation/repository/crazyflie-firmware/master/) on our website.

## License

The code is licensed under LGPL-3.0

