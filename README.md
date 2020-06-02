<p align="center">
    <img src="https://github.com/Theseus-Aegis/Units/blob/master/extras/assets/logo/logo_tacu_ca.png">
</p>

**TAC Units** is a content mod for Theseus mission makers, providing new factions.


## Setup

### Requirements

- Arma 3
- Arma 3 Tools (available on Steam)
- Run Arma 3 and Arma 3 Tools directly from Steam once to install registry entries (and again after every update)
- [HEMTT (0.7.6)](https://github.com/synixebrett/HEMTT/releases/tag/v0.7.6) binary placed in project root
  - `hemtt` (Linux) or `hemtt.exe` (Windows)

### Procedure

_Replace `hemtt` with `hemtt.exe` on Windows._

- Open terminal (Linux) or command line (Windows)
- Run `$ hemtt build` to create a development build (add `-f` to overwrite already built addons)
- Run `$ hemtt build --release` to create a release build (add `-f` to overwrite already built release)
- Run `$ hemtt clean` to clean build files

**Windows Helpers:**
- Double-click `make.bat` to create a development build
- Double-click `make_release.bat` to create a release build
