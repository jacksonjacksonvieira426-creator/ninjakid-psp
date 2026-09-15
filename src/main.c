// ninjakid - Port automatico J2ME -> PSP
// Gerado por portador.py
// MIDlet: main  Canvas: gamecanvas

#include <pspkernel.h>
#include <string.h>
#include <stdlib.h>
#include "j2me_gfx.h"
#include "j2me_font.h"
#include "j2me_input.h"
#include "j2me_image.h"
#include "j2me_clip.h"
#include "j2me_runtime.h"
#include <stdint.h>

// ============================================
// TIPOS J2ME -> ponteiros opacos em C
// ============================================
typedef void* Image;
typedef void* Graphics;
typedef void* Font;
typedef void* String;
typedef void* Command;
typedef void* Display;
typedef void* Displayable;
typedef void* MIDlet;
typedef void* Canvas;

PSP_MODULE_INFO("ninjakid", 0, 1, 0);
PSP_MAIN_THREAD_ATTR(THREAD_ATTR_USER);

#define SCR_W 480
#define SCR_H 272

// ============================================
// FORWARD DECLARATIONS das classes do projeto
// ============================================
typedef struct ofusc_096d_s ofusc_096d;
typedef struct gamecanvas_s gamecanvas;
typedef struct main_s main;

// ============================================
// ESTRUTURAS DE DADOS (traduzidas do J2ME)
// ============================================

// === Classe: gamecanvas$AnimationTask (extends Object) ===
// Padroes detectados: TEM_RUN, USA_TIMER
struct ofusc_096d_s {
    gamecanvas*     ofusc_020c;  // this$0 (Lgame/gamecanvas;)
};

// === Classe: gamecanvas (extends Canvas) ===
// Padroes detectados: CANVAS, TEM_PAINT, TEM_INPUT, USA_TIMER, USA_IMAGE
struct gamecanvas_s {
    Image*          offimage;  // offimage (Ljavax/microedition/lcdui/Image;)
    Graphics*       offscreenbuffer;  // offscreenbuffer (Ljavax/microedition/lcdui/Graphics;)
    DirectGraphics* DGoffscreenbuffer;  // DGoffscreenbuffer (Lcom/nokia/mid/ui/DirectGraphics;)
    Image*          tileimage;  // tileimage (Ljavax/microedition/lcdui/Image;)
    Graphics*       tileimagebuffer;  // tileimagebuffer (Ljavax/microedition/lcdui/Graphics;)
    DirectGraphics* DGtileimagebuffer;  // DGtileimagebuffer (Lcom/nokia/mid/ui/DirectGraphics;)
    Image**         bobgfx;  // bobgfx ([Ljavax/microedition/lcdui/Image;)
    int             keypressed;  // keypressed (I)
    int             game_keypressed;  // game_keypressed (I)
    int             screenX;  // screenX (I)
    int             screenY;  // screenY (I)
    main*           midlet;  // midlet (Lgame/main;)
    String**        tunes;  // tunes ([Ljava/lang/String;)
    int             red;  // red (I)
    int             green;  // green (I)
    int             blue;  // blue (I)
    int             i;  // i (I)
    int             mode;  // mode (I)
    int             textmode;  // textmode (I)
    int             waiter;  // waiter (I)
    RecordStore*    HighScore;  // HighScore (Ljavax/microedition/rms/RecordStore;)
    Timer*          animTimer;  // animTimer (Ljava/util/Timer;)
    int             animperiod;  // animperiod (I)
    String*         playerName;  // playerName (Ljava/lang/String;)
    int             score;  // score (I)
    String*         soundopt;  // soundopt (Ljava/lang/String;)
    String*         musicopt;  // musicopt (Ljava/lang/String;)
    String*         levelopt;  // levelopt (Ljava/lang/String;)
    int             difficulty;  // difficulty (I)
    int             optioncur;  // optioncur (I)
    int             hy;  // hy (I)
    String**        highscoreplayers;  // highscoreplayers ([Ljava/lang/String;)
    int*            highscorepoints;  // highscorepoints ([I)
    int             arrow_x;  // arrow_x (I)
    unsigned short* playerNamechars;  // playerNamechars ([C)
    int             lives;  // lives (I)
    Random*         random;  // random (Ljava/util/Random;)
    int**           sprites;  // sprites ([[I)
    int             anzahlsprites;  // anzahlsprites (I)
    int             spritecount;  // spritecount (I)
    Image**         icons;  // icons ([Ljavax/microedition/lcdui/Image;)
    Image*          loadicon;  // loadicon (Ljavax/microedition/lcdui/Image;)
    int             anzahl_icons;  // anzahl_icons (I)
    Image*          loadfont;  // loadfont (Ljavax/microedition/lcdui/Image;)
    int             fontwidth;  // fontwidth (I)
    int             fontheight;  // fontheight (I)
    int             playerXpos;  // playerXpos (I)
    int             playerYpos;  // playerYpos (I)
    int             player;  // player (I)
    int             playerdir;  // playerdir (I)
    int             lastmm;  // lastmm (I)
    int             playeranimdelay;  // playeranimdelay (I)
    int             logo;  // logo (I)
    int             iecom;  // iecom (I)
    int             titel;  // titel (I)
    int             door1;  // door1 (I)
    int             door2;  // door2 (I)
    int             explo;  // explo (I)
    int             extra;  // extra (I)
    signed char*    leveldata;  // leveldata ([B)
    signed char*    leveldata2;  // leveldata2 ([B)
    signed char*    maskdata;  // maskdata ([B)
    int             levelbreite;  // levelbreite (I)
    int             levelhoehe;  // levelhoehe (I)
    int             levelxpos;  // levelxpos (I)
    int             levelypos;  // levelypos (I)
    int             lastlevelxpos;  // lastlevelxpos (I)
    int             lastlevelypos;  // lastlevelypos (I)
    int**           levelinfo;  // levelinfo ([[I)
    int             level;  // level (I)
    signed char     MASK_PLAYER_RELEASE;  // MASK_PLAYER_RELEASE (B)
    signed char     MASK_WALKWAY;  // MASK_WALKWAY (B)
    signed char     MASK_WALL;  // MASK_WALL (B)
    signed char     MASK_LADDER;  // MASK_LADDER (B)
    signed char     MASK_PLAYERRELEASE;  // MASK_PLAYERRELEASE (B)
    signed char     MASK_VASE_START;  // MASK_VASE_START (B)
    signed char     MASK_VASE_END;  // MASK_VASE_END (B)
    signed char     MASK_FIRERELEASE;  // MASK_FIRERELEASE (B)
    signed char     MASK_FIREDIRCHANGE;  // MASK_FIREDIRCHANGE (B)
    signed char     MASK_PLASMARELEASE;  // MASK_PLASMARELEASE (B)
    signed char     MASK_GATE;  // MASK_GATE (B)
    signed char     MASK_DEAD;  // MASK_DEAD (B)
    int             skycolor;  // skycolor (I)
    int             faderdir;  // faderdir (I)
    int             faderypos;  // faderypos (I)
    int             fading;  // fading (I)
    int64_t         startTime;  // startTime (J)
    int64_t         endTime;  // endTime (J)
    int             gateblocks;  // gateblocks (I)
    int             titelscrolldir;  // titelscrolldir (I)
    int             titelwaiter;  // titelwaiter (I)
    int             scrollX;  // scrollX (I)
    int             scrollY;  // scrollY (I)
    int             softxpos;  // softxpos (I)
    int             softypos;  // softypos (I)
    int             jumpspeed;  // jumpspeed (I)
    int             playerjumps;  // playerjumps (I)
    int             lastlevelnr;  // lastlevelnr (I)
    int             lastenemynr;  // lastenemynr (I)
    int             keyuppressed;  // keyuppressed (I)
    int             playerfalling;  // playerfalling (I)
    int             XposOffset;  // XposOffset (I)
    int             aufleiter;  // aufleiter (I)
    int             explowaiter;  // explowaiter (I)
    int             extrajumps;  // extrajumps (I)
    int             extrajumpspeed;  // extrajumpspeed (I)
    int             extraypos;  // extraypos (I)
    signed char     keys;  // keys (B)
    int             diamant;  // diamant (I)
    int             playerhit;  // playerhit (I)
    int             playerhitdir;  // playerhitdir (I)
    int             playerpower;  // playerpower (I)
    int             playerflashing;  // playerflashing (I)
    int             playerlostlive;  // playerlostlive (I)
    int             hitrotate;  // hitrotate (I)
    int             hitrotatedelay;  // hitrotatedelay (I)
    int             lastplayerxpos;  // lastplayerxpos (I)
    int             lastplayerypos;  // lastplayerypos (I)
    int             lastscrollx;  // lastscrollx (I)
    int             lastscrolly;  // lastscrolly (I)
    int             exploonly;  // exploonly (I)
    int             firereleased;  // firereleased (I)
    int             playerONlift;  // playerONlift (I)
    int             extralife;  // extralife (I)
    int             swordpower;  // swordpower (I)
    int             energyfound;  // energyfound (I)
    int             levelok;  // levelok (I)
    Sound*          sound;  // sound (Lcom/nokia/mid/sound/Sound;)
    int             pause;  // pause (I)
};

// === Classe: main (extends MIDlet) ===
// Padroes detectados: MIDLET, TEM_STARTAPP, USA_TIMER
struct main_s {
    Display*        display;  // display (Ljavax/microedition/lcdui/Display;)
    gamecanvas*     screen;  // screen (Lgame/gamecanvas;)
    int             started;  // started (Z)
};

// ============================================
// METODOS (traduzidos do bytecode)
// ============================================

// === gamecanvas$AnimationTask.gamecanvas$AnimationTask_constructor ((Lgame/gamecanvas;Lgame/main;)V) ===
// Instrucoes: 8
// APIs usadas:
//   1x java/util/TimerTask.<init> -> ??? java/util/TimerTask.<init>
void gamecanvas$AnimationTask_constructor() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas$AnimationTask.gamecanvas$AnimationTask_run (()V) ===
// Instrucoes: 15
// APIs usadas:
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   1x java/lang/String.concat -> ??? java/lang/String.concat
//   1x java/io/PrintStream.println -> ??? java/io/PrintStream.println
//   1x java/lang/Throwable.printStackTrace -> ??? java/lang/Throwable.printStackTrace
void gamecanvas$AnimationTask_run() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_constructor ((Lgame/main;)V) ===
// Instrucoes: 543
// APIs usadas:
//   1x com/nokia/mid/ui/FullCanvas.<init> -> ??? com/nokia/mid/ui/FullCanvas.<init>
//   1x java/util/Random.<init> -> j2me_random_init
//   1x java/util/Timer.<init> -> ??? java/util/Timer.<init>
//   1x java/util/Timer.schedule -> ??? java/util/Timer.schedule
void gamecanvas_constructor() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_keyPressed ((I)V) ===
// Instrucoes: 9
// APIs usadas:
//   1x javax/microedition/lcdui/Canvas.getGameAction -> j2me_input_get_actions
void gamecanvas_keyPressed() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_keyReleased ((I)V) ===
// Instrucoes: 7
void gamecanvas_keyReleased() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_DoAll (()V) ===
// Instrucoes: 1790
// APIs usadas:
//   7x java/lang/String.charAt -> ??? java/lang/String.charAt
//   7x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   3x java/lang/System.gc -> ??? java/lang/System.gc
//   2x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   2x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   2x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
void gamecanvas_DoAll() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_paint ((Ljavax/microedition/lcdui/Graphics;)V) ===
// Instrucoes: 1560
// APIs usadas:
//   56x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   23x java/lang/String.concat -> ??? java/lang/String.concat
//   11x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   9x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   7x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   7x java/lang/String.charAt -> ??? java/lang/String.charAt
//   6x java/util/Random.nextInt -> j2me_random_next
//   5x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
void gamecanvas_paint() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_InitGFX (()V) ===
// Instrucoes: 137
// APIs usadas:
//   2x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   2x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   2x com/nokia/mid/ui/DirectUtils.getDirectGraphics -> ??? com/nokia/mid/ui/DirectUtils.getDirectGraphics
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
void gamecanvas_InitGFX() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_LoadGFX (()V) ===
// Instrucoes: 146
// APIs usadas:
//   22x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   1x java/lang/String.concat -> ??? java/lang/String.concat
//   1x java/io/PrintStream.println -> ??? java/io/PrintStream.println
void gamecanvas_LoadGFX() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_InitScores (()V) ===
// Instrucoes: 75
// APIs usadas:
//   1x javax/microedition/rms/RecordStore.openRecordStore -> ??? javax/microedition/rms/RecordStore.openRecordStore
//   1x javax/microedition/rms/RecordStore.getNumRecords -> ??? javax/microedition/rms/RecordStore.getNumRecords
void gamecanvas_InitScores() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_InsertScore (()V) ===
// Instrucoes: 105
// APIs usadas:
//   1x java/io/ByteArrayOutputStream.<init> -> ??? java/io/ByteArrayOutputStream.<init>
//   1x java/io/DataOutputStream.<init> -> ??? java/io/DataOutputStream.<init>
//   1x java/io/DataOutputStream.writeUTF -> ??? java/io/DataOutputStream.writeUTF
//   1x java/io/DataOutputStream.writeInt -> ??? java/io/DataOutputStream.writeInt
//   1x java/io/DataOutputStream.close -> ??? java/io/DataOutputStream.close
//   1x java/io/ByteArrayOutputStream.toByteArray -> ??? java/io/ByteArrayOutputStream.toByteArray
//   1x javax/microedition/rms/RecordStore.setRecord -> ??? javax/microedition/rms/RecordStore.setRecord
//   1x java/io/ByteArrayOutputStream.close -> ??? java/io/ByteArrayOutputStream.close
void gamecanvas_InsertScore() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_GetHighScore (()V) ===
// Instrucoes: 40
// APIs usadas:
//   1x javax/microedition/rms/RecordStore.getRecord -> ??? javax/microedition/rms/RecordStore.getRecord
//   1x java/io/ByteArrayInputStream.<init> -> ??? java/io/ByteArrayInputStream.<init>
//   1x java/io/DataInputStream.<init> -> ??? java/io/DataInputStream.<init>
//   1x java/io/DataInputStream.readUTF -> ??? java/io/DataInputStream.readUTF
//   1x java/io/DataInputStream.readInt -> ??? java/io/DataInputStream.readInt
//   1x java/io/DataInputStream.close -> ??? java/io/DataInputStream.close
void gamecanvas_GetHighScore() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_AddHighScore (()V) ===
// Instrucoes: 34
// APIs usadas:
//   1x java/io/ByteArrayOutputStream.<init> -> ??? java/io/ByteArrayOutputStream.<init>
//   1x java/io/DataOutputStream.<init> -> ??? java/io/DataOutputStream.<init>
//   1x java/io/DataOutputStream.writeUTF -> ??? java/io/DataOutputStream.writeUTF
//   1x java/io/DataOutputStream.writeInt -> ??? java/io/DataOutputStream.writeInt
//   1x java/io/DataOutputStream.close -> ??? java/io/DataOutputStream.close
//   1x java/io/ByteArrayOutputStream.toByteArray -> ??? java/io/ByteArrayOutputStream.toByteArray
//   1x javax/microedition/rms/RecordStore.addRecord -> ??? javax/microedition/rms/RecordStore.addRecord
//   1x java/io/ByteArrayOutputStream.close -> ??? java/io/ByteArrayOutputStream.close
void gamecanvas_AddHighScore() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_InitSpriteMaster (()V) ===
// Instrucoes: 30
void gamecanvas_InitSpriteMaster() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_bornSprite ((IIIIIIIII)I) ===
// Instrucoes: 124
int gamecanvas_bornSprite() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_MoveEnemies (()V) ===
// Instrucoes: 2673
// APIs usadas:
//   4x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
//   4x javax/microedition/lcdui/Graphics.drawLine -> ??? javax/microedition/lcdui/Graphics.drawLine
//   3x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   1x java/util/Random.nextInt -> j2me_random_next
void gamecanvas_MoveEnemies() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_drawSprites ((Lcom/nokia/mid/ui/DirectGraphics;)V) ===
// Instrucoes: 182
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   2x com/nokia/mid/ui/DirectGraphics.drawImage -> ??? com/nokia/mid/ui/DirectGraphics.drawImage
void gamecanvas_drawSprites() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_hideSprite ((I)V) ===
// Instrucoes: 8
void gamecanvas_hideSprite() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_showSprite ((I)V) ===
// Instrucoes: 8
void gamecanvas_showSprite() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_killSprite ((I)V) ===
// Instrucoes: 71
void gamecanvas_killSprite() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_setSpritePos ((III)V) ===
// Instrucoes: 15
void gamecanvas_setSpritePos() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_setSpriteManipulation ((II)V) ===
// Instrucoes: 8
void gamecanvas_setSpriteManipulation() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_getSpriteManipulation ((I)I) ===
// Instrucoes: 7
int gamecanvas_getSpriteManipulation() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_getSpriteXpos ((I)I) ===
// Instrucoes: 7
int gamecanvas_getSpriteXpos() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_getSpriteYpos ((I)I) ===
// Instrucoes: 7
int gamecanvas_getSpriteYpos() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_setSpriteAnim ((II)V) ===
// Instrucoes: 8
void gamecanvas_setSpriteAnim() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_getSpriteAnim ((I)I) ===
// Instrucoes: 7
int gamecanvas_getSpriteAnim() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_getSpriteHeight ((I)I) ===
// Instrucoes: 8
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getHeight -> ??? javax/microedition/lcdui/Image.getHeight
int gamecanvas_getSpriteHeight() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_getSpriteWidth ((I)I) ===
// Instrucoes: 8
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
int gamecanvas_getSpriteWidth() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_getGFXHeight ((I)I) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getHeight -> ??? javax/microedition/lcdui/Image.getHeight
int gamecanvas_getGFXHeight() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_getGFXWidth ((I)I) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
int gamecanvas_getGFXWidth() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_getHide ((I)I) ===
// Instrucoes: 7
int gamecanvas_getHide() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_LoadIcons ((Ljava/lang/String;)V) ===
// Instrucoes: 22
// APIs usadas:
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   1x java/lang/System.gc -> ??? java/lang/System.gc
//   1x java/lang/String.concat -> ??? java/lang/String.concat
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x javax/microedition/lcdui/Image.getWidth -> ??? javax/microedition/lcdui/Image.getWidth
void gamecanvas_LoadIcons() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_DrawText ((Ljavax/microedition/lcdui/Graphics;Ljava/lang/String;III)V) ===
// Instrucoes: 382
// APIs usadas:
//   9x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   8x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   3x java/lang/String.length -> ??? java/lang/String.length
//   2x java/lang/String.charAt -> ??? java/lang/String.charAt
//   1x javax/microedition/lcdui/Graphics.getClipX -> ??? javax/microedition/lcdui/Graphics.getClipX
//   1x javax/microedition/lcdui/Graphics.getClipY -> ??? javax/microedition/lcdui/Graphics.getClipY
//   1x javax/microedition/lcdui/Graphics.getClipHeight -> ??? javax/microedition/lcdui/Graphics.getClipHeight
//   1x javax/microedition/lcdui/Graphics.getClipWidth -> ??? javax/microedition/lcdui/Graphics.getClipWidth
void gamecanvas_DrawText() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_LoadFont ((Ljava/lang/String;)V) ===
// Instrucoes: 11
// APIs usadas:
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   1x java/lang/String.concat -> ??? java/lang/String.concat
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
void gamecanvas_LoadFont() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_LoadLevel ((Ljava/lang/String;)V) ===
// Instrucoes: 102
// APIs usadas:
//   5x java/io/InputStream.read -> ??? java/io/InputStream.read
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   1x java/lang/System.gc -> ??? java/lang/System.gc
//   1x java/lang/Object.getClass -> ??? java/lang/Object.getClass
//   1x java/lang/String.concat -> ??? java/lang/String.concat
//   1x java/lang/Class.getResourceAsStream -> ??? java/lang/Class.getResourceAsStream
//   1x java/io/InputStream.close -> ??? java/io/InputStream.close
void gamecanvas_LoadLevel() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_DrawIcons ((I)V) ===
// Instrucoes: 220
// APIs usadas:
//   5x javax/microedition/lcdui/Graphics.fillRect -> j2me_gfx_fill_rect
//   5x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   4x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   1x javax/microedition/lcdui/Graphics.setColor -> j2me_gfx_set_color
void gamecanvas_DrawIcons() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_MakeSprites (()V) ===
// Instrucoes: 146
// APIs usadas:
//   4x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
//   3x javax/microedition/lcdui/Image.getGraphics -> j2me_image_get_graphics
//   2x com/nokia/mid/ui/DirectUtils.createImage -> ??? com/nokia/mid/ui/DirectUtils.createImage
//   1x java/lang/System.gc -> ??? java/lang/System.gc
//   1x javax/microedition/lcdui/Image.createImage -> j2me_image_create
void gamecanvas_MakeSprites() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_DrawIt ((IIII)V) ===
// Instrucoes: 217
// APIs usadas:
//   2x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   2x com/nokia/mid/ui/DirectGraphics.drawImage -> ??? com/nokia/mid/ui/DirectGraphics.drawImage
//   2x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void gamecanvas_DrawIt() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_Scroll ((II)V) ===
// Instrucoes: 268
void gamecanvas_Scroll() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_GetIcon ((II)I) ===
// Instrucoes: 29
int gamecanvas_GetIcon() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_SetIcon ((IIBBB)V) ===
// Instrucoes: 54
void gamecanvas_SetIcon() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_checkkollision ((IIII)I) ===
// Instrucoes: 63
int gamecanvas_checkkollision() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_GetLevelInfo ((I)V) ===
// Instrucoes: 764
// APIs usadas:
//   12x java/lang/StringBuffer.append -> ??? java/lang/StringBuffer.append
//   12x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   6x java/lang/StringBuffer.<init> -> ??? java/lang/StringBuffer.<init>
//   4x javax/microedition/lcdui/Image.createImage -> j2me_image_create
//   1x java/lang/System.gc -> ??? java/lang/System.gc
void gamecanvas_GetLevelInfo() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_MovePlayer ((I)V) ===
// Instrucoes: 295
void gamecanvas_MovePlayer() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_checkHit (()V) ===
// Instrucoes: 117
void gamecanvas_checkHit() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_JumpPlayer (()V) ===
// Instrucoes: 144
void gamecanvas_JumpPlayer() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_FallPlayer (()V) ===
// Instrucoes: 132
void gamecanvas_FallPlayer() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_ExtraJump (()V) ===
// Instrucoes: 34
void gamecanvas_ExtraJump() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_openGate ((II)V) ===
// Instrucoes: 75
void gamecanvas_openGate() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_titelscroll (()V) ===
// Instrucoes: 48
// APIs usadas:
//   1x javax/microedition/lcdui/Graphics.setClip -> j2me_clip_push
//   1x javax/microedition/lcdui/Graphics.drawImage -> j2me_image_blit
void gamecanvas_titelscroll() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_PlaySound ((I)V) ===
// Instrucoes: 32
// APIs usadas:
//   1x com/nokia/mid/sound/Sound.<init> -> ??? com/nokia/mid/sound/Sound.<init>
//   1x com/nokia/mid/sound/Sound.init -> ??? com/nokia/mid/sound/Sound.init
//   1x com/nokia/mid/sound/Sound.play -> ??? com/nokia/mid/sound/Sound.play
void gamecanvas_PlaySound() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_StopSound (()V) ===
// Instrucoes: 4
// APIs usadas:
//   1x com/nokia/mid/sound/Sound.stop -> ??? com/nokia/mid/sound/Sound.stop
void gamecanvas_StopSound() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_convertHexToBinary ((Ljava/lang/String;)[B) ===
// Instrucoes: 67
// APIs usadas:
//   3x java/lang/Exception.<init> -> ??? java/lang/Exception.<init>
//   2x java/lang/String.length -> ??? java/lang/String.length
//   2x java/lang/String.valueOf -> ??? java/lang/String.valueOf
//   1x java/lang/String.substring -> ??? java/lang/String.substring
//   1x java/lang/String.charAt -> ??? java/lang/String.charAt
//   1x java/lang/Integer.parseInt -> j2me_int_parse
//   1x java/lang/String.concat -> ??? java/lang/String.concat
signed char* gamecanvas_convertHexToBinary() {
    // TODO: traduzir logica do bytecode
    return 0;  // TODO
}

// === gamecanvas.gamecanvas_ReborneEnemy ((I)V) ===
// Instrucoes: 96
void gamecanvas_ReborneEnemy() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_PlayerDead (()V) ===
// Instrucoes: 53
void gamecanvas_PlayerDead() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_resetdata (()V) ===
// Instrucoes: 134
void gamecanvas_resetdata() {
    // TODO: traduzir logica do bytecode
}

// === gamecanvas.gamecanvas_GetExtra (()V) ===
// Instrucoes: 110
void gamecanvas_GetExtra() {
    // TODO: traduzir logica do bytecode
}

// === main.main_constructor (()V) ===
// Instrucoes: 12
// APIs usadas:
//   1x javax/microedition/midlet/MIDlet.<init> -> ??? javax/microedition/midlet/MIDlet.<init>
void main_constructor() {
    // TODO: traduzir logica do bytecode
}

// === main.main_startApp (()V) ===
// Instrucoes: 13
// APIs usadas:
//   1x javax/microedition/lcdui/Display.getDisplay -> j2me_display_get
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void main_startApp() {
    // TODO: traduzir logica do bytecode
}

// === main.main_pauseApp (()V) ===
// Instrucoes: 1
void main_pauseApp() {
    // TODO: traduzir logica do bytecode
}

// === main.main_destroyApp ((Z)V) ===
// Instrucoes: 13
// APIs usadas:
//   1x javax/microedition/rms/RecordStore.closeRecordStore -> ??? javax/microedition/rms/RecordStore.closeRecordStore
//   1x java/util/Timer.cancel -> ??? java/util/Timer.cancel
//   1x javax/microedition/midlet/MIDlet.notifyDestroyed -> ??? javax/microedition/midlet/MIDlet.notifyDestroyed
void main_destroyApp() {
    // TODO: traduzir logica do bytecode
}

// === main.main_hideNotify (()V) ===
// Instrucoes: 1
void main_hideNotify() {
    // TODO: traduzir logica do bytecode
}

// === main.main_showNotify (()V) ===
// Instrucoes: 6
// APIs usadas:
//   1x javax/microedition/lcdui/Display.setCurrent -> j2me_display_set
void main_showNotify() {
    // TODO: traduzir logica do bytecode
}

// === main.main_exitRequested (()V) ===
// Instrucoes: 4
void main_exitRequested() {
    // TODO: traduzir logica do bytecode
}

// ============================================
// GAME LOOP PRINCIPAL
// ============================================

int main(void) {
    j2me_gfx_init();
    j2me_input_init();
    j2me_random_init();

    while (1) {
        j2me_input_update();
        if (j2me_input_should_quit()) break;

        j2me_gfx_begin_frame();
        j2me_gfx_clear(0x101020);

        // TODO: chamar metodos do jogo aqui
        // main_startApp();
        // gamecanvas_paint();

        j2me_gfx_flip();
    }

    j2me_gfx_shutdown();
    sceKernelExitGame();
    return 0;
}
