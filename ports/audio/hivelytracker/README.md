# Status

Segfaults immediately:

```console
$ hivelytracker 
SDL says: Fragment size must be a power of two
Segmentation fault (core dumped)

$ gdb -f hivelytracker
GNU gdb 6.1.1 [FreeBSD]
Copyright 2004 Free Software Foundation, Inc.
GDB is free software, covered by the GNU General Public License, and you are
welcome to change it and/or distribute copies of it under certain conditions.
Type "show copying" to see the conditions.
There is absolutely no warranty for GDB.  Type "show warranty" for details.
This GDB was configured as "amd64-marcel-freebsd"...(no debugging symbols found)...
(gdb) r
Starting program: /usr/local/bin/hivelytracker 
SDL says: Fragment size must be a power of two

Program received signal SIGSEGV, Segmentation fault.
0x0000000803928e43 in TTF_SizeUNICODE () from /usr/local/lib/libSDL_ttf-2.0.so.0
Current language:  auto; currently minimal
(gdb) bt
#0  0x0000000803928e43 in TTF_SizeUNICODE () from /usr/local/lib/libSDL_ttf-2.0.so.0
#1  0x0000000803928df1 in TTF_SizeText () from /usr/local/lib/libSDL_ttf-2.0.so.0
#2  0x000000000040686e in ?? ()
#3  0x000000000040aae0 in ?? ()
#4  0x000000000040c341 in ?? ()
#5  0x000000000042507f in ?? ()
#6  0x0000000000402e3b in ?? ()
#7  0x0000000000402495 in ?? ()
#8  0x0000000800650000 in ?? ()
#9  0x0000000000000000 in ?? ()
```

# Tickets/Bugs
