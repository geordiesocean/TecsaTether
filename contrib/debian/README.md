
Debian
====================
This directory contains files used to package tecsatetherd/tecsatether-qt
for Debian-based Linux systems. If you compile tecsatetherd/tecsatether-qt yourself, there are some useful files here.

## tecsatether: URI support ##


tecsatether-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install tecsatether-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your tecsatether-qt binary to `/usr/bin`
and the `../../share/pixmaps/tecsatether128.png` to `/usr/share/pixmaps`

tecsatether-qt.protocol (KDE)

