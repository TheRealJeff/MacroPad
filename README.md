# MacroPad
This page outlines the MacroPad V1 keyboard project. This keyboard is a custom made 4x3 (rxc) with hotswap MX style switches based on the ATMEGA32U4 MCU platform. It is powered by a built-in USB-C connector and uses a custom firmware designed and uploaded with QMK (QMK MSYS and QMK Toolbox). All the required files for PCB, Mech and Firmware are found here.

- Mech: 3D folder
- Firmware: Firmware folder

## PCB Design
The PCB was fully designed with KiCAD 7, uses the keyswitch libraries from [ai03 Custom Keyboard](https://wiki.ai03.com/books/pcb-design) and is based on the design from [Masterzen's Blog](https://www.masterzen.fr/2020/05/03/designing-a-keyboard-part-1/).

The keyboard uses an ATMEGA32U4 to receive inputs from a 4x3 key switch matrix. The keyboard uses a USB-C over a USB 2.0 interface for power and data. The switches have Kailh hot swap sockets for easy swapping of the key switches.

## Mech Design
The keyboard has a basic enclosure designed to mainly give it a flat support for testing. It is mounted with 4 M2.5x4mm screws for stability. Currently, the key switches are only retained by the hot swap sockets.

## Firmware
QMK was used for the custom keymap (key switch layout).  Currently, the layout has the following keymap:
 ┌───┬───┬───┐
 │ESC│DEL│ 0 │
 ├───┼───┼───┤
 │ 7 │ 8 │ 9 │
 ├───┼───┼───┤
 │ 4 │ 5 │ 6 │
 ├───┼───┼───┤
 │ 1 │ 2 │ 3 │
 └───┴───┴───┘

### Keyboard Programming
Download QMK MSYS and QMK Toolbox. Open QMK MSYS and follow the on screen instructions to download the necessary repos and drivers.

The `firmware\macropadv1` folder must be put in the `qmk_firmware\keyboards` folder downloaded and installed by QMK MSYS.

To create a new keymap, simply make a new folder in `macropadv1\keymap`, copy the default keymap file and modify it. In QMK MSYS, use the command `qmk compile -kb <keyboard> -km <keymap>` with the selected `keyboard` and `keymap`.

To upload the created `.hex` file, use QMK Toolbox. Connect the keyboard, and press on the reset button. The Toolbox window should display a "DFU Mode" message. At this point, select the `.hex` and flash the keyboard.

## Future Work
Future revisions will have the following updates:
- Use the RP2040 MCU
- LEDs
- Different key matrices
	- 1x2 for OSU
	- Numpad
	- TKL
	- Split keyboard layout (see ZSA Moonlander)
	- Alice Layout
- Better software update for keymaps
- Redesigned enclosure for plate mount switches
