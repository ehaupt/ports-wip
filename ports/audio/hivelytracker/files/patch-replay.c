--- replay.c.orig	2021-10-31 14:52:21 UTC
+++ replay.c
@@ -71,7 +71,7 @@ struct AHIRequest *ahi_io[2] = { NULL, NULL };
 int32              ahi_dev = -1;
 #else
 #define FREQ 48000
-#ifdef __linux__
+#if defined(__linux__) || defined(__FreeBSD__)
 #define OUTPUT_LEN ((FREQ/50)*2) /* Linux can't cope with buffer being too small, so we sacrifice GUI responsiveness... */
 #else
 #define OUTPUT_LEN (FREQ/50)
@@ -4039,6 +4039,20 @@ BOOL rp_init( void )
 
   wanted.callback = (void*)do_the_music;
   wanted.userdata = 0;
+
+  /* SDL audio with arts/dsp backends expect ^2, so round up.
+   * For 48KHz this should be 512.
+   * https://graphics.stanford.edu/~seander/bithacks.html#RoundUpPowerOf2
+   * https://github.com/FNA-XNA/FAudio/issues/183
+   * /usr/ports/audio/faudio/files/patch-src_FAudio__platform__sdl2.c
+  */
+  wanted.samples--;
+  wanted.samples |= wanted.samples >> 1;
+  wanted.samples |= wanted.samples >> 2;
+  wanted.samples |= wanted.samples >> 4;
+  wanted.samples |= wanted.samples >> 8;
+  wanted.samples |= wanted.samples >> 16;
+  wanted.samples++;
 
   if( SDL_OpenAudio( &wanted, NULL ) < 0 )
   {
