--- gui.c.orig	2018-09-06 07:03:04 UTC
+++ gui.c
@@ -3512,9 +3512,9 @@ void gui_pre_init( void )
   for( i=0; i<TB_END; i++ ) tbx[i].bm.srf = NULL;
 #endif
 
-  strcpy( songdir, "Songs" );
-  strcpy( instdir, "Instruments" );
-  strcpy( skindir, "Skins/SIDMonster-Light" );
+  strcpy( songdir, "%%EXAMPLESDIR%%/Songs" );
+  strcpy( instdir, "%%DATADIR%%/Instruments" );
+  strcpy( skindir, "%%DATADIR%%/Skins/SIDMonster-Light" );
 
   gui_load_prefs();
 
@@ -3915,9 +3915,9 @@ BOOL gui_init( void )
   strcpy( sfxfontname, "/boot/system/data/fonts/ttfonts/DejaVuSansMono.ttf" );
   strcpy( prpfontname, "/boot/system/data/fonts/ttfonts/DejaVuSans.ttf" );
 #else
-  strcpy( fixfontname, "ttf/DejaVuSansMono.ttf" );
-  strcpy( sfxfontname, "ttf/DejaVuSansMono.ttf" );
-  strcpy( prpfontname, "ttf/DejaVuSans.ttf" );
+  strcpy( fixfontname, "%%DEJAVUFONTSDIR%%/DejaVuSansMono.ttf" );
+  strcpy( sfxfontname, "%%DEJAVUFONTSDIR%%/DejaVuSansMono.ttf" );
+  strcpy( prpfontname, "%%DEJAVUFONTSDIR%%/DejaVuSans.ttf" );
 #endif  
 #endif  
 
