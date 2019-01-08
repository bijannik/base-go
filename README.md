# Base Go
Base Go is a basic and minimal code derived from GNU Go, to start developing your own Go engine.

<!--
## Installation
To be written...
-->

## Changes to GNU Go
All the files taken from GNU Go contain their original copyright and license header, thus can be easily distinguished.
There have been no significant changes made in these files with the exception of commenting some lines. These lines all
follow a comment indicating they were commented by Base Go, and are commented because they are dependent on other files
of the GNU Go project which are not included in Base Go and are not necessary for this base code.

The only file that contains major changes is `gtp/play_gtp.c`. Generally, all lines present in this file are written by
the authors of GNU Go. The main changes to the file are listed below: 
* The list of GTP commands supported by the program has been greatly reduced in order to contain only the essential
commands.
* In order to exclude some unnecessary files from the project and keep the dependencies satisfied at the same time, some
lines have been moved to `play_gtp.c` from other files.

## Copyrights and License
All files from the GNU Go project Copyright 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008 and 2009 by the
Free Software Foundation  
All other files Copyright 2018, 2019 by Bijan Nikkhah

All files are under the GNU General Public License, which may be found in the file `LICENSE`, with the following
exception:
* The files `gtp/gtp.c` and `gtp.h` are copyright 2001 by the Free Software Foundation. In the interests of promoting
the Go Text Protocol, these two files are licensed under a less restrictive license than the GPL and are free for
unrestricted use. The GTP license appears in each file.

\* *To find out which files originally belonged to the **GNU Go** project see [Changes to GNU Go](#changes-to-gnu-go)*
