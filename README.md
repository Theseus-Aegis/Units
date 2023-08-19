<p align="center">
    <img src="https://github.com/Theseus-Aegis/Units/blob/master/extras/assets/logo/logo_tacu_ca.png">
</p>

**Theseus Units** is a content mod for Theseus mission makers, providing new factions.


## Setup

### Requirements

- Arma 3
- Arma 3 Tools (available on Steam)
- Run Arma 3 and Arma 3 Tools directly from Steam once to install registry entries (and again after every update)
- [HEMTT](https://github.com/BrettMayson/HEMTT/releases) (>=v1.5.1) in project root _(Windows users can double-click `tools/setup.bat`)_
  - `hemtt` (Linux) or `hemtt.exe` (Windows)

### Procedure

_Replace `hemtt` with `hemtt.exe` on Windows._

- Open terminal (Linux) or command line (Windows)
- Run `$ hemtt build` to create a development build _(Windows users can double-click `build.bat`)_
- Run `$ hemtt release` to create a release build
  - _Only Windows release builds are currently supported due to binarization!_
- Run `$ hemtt dev` to create a development build with file patching
  - `mklink /J <Arma 3>\x\tac <Units>/.hemttout/dev` _(`/D` instead of `/J` for network paths)_
  - _`$ hemtt launch` is not supported. Use [ArmaQDL](https://github.com/jonpas/ArmaQDL)._
