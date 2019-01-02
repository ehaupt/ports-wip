--- apone/mods/audioplayer/player_linux.h.orig	2018-10-02 18:57:08 UTC
+++ apone/mods/audioplayer/player_linux.h
@@ -3,7 +3,12 @@
 
 #include "audioplayer.h"
 
+
+#ifdef __FreeBSD__
+#include <sys/soundcard.h>
+#else
 #include <linux/soundcard.h>
+#endif
 #include <alsa/asoundlib.h>
 
 #include <thread>
