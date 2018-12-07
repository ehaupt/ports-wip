--- sdl/linux.c.orig	2018-09-06 06:11:45 UTC
+++ sdl/linux.c
@@ -6,7 +6,7 @@
 #include <dirent.h>
 #include <sys/stat.h>
 
-#include <SDL.h>
+#include <SDL/SDL.h>
 #include "sdl_wrapper.h"
 
 #include <gtk/gtk.h>
