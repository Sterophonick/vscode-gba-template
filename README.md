# VSCode GBA Template
i really like VS Code so i made a template for it<br/>
this template is primarily made with Linux in mind, you will likely need to update the config in `.vscode` to make it work on your machine :P

# Tasks
`Launch Usenti`: Executes `/usr/bin/usenti`<br/>
`Launch OpenMPT`: Executes `/usr/bin/openmpt`<br/>
`Run in No$GBA`: Runs the `.gba` file in No$GBA via `/usr/bin/nocashgba-debugger`<br/>
`Run in mGBA`: Runs the `.gba` file in mGBA via `/usr/bin/mgba-qt`<br/>

# Debugging
The GDB server works as it should, thank god.

# Editing / Adapting
This template can be altered to fit many different needs.<br/>
If you adapt it to fit an older SDK (tested with GCC 3.2.2), you wll be unable to use the older GDB.<br/>
Instead use `arm-none-eabi-gdb` from devkitPro.<br/>

# Arch Linux users
HAM v2.71 for Linux can be installed via [this AUR package](https://aur.archlinux.org/packages/ham-v2.71-linux)<br/>
HeartLib can be installed via [this AUR package](https://aur.archlinux.org/packages/heartlib)<br/>
DevKit Advance for Linux can be installed via [this AUR package](https://aur.archlinux.org/packages/devkitadv)<br/>
