# Qt-Hello-World
Simple Hello World GUI app created with qt6 and kirigami

## Requirements

We use CMake and Make to build the program. To do so, you need to install Qt6 and Kirigami

Ubuntu/Debian-based OS:
```sh
sudo apt install qt6-base-dev qt6-tools-dev-tools qml-module-org-kde-kirigami2 qt6-declarative-dev
```
Arch Linux / Manjaro:
```sh
sudo pacman -S qt6-base qt6-tools kirigami2 qt6-declarative
```
Fedora:

```sh
sudo dnf install qt6-qtbase-devel qt6-qttools kirigami2 qt6-qtdeclarative-devel
````

## Building

use these command for building

``` sh
cmake . -B build
make -C build
```