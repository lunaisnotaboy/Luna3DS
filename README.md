<p align="center">
  ![Luna3DS](https://i.imgur.com/Hs4NtTy.png "Luna3DS")
</p>

## What it is

**Luna3DS** is a modified version of [Luma3DS](https://github.com/AuroraWright/Luma3DS) made for my personal modifications.

---

## Compiling

First you need to clone the repository with: `git clone https://github.com/lunaisnotaboy/Luna3DS.git`  
To compile, you'll need a recent commit of [makerom](https://github.com/profi200/Project_CTR) added to your PATH. You'll also need to install [firmtool](https://github.com/TuxSH/firmtool), its README contains installation instructions.
You'll also need to update your libctru and devkitARM installation to their latest releases.
Then, run `make`.
The produced file is called `boot.firm` and is meant to be copied to the root of your SD card, for usage with boot9strap.

---

## Licensing

This software is licensed under the terms of the GPLv3.
You can find a copy of the license in the LICENSE.txt file.

Files in the GDB stub are instead double-licensed as MIT or "GPLv2 or any later version", in which case it is specified in the file header.
