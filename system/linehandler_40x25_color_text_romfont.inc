;--- this code was autogenerated... lasciate ogni speranza, voi ch'entrate! ---
ld     ZL, X+ ;get index 0       ;(Mcy=0, Scy=0)
;ld    ZL, X+                    ;(Mcy=1, Scy=1)
elpm   ZL, Z ;get pattern 0      ;(Mcy=2, Scy=2)
;elpm  ZL, Z                     ;(Mcy=3, Scy=3)
;;elpm ZL, Z                     ;(Mcy=4, Scy=4)
ld     ZH, Y+ ;get color 0       ;(Mcy=5, Scy=5)
lpm    r16, Z ;get pixels 0L     ;(Mcy=6, Scy=6)
;lpm   r16, Z                    ;(Mcy=7, Scy=7)
;;lpm  r16, Z                    ;(Mcy=8, Scy=0)
swap   ZL                        ;(Mcy=9, Scy=1)
lpm    r17, Z ;get pixels 0R     ;(Mcy=10, Scy=2)
;lpm   r17, Z                    ;(Mcy=11, Scy=3)
;;lpm  r17, Z                    ;(Mcy=12, Scy=4)
in     ZH, IO_(GPIOR0)           ;(Mcy=13, Scy=5)
ld     ZL, X+ ;get index 1       ;(Mcy=14, Scy=6)
;ld    ZL, X+                    ;(Mcy=15, Scy=7)
elpm   ZL, Z ;get pattern 1      ;(Mcy=16, Scy=0)
;elpm  ZL, Z                     ;(Mcy=17, Scy=1)
;;elpm ZL, Z                     ;(Mcy=18, Scy=2)
ld     ZH, Y+ ;get color 1       ;(Mcy=19, Scy=3)
lpm    r18, Z ;get pixels 1L     ;(Mcy=20, Scy=4)
;lpm   r18, Z                    ;(Mcy=21, Scy=5)
;;lpm  r18, Z                    ;(Mcy=22, Scy=6)
swap   ZL                        ;(Mcy=23, Scy=7)
lpm    r19, Z ;get pixels 1R     ;(Mcy=24, Scy=0)
;lpm   r19, Z                    ;(Mcy=25, Scy=1)
;;lpm  r19, Z                    ;(Mcy=26, Scy=2)
in     ZH, IO_(GPIOR0)           ;(Mcy=27, Scy=3)
ld     ZL, X+ ;get index 2       ;(Mcy=28, Scy=4)
;ld    ZL, X+                    ;(Mcy=29, Scy=5)
elpm   ZL, Z ;get pattern 2      ;(Mcy=30, Scy=6)
;elpm  ZL, Z                     ;(Mcy=31, Scy=7)
;;elpm ZL, Z                     ;(Mcy=32, Scy=0)
ld     ZH, Y+ ;get color 2       ;(Mcy=33, Scy=1)
lpm    r20, Z ;get pixels 2L     ;(Mcy=34, Scy=2)
;lpm   r20, Z                    ;(Mcy=35, Scy=3)
;;lpm  r20, Z                    ;(Mcy=36, Scy=4)
swap   ZL                        ;(Mcy=37, Scy=5)
lpm    ZH, Z ; get pixels 2R     ;(Mcy=38, Scy=6)
;lpm   ZH, Z                     ;(Mcy=39, Scy=7)
;;lpm ZH,  Z                     ;(Mcy=40, Scy=0) ;-------- tile 0L
out    IO_(PORTC), r16 ;out 0L   ;(Mcy=41, Scy=1)
mov    r16, ZH                   ;(Mcy=42, Scy=2)
in     ZH, IO_(GPIOR0)           ;(Mcy=43, Scy=3)
ld     ZL, X+ ;get index 3       ;(Mcy=44, Scy=4)
;ld    ZL, X+                    ;(Mcy=45, Scy=5)
elpm   ZL, Z ;get pattern 3      ;(Mcy=46, Scy=6)
;elpm  ZL, Z                     ;(Mcy=47, Scy=7)
;;elpm ZL, Z                     ;(Mcy=48, Scy=0) ;-------- tile 0R
out    IO_(PORTC), r17 ;out 0R   ;(Mcy=49, Scy=1)
ld     ZH, Y+ ;get color 3       ;(Mcy=50, Scy=2)
;ld    ZH, Y+                    ;(Mcy=51, Scy=3)
lpm    r17, Z ;get pixels 3L     ;(Mcy=52, Scy=4)
;lpm   r17, Z                    ;(Mcy=53, Scy=5)
;;lpm  r17, Z                    ;(Mcy=54, Scy=6)
swap   ZL                        ;(Mcy=55, Scy=7)
out    IO_(PORTC), r18 ;out 1L   ;(Mcy=56, Scy=0) ;-------- tile 1L
lpm    r18, Z ;get pixels 3R     ;(Mcy=57, Scy=1)
;lpm   r18, Z                    ;(Mcy=58, Scy=2)
;;lpm  r18, Z                    ;(Mcy=59, Scy=3)
in     ZH, IO_(GPIOR0)           ;(Mcy=60, Scy=4)
ld     ZL, X+ ;get index 4       ;(Mcy=61, Scy=5)
;ld    ZL, X+                    ;(Mcy=62, Scy=6)
elpm   ZL, Z ;get pattern 4      ;(Mcy=63, Scy=7)
;elpm  ZL, Z                     ;(Mcy=64, Scy=0) ;-------- tile 1R
;;elpm ZL, Z                     ;(Mcy=65, Scy=1)
out    IO_(PORTC), r19 ;out 1R   ;(Mcy=66, Scy=2)
ld     ZH, Y+ ;get color 4       ;(Mcy=67, Scy=3)
;ld    ZH, Y+                    ;(Mcy=68, Scy=4)
lpm    r19, Z ;get pixels 4L     ;(Mcy=69, Scy=5)
;lpm   r19, Z                    ;(Mcy=70, Scy=6)
;;lpm  r19, Z                    ;(Mcy=71, Scy=7)
out    IO_(PORTC), r20 ;out 2L   ;(Mcy=72, Scy=0) ;-------- tile 2L
swap   ZL                        ;(Mcy=73, Scy=1)
lpm    r20, Z ;get pixels 4R     ;(Mcy=74, Scy=2)
;lpm   r20, Z                    ;(Mcy=75, Scy=3)
;;lpm  r20, Z                    ;(Mcy=76, Scy=4)
in     ZH, IO_(GPIOR0)           ;(Mcy=77, Scy=5)
ld     ZL, X+ ;get index 5       ;(Mcy=78, Scy=6)
;ld    ZL, X+                    ;(Mcy=79, Scy=7)
out    IO_(PORTC), r16 ;out 2R   ;(Mcy=80, Scy=0) ;-------- tile 2R
elpm   ZL, Z ;get pattern 5      ;(Mcy=81, Scy=1)
;elpm  ZL, Z                     ;(Mcy=82, Scy=2)
;;elpm ZL, Z                     ;(Mcy=83, Scy=3)
ld     ZH, Y+ ;get color 5       ;(Mcy=84, Scy=4)
;ld    ZH, Y+                    ;(Mcy=85, Scy=5)
lpm    r16, Z ;get pixels 5L     ;(Mcy=86, Scy=6)
;lpm   r16, Z                    ;(Mcy=87, Scy=7)
;;lpm  r16, Z                    ;(Mcy=88, Scy=0) ;-------- tile 3L
out    IO_(PORTC), r17 ;out 3L   ;(Mcy=89, Scy=1)
swap   ZL                        ;(Mcy=90, Scy=2)
lpm    r17, Z ;get pixels 5R     ;(Mcy=91, Scy=3)
;lpm   r17, Z                    ;(Mcy=92, Scy=4)
;;lpm  r17, Z                    ;(Mcy=93, Scy=5)
in     ZH, IO_(GPIOR0)           ;(Mcy=94, Scy=6)
ld     ZL, X+ ;get index 6       ;(Mcy=95, Scy=7)
;ld    ZL, X+                    ;(Mcy=96, Scy=0) ;-------- tile 3R
out    IO_(PORTC), r18 ;out 3R   ;(Mcy=97, Scy=1)
elpm   ZL, Z ;get pattern 6      ;(Mcy=98, Scy=2)
;elpm  ZL, Z                     ;(Mcy=99, Scy=3)
;;elpm ZL, Z                     ;(Mcy=100, Scy=4)
ld     ZH, Y+ ;get color 6       ;(Mcy=101, Scy=5)
;ld    ZH, Y+                    ;(Mcy=102, Scy=6)
lpm    r18, Z ;get pixels 6L     ;(Mcy=103, Scy=7)
;lpm   r18, Z                    ;(Mcy=104, Scy=0) ;-------- tile 4L
;;lpm  r18, Z                    ;(Mcy=105, Scy=1)
out    IO_(PORTC), r19 ;out 4L   ;(Mcy=106, Scy=2)
swap   ZL                        ;(Mcy=107, Scy=3)
lpm    r19, Z ;get pixels 6R     ;(Mcy=108, Scy=4)
;lpm   r19, Z                    ;(Mcy=109, Scy=5)
;;lpm  r19, Z                    ;(Mcy=110, Scy=6)
in     ZH, IO_(GPIOR0)           ;(Mcy=111, Scy=7)
out    IO_(PORTC), r20 ;out 4R   ;(Mcy=112, Scy=0) ;-------- tile 4R
ld     ZL, X+ ;get index 7       ;(Mcy=113, Scy=1)
;ld    ZL, X+                    ;(Mcy=114, Scy=2)
elpm   ZL, Z ;get pattern 7      ;(Mcy=115, Scy=3)
;elpm  ZL, Z                     ;(Mcy=116, Scy=4)
;;elpm ZL, Z                     ;(Mcy=117, Scy=5)
ld     ZH, Y+ ;get color 7       ;(Mcy=118, Scy=6)
;ld    ZH, Y+                    ;(Mcy=119, Scy=7)
out    IO_(PORTC), r16 ;out 5L   ;(Mcy=120, Scy=0) ;-------- tile 5L
lpm    r20, Z ;get pixels 7L     ;(Mcy=121, Scy=1)
;lpm   r20, Z                    ;(Mcy=122, Scy=2)
;;lpm  r20, Z                    ;(Mcy=123, Scy=3)
swap   ZL                        ;(Mcy=124, Scy=4)
lpm    r16, Z ;get pixels 7R     ;(Mcy=125, Scy=5)
;lpm   r16, Z                    ;(Mcy=126, Scy=6)
;;lpm  r16, Z                    ;(Mcy=127, Scy=7)
out    IO_(PORTC), r17 ;out 5R   ;(Mcy=128, Scy=0) ;-------- tile 5R
in     ZH, IO_(GPIOR0)           ;(Mcy=129, Scy=1)
ld     ZL, X+ ;get index 8       ;(Mcy=130, Scy=2)
;ld    ZL, X+                    ;(Mcy=131, Scy=3)
elpm   ZL, Z ;get pattern 8      ;(Mcy=132, Scy=4)
;elpm  ZL, Z                     ;(Mcy=133, Scy=5)
;;elpm ZL, Z                     ;(Mcy=134, Scy=6)
ld     ZH, Y+ ;get color 8       ;(Mcy=135, Scy=7)
;ld    ZH, Y+                    ;(Mcy=136, Scy=0) ;-------- tile 6L
out    IO_(PORTC), r18 ;out 6L   ;(Mcy=137, Scy=1)
lpm    r17, Z ;get pixels 8L     ;(Mcy=138, Scy=2)
;lpm   r17, Z                    ;(Mcy=139, Scy=3)
;;lpm  r17, Z                    ;(Mcy=140, Scy=4)
swap   ZL                        ;(Mcy=141, Scy=5)
lpm    r18, Z ;get pixels 8R     ;(Mcy=142, Scy=6)
;lpm   r18, Z                    ;(Mcy=143, Scy=7)
;;lpm  r18, Z                    ;(Mcy=144, Scy=0) ;-------- tile 6R
out    IO_(PORTC), r19 ;out 6R   ;(Mcy=145, Scy=1)
in     ZH, IO_(GPIOR0)           ;(Mcy=146, Scy=2)
ld     ZL, X+ ;get index 9       ;(Mcy=147, Scy=3)
;ld    ZL, X+                    ;(Mcy=148, Scy=4)
elpm   ZL, Z ;get pattern 9      ;(Mcy=149, Scy=5)
;elpm  ZL, Z                     ;(Mcy=150, Scy=6)
;;elpm ZL, Z                     ;(Mcy=151, Scy=7)
out    IO_(PORTC), r20 ;out 7L   ;(Mcy=152, Scy=0) ;-------- tile 7L
ld     ZH, Y+ ;get color 9       ;(Mcy=153, Scy=1)
;ld    ZH, Y+                    ;(Mcy=154, Scy=2)
lpm    r19, Z ;get pixels 9L     ;(Mcy=155, Scy=3)
;lpm   r19, Z                    ;(Mcy=156, Scy=4)
;;lpm  r19, Z                    ;(Mcy=157, Scy=5)
swap   ZL                        ;(Mcy=158, Scy=6)
lpm    r20, Z ;get pixels 9R     ;(Mcy=159, Scy=7)
;lpm   r20, Z                    ;(Mcy=160, Scy=0) ;-------- tile 7R
;;lpm  r20, Z                    ;(Mcy=161, Scy=1)
out    IO_(PORTC), r16 ;out 7R   ;(Mcy=162, Scy=2)
in     ZH, IO_(GPIOR0)           ;(Mcy=163, Scy=3)
ld     ZL, X+ ;get index 10      ;(Mcy=164, Scy=4)
;ld    ZL, X+                    ;(Mcy=165, Scy=5)
elpm   ZL, Z ;get pattern 10     ;(Mcy=166, Scy=6)
;elpm  ZL, Z                     ;(Mcy=167, Scy=7)
;;elpm ZL, Z                     ;(Mcy=168, Scy=0) ;-------- tile 8L
out    IO_(PORTC), r17 ;out 8L   ;(Mcy=169, Scy=1)
ld     ZH, Y+ ;get color 10      ;(Mcy=170, Scy=2)
;ld    ZH, Y+                    ;(Mcy=171, Scy=3)
lpm    r16, Z ;get pixels 10L    ;(Mcy=172, Scy=4)
;lpm   r16, Z                    ;(Mcy=173, Scy=5)
;;lpm  r16, Z                    ;(Mcy=174, Scy=6)
swap   ZL                        ;(Mcy=175, Scy=7)
out    IO_(PORTC), r18 ;out 8R   ;(Mcy=176, Scy=0) ;-------- tile 8R
lpm    r17, Z ;get pixels 10R    ;(Mcy=177, Scy=1)
;lpm   r17, Z                    ;(Mcy=178, Scy=2)
;;lpm  r17, Z                    ;(Mcy=179, Scy=3)
in     ZH, IO_(GPIOR0)           ;(Mcy=180, Scy=4)
ld     ZL, X+ ;get index 11      ;(Mcy=181, Scy=5)
;ld    ZL, X+                    ;(Mcy=182, Scy=6)
elpm   ZL, Z ;get pattern 11     ;(Mcy=183, Scy=7)
;elpm  ZL, Z                     ;(Mcy=184, Scy=0) ;-------- tile 9L
;;elpm ZL, Z                     ;(Mcy=185, Scy=1)
out    IO_(PORTC), r19 ;out 9L   ;(Mcy=186, Scy=2)
ld     ZH, Y+ ;get color 11      ;(Mcy=187, Scy=3)
;ld    ZH, Y+                    ;(Mcy=188, Scy=4)
lpm    r18, Z ;get pixels 11L    ;(Mcy=189, Scy=5)
;lpm   r18, Z                    ;(Mcy=190, Scy=6)
;;lpm  r18, Z                    ;(Mcy=191, Scy=7)
out    IO_(PORTC), r20 ;out 9R   ;(Mcy=192, Scy=0) ;-------- tile 9R
swap   ZL                        ;(Mcy=193, Scy=1)
lpm    r19, Z ;get pixels 11R    ;(Mcy=194, Scy=2)
;lpm   r19, Z                    ;(Mcy=195, Scy=3)
;;lpm  r19, Z                    ;(Mcy=196, Scy=4)
in     ZH, IO_(GPIOR0)           ;(Mcy=197, Scy=5)
ld     ZL, X+ ;get index 12      ;(Mcy=198, Scy=6)
;ld    ZL, X+                    ;(Mcy=199, Scy=7)
out    IO_(PORTC), r16 ;out 10L  ;(Mcy=200, Scy=0) ;-------- tile 10L
elpm   ZL, Z ;get pattern 12     ;(Mcy=201, Scy=1)
;elpm  ZL, Z                     ;(Mcy=202, Scy=2)
;;elpm ZL, Z                     ;(Mcy=203, Scy=3)
ld     ZH, Y+ ;get color 12      ;(Mcy=204, Scy=4)
;ld    ZH, Y+                    ;(Mcy=205, Scy=5)
lpm    r20, Z ;get pixels 12L    ;(Mcy=206, Scy=6)
;lpm   r20, Z                    ;(Mcy=207, Scy=7)
;;lpm  r20, Z                    ;(Mcy=208, Scy=0) ;-------- tile 10R
out    IO_(PORTC), r17 ;out 10R  ;(Mcy=209, Scy=1)
swap   ZL                        ;(Mcy=210, Scy=2)
lpm    r16, Z ;get pixels 12R    ;(Mcy=211, Scy=3)
;lpm   r16, Z                    ;(Mcy=212, Scy=4)
;;lpm  r16, Z                    ;(Mcy=213, Scy=5)
in     ZH, IO_(GPIOR0)           ;(Mcy=214, Scy=6)
ld     ZL, X+ ;get index 13      ;(Mcy=215, Scy=7)
;ld    ZL, X+                    ;(Mcy=216, Scy=0) ;-------- tile 11L
out    IO_(PORTC), r18 ;out 11L  ;(Mcy=217, Scy=1)
elpm   ZL, Z ;get pattern 13     ;(Mcy=218, Scy=2)
;elpm  ZL, Z                     ;(Mcy=219, Scy=3)
;;elpm ZL, Z                     ;(Mcy=220, Scy=4)
ld     ZH, Y+ ;get color 13      ;(Mcy=221, Scy=5)
;ld    ZH, Y+                    ;(Mcy=222, Scy=6)
lpm    r17, Z ;get pixels 13L    ;(Mcy=223, Scy=7)
;lpm   r17, Z                    ;(Mcy=224, Scy=0) ;-------- tile 11R
;;lpm  r17, Z                    ;(Mcy=225, Scy=1)
out    IO_(PORTC), r19 ;out 11R  ;(Mcy=226, Scy=2)
swap   ZL                        ;(Mcy=227, Scy=3)
lpm    r18, Z ;get pixels 13R    ;(Mcy=228, Scy=4)
;lpm   r18, Z                    ;(Mcy=229, Scy=5)
;;lpm  r18, Z                    ;(Mcy=230, Scy=6)
in     ZH, IO_(GPIOR0)           ;(Mcy=231, Scy=7)
out    IO_(PORTC), r20 ;out 12L  ;(Mcy=232, Scy=0) ;-------- tile 12L
ld     ZL, X+ ;get index 14      ;(Mcy=233, Scy=1)
;ld    ZL, X+                    ;(Mcy=234, Scy=2)
elpm   ZL, Z ;get pattern 14     ;(Mcy=235, Scy=3)
;elpm  ZL, Z                     ;(Mcy=236, Scy=4)
;;elpm ZL, Z                     ;(Mcy=237, Scy=5)
ld     ZH, Y+ ;get color 14      ;(Mcy=238, Scy=6)
;ld    ZH, Y+                    ;(Mcy=239, Scy=7)
out    IO_(PORTC), r16 ;out 12R  ;(Mcy=240, Scy=0) ;-------- tile 12R
lpm    r19, Z ;get pixels 14L    ;(Mcy=241, Scy=1)
;lpm   r19, Z                    ;(Mcy=242, Scy=2)
;;lpm  r19, Z                    ;(Mcy=243, Scy=3)
swap   ZL                        ;(Mcy=244, Scy=4)
lpm    r20, Z ;get pixels 14R    ;(Mcy=245, Scy=5)
;lpm   r20, Z                    ;(Mcy=246, Scy=6)
;;lpm  r20, Z                    ;(Mcy=247, Scy=7)
out    IO_(PORTC), r17 ;out 13L  ;(Mcy=248, Scy=0) ;-------- tile 13L
in     ZH, IO_(GPIOR0)           ;(Mcy=249, Scy=1)
ld     ZL, X+ ;get index 15      ;(Mcy=250, Scy=2)
;ld    ZL, X+                    ;(Mcy=251, Scy=3)
elpm   ZL, Z ;get pattern 15     ;(Mcy=252, Scy=4)
;elpm  ZL, Z                     ;(Mcy=253, Scy=5)
;;elpm ZL, Z                     ;(Mcy=254, Scy=6)
ld     ZH, Y+ ;get color 15      ;(Mcy=255, Scy=7)
;ld    ZH, Y+                    ;(Mcy=256, Scy=0) ;-------- tile 13R
out    IO_(PORTC), r18 ;out 13R  ;(Mcy=257, Scy=1)
lpm    r16, Z ;get pixels 15L    ;(Mcy=258, Scy=2)
;lpm   r16, Z                    ;(Mcy=259, Scy=3)
;;lpm  r16, Z                    ;(Mcy=260, Scy=4)
swap   ZL                        ;(Mcy=261, Scy=5)
lpm    r17, Z ;get pixels 15R    ;(Mcy=262, Scy=6)
;lpm   r17, Z                    ;(Mcy=263, Scy=7)
;;lpm  r17, Z                    ;(Mcy=264, Scy=0) ;-------- tile 14L
out    IO_(PORTC), r19 ;out 14L  ;(Mcy=265, Scy=1)
in     ZH, IO_(GPIOR0)           ;(Mcy=266, Scy=2)
ld     ZL, X+ ;get index 16      ;(Mcy=267, Scy=3)
;ld    ZL, X+                    ;(Mcy=268, Scy=4)
elpm   ZL, Z ;get pattern 16     ;(Mcy=269, Scy=5)
;elpm  ZL, Z                     ;(Mcy=270, Scy=6)
;;elpm ZL, Z                     ;(Mcy=271, Scy=7)
out    IO_(PORTC), r20 ;out 14R  ;(Mcy=272, Scy=0) ;-------- tile 14R
ld     ZH, Y+ ;get color 16      ;(Mcy=273, Scy=1)
;ld    ZH, Y+                    ;(Mcy=274, Scy=2)
lpm    r18, Z ;get pixels 16L    ;(Mcy=275, Scy=3)
;lpm   r18, Z                    ;(Mcy=276, Scy=4)
;;lpm  r18, Z                    ;(Mcy=277, Scy=5)
swap   ZL                        ;(Mcy=278, Scy=6)
lpm    r19, Z ;get pixels 16R    ;(Mcy=279, Scy=7)
;lpm   r19, Z                    ;(Mcy=280, Scy=0) ;-------- tile 15L
;;lpm  r19, Z                    ;(Mcy=281, Scy=1)
out    IO_(PORTC), r16 ;out 15L  ;(Mcy=282, Scy=2)
in     ZH, IO_(GPIOR0)           ;(Mcy=283, Scy=3)
ld     ZL, X+ ;get index 17      ;(Mcy=284, Scy=4)
;ld    ZL, X+                    ;(Mcy=285, Scy=5)
elpm   ZL, Z ;get pattern 17     ;(Mcy=286, Scy=6)
;elpm  ZL, Z                     ;(Mcy=287, Scy=7)
;;elpm ZL, Z                     ;(Mcy=288, Scy=0) ;-------- tile 15R
out    IO_(PORTC), r17 ;out 15R  ;(Mcy=289, Scy=1)
ld     ZH, Y+ ;get color 17      ;(Mcy=290, Scy=2)
;ld    ZH, Y+                    ;(Mcy=291, Scy=3)
lpm    r20, Z ;get pixels 17L    ;(Mcy=292, Scy=4)
;lpm   r20, Z                    ;(Mcy=293, Scy=5)
;;lpm  r20, Z                    ;(Mcy=294, Scy=6)
swap   ZL                        ;(Mcy=295, Scy=7)
out    IO_(PORTC), r18 ;out 16L  ;(Mcy=296, Scy=0) ;-------- tile 16L
lpm    r16, Z ;get pixels 17R    ;(Mcy=297, Scy=1)
;lpm   r16, Z                    ;(Mcy=298, Scy=2)
;;lpm  r16, Z                    ;(Mcy=299, Scy=3)
in     ZH, IO_(GPIOR0)           ;(Mcy=300, Scy=4)
ld     ZL, X+ ;get index 18      ;(Mcy=301, Scy=5)
;ld    ZL, X+                    ;(Mcy=302, Scy=6)
elpm   ZL, Z ;get pattern 18     ;(Mcy=303, Scy=7)
;elpm  ZL, Z                     ;(Mcy=304, Scy=0) ;-------- tile 16R
;;elpm ZL, Z                     ;(Mcy=305, Scy=1)
out    IO_(PORTC), r19 ;out 16R  ;(Mcy=306, Scy=2)
ld     ZH, Y+ ;get color 18      ;(Mcy=307, Scy=3)
;ld    ZH, Y+                    ;(Mcy=308, Scy=4)
lpm    r17, Z ;get pixels 18L    ;(Mcy=309, Scy=5)
;lpm   r17, Z                    ;(Mcy=310, Scy=6)
;;lpm  r17, Z                    ;(Mcy=311, Scy=7)
out    IO_(PORTC), r20 ;out 17L  ;(Mcy=312, Scy=0) ;-------- tile 17L
swap   ZL                        ;(Mcy=313, Scy=1)
lpm    r18, Z ;get pixels 18R    ;(Mcy=314, Scy=2)
;lpm   r18, Z                    ;(Mcy=315, Scy=3)
;;lpm  r18, Z                    ;(Mcy=316, Scy=4)
in     ZH, IO_(GPIOR0)           ;(Mcy=317, Scy=5)
ld     ZL, X+ ;get index 19      ;(Mcy=318, Scy=6)
;ld    ZL, X+                    ;(Mcy=319, Scy=7)
out    IO_(PORTC), r16 ;out 17R  ;(Mcy=320, Scy=0) ;-------- tile 17R
elpm   ZL, Z ;get pattern 19     ;(Mcy=321, Scy=1)
;elpm  ZL, Z                     ;(Mcy=322, Scy=2)
;;elpm ZL, Z                     ;(Mcy=323, Scy=3)
ld     ZH, Y+ ;get color 19      ;(Mcy=324, Scy=4)
;ld    ZH, Y+                    ;(Mcy=325, Scy=5)
lpm    r19, Z ;get pixels 19L    ;(Mcy=326, Scy=6)
;lpm   r19, Z                    ;(Mcy=327, Scy=7)
;;lpm  r19, Z                    ;(Mcy=328, Scy=0) ;-------- tile 18L
out    IO_(PORTC), r17 ;out 18L  ;(Mcy=329, Scy=1)
swap   ZL                        ;(Mcy=330, Scy=2)
lpm    r20, Z ;get pixels 19R    ;(Mcy=331, Scy=3)
;lpm   r20, Z                    ;(Mcy=332, Scy=4)
;;lpm  r20, Z                    ;(Mcy=333, Scy=5)
in     ZH, IO_(GPIOR0)           ;(Mcy=334, Scy=6)
ld     ZL, X+ ;get index 20      ;(Mcy=335, Scy=7)
;ld    ZL, X+                    ;(Mcy=336, Scy=0) ;-------- tile 18R
out    IO_(PORTC), r18 ;out 18R  ;(Mcy=337, Scy=1)
elpm   ZL, Z ;get pattern 20     ;(Mcy=338, Scy=2)
;elpm  ZL, Z                     ;(Mcy=339, Scy=3)
;;elpm ZL, Z                     ;(Mcy=340, Scy=4)
ld     ZH, Y+ ;get color 20      ;(Mcy=341, Scy=5)
;ld    ZH, Y+                    ;(Mcy=342, Scy=6)
lpm    r16, Z ;get pixels 20L    ;(Mcy=343, Scy=7)
;lpm   r16, Z                    ;(Mcy=344, Scy=0) ;-------- tile 19L
;;lpm  r16, Z                    ;(Mcy=345, Scy=1)
out    IO_(PORTC), r19 ;out 19L  ;(Mcy=346, Scy=2)
swap   ZL                        ;(Mcy=347, Scy=3)
lpm    r17, Z ;get pixels 20R    ;(Mcy=348, Scy=4)
;lpm   r17, Z                    ;(Mcy=349, Scy=5)
;;lpm  r17, Z                    ;(Mcy=350, Scy=6)
in     ZH, IO_(GPIOR0)           ;(Mcy=351, Scy=7)
out    IO_(PORTC), r20 ;out 19R  ;(Mcy=352, Scy=0) ;-------- tile 19R
ld     ZL, X+ ;get index 21      ;(Mcy=353, Scy=1)
;ld    ZL, X+                    ;(Mcy=354, Scy=2)
elpm   ZL, Z ;get pattern 21     ;(Mcy=355, Scy=3)
;elpm  ZL, Z                     ;(Mcy=356, Scy=4)
;;elpm ZL, Z                     ;(Mcy=357, Scy=5)
ld     ZH, Y+ ;get color 21      ;(Mcy=358, Scy=6)
;ld    ZH, Y+                    ;(Mcy=359, Scy=7)
out    IO_(PORTC), r16 ;out 20L  ;(Mcy=360, Scy=0) ;-------- tile 20L
lpm    r18, Z ;get pixels 21L    ;(Mcy=361, Scy=1)
;lpm   r18, Z                    ;(Mcy=362, Scy=2)
;;lpm  r18, Z                    ;(Mcy=363, Scy=3)
swap   ZL                        ;(Mcy=364, Scy=4)
lpm    r19, Z ;get pixels 21R    ;(Mcy=365, Scy=5)
;lpm   r19, Z                    ;(Mcy=366, Scy=6)
;;lpm  r19, Z                    ;(Mcy=367, Scy=7)
out    IO_(PORTC), r17 ;out 20R  ;(Mcy=368, Scy=0) ;-------- tile 20R
in     ZH, IO_(GPIOR0)           ;(Mcy=369, Scy=1)
ld     ZL, X+ ;get index 22      ;(Mcy=370, Scy=2)
;ld    ZL, X+                    ;(Mcy=371, Scy=3)
elpm   ZL, Z ;get pattern 22     ;(Mcy=372, Scy=4)
;elpm  ZL, Z                     ;(Mcy=373, Scy=5)
;;elpm ZL, Z                     ;(Mcy=374, Scy=6)
ld     ZH, Y+ ;get color 22      ;(Mcy=375, Scy=7)
;ld    ZH, Y+                    ;(Mcy=376, Scy=0) ;-------- tile 21L
out    IO_(PORTC), r18 ;out 21L  ;(Mcy=377, Scy=1)
lpm    r20, Z ;get pixels 22L    ;(Mcy=378, Scy=2)
;lpm   r20, Z                    ;(Mcy=379, Scy=3)
;;lpm  r20, Z                    ;(Mcy=380, Scy=4)
swap   ZL                        ;(Mcy=381, Scy=5)
lpm    r16, Z ;get pixels 22R    ;(Mcy=382, Scy=6)
;lpm   r16, Z                    ;(Mcy=383, Scy=7)
;;lpm  r16, Z                    ;(Mcy=384, Scy=0) ;-------- tile 21R
out    IO_(PORTC), r19 ;out 21R  ;(Mcy=385, Scy=1)
in     ZH, IO_(GPIOR0)           ;(Mcy=386, Scy=2)
ld     ZL, X+ ;get index 23      ;(Mcy=387, Scy=3)
;ld    ZL, X+                    ;(Mcy=388, Scy=4)
elpm   ZL, Z ;get pattern 23     ;(Mcy=389, Scy=5)
;elpm  ZL, Z                     ;(Mcy=390, Scy=6)
;;elpm ZL, Z                     ;(Mcy=391, Scy=7)
out    IO_(PORTC), r20 ;out 22L  ;(Mcy=392, Scy=0) ;-------- tile 22L
ld     ZH, Y+ ;get color 23      ;(Mcy=393, Scy=1)
;ld    ZH, Y+                    ;(Mcy=394, Scy=2)
lpm    r17, Z ;get pixels 23L    ;(Mcy=395, Scy=3)
;lpm   r17, Z                    ;(Mcy=396, Scy=4)
;;lpm  r17, Z                    ;(Mcy=397, Scy=5)
swap   ZL                        ;(Mcy=398, Scy=6)
lpm    r18, Z ;get pixels 23R    ;(Mcy=399, Scy=7)
;lpm   r18, Z                    ;(Mcy=400, Scy=0) ;-------- tile 22R
;;lpm  r18, Z                    ;(Mcy=401, Scy=1)
out    IO_(PORTC), r16 ;out 22R  ;(Mcy=402, Scy=2)
in     ZH, IO_(GPIOR0)           ;(Mcy=403, Scy=3)
ld     ZL, X+ ;get index 24      ;(Mcy=404, Scy=4)
;ld    ZL, X+                    ;(Mcy=405, Scy=5)
elpm   ZL, Z ;get pattern 24     ;(Mcy=406, Scy=6)
;elpm  ZL, Z                     ;(Mcy=407, Scy=7)
;;elpm ZL, Z                     ;(Mcy=408, Scy=0) ;-------- tile 23L
out    IO_(PORTC), r17 ;out 23L  ;(Mcy=409, Scy=1)
ld     ZH, Y+ ;get color 24      ;(Mcy=410, Scy=2)
;ld    ZH, Y+                    ;(Mcy=411, Scy=3)
lpm    r19, Z ;get pixels 24L    ;(Mcy=412, Scy=4)
;lpm   r19, Z                    ;(Mcy=413, Scy=5)
;;lpm  r19, Z                    ;(Mcy=414, Scy=6)
swap   ZL                        ;(Mcy=415, Scy=7)
out    IO_(PORTC), r18 ;out 23R  ;(Mcy=416, Scy=0) ;-------- tile 23R
lpm    r20, Z ;get pixels 24R    ;(Mcy=417, Scy=1)
;lpm   r20, Z                    ;(Mcy=418, Scy=2)
;;lpm  r20, Z                    ;(Mcy=419, Scy=3)
in     ZH, IO_(GPIOR0)           ;(Mcy=420, Scy=4)
ld     ZL, X+ ;get index 25      ;(Mcy=421, Scy=5)
;ld    ZL, X+                    ;(Mcy=422, Scy=6)
elpm   ZL, Z ;get pattern 25     ;(Mcy=423, Scy=7)
;elpm  ZL, Z                     ;(Mcy=424, Scy=0) ;-------- tile 24L
;;elpm ZL, Z                     ;(Mcy=425, Scy=1)
out    IO_(PORTC), r19 ;out 24L  ;(Mcy=426, Scy=2)
ld     ZH, Y+ ;get color 25      ;(Mcy=427, Scy=3)
;ld    ZH, Y+                    ;(Mcy=428, Scy=4)
lpm    r16, Z ;get pixels 25L    ;(Mcy=429, Scy=5)
;lpm   r16, Z                    ;(Mcy=430, Scy=6)
;;lpm  r16, Z                    ;(Mcy=431, Scy=7)
out    IO_(PORTC), r20 ;out 24R  ;(Mcy=432, Scy=0) ;-------- tile 24R
swap   ZL                        ;(Mcy=433, Scy=1)
lpm    r17, Z ;get pixels 25R    ;(Mcy=434, Scy=2)
;lpm   r17, Z                    ;(Mcy=435, Scy=3)
;;lpm  r17, Z                    ;(Mcy=436, Scy=4)
in     ZH, IO_(GPIOR0)           ;(Mcy=437, Scy=5)
ld     ZL, X+ ;get index 26      ;(Mcy=438, Scy=6)
;ld    ZL, X+                    ;(Mcy=439, Scy=7)
out    IO_(PORTC), r16 ;out 25L  ;(Mcy=440, Scy=0) ;-------- tile 25L
elpm   ZL, Z ;get pattern 26     ;(Mcy=441, Scy=1)
;elpm  ZL, Z                     ;(Mcy=442, Scy=2)
;;elpm ZL, Z                     ;(Mcy=443, Scy=3)
ld     ZH, Y+ ;get color 26      ;(Mcy=444, Scy=4)
;ld    ZH, Y+                    ;(Mcy=445, Scy=5)
lpm    r18, Z ;get pixels 26L    ;(Mcy=446, Scy=6)
;lpm   r18, Z                    ;(Mcy=447, Scy=7)
;;lpm  r18, Z                    ;(Mcy=448, Scy=0) ;-------- tile 25R
out    IO_(PORTC), r17 ;out 25R  ;(Mcy=449, Scy=1)
swap   ZL                        ;(Mcy=450, Scy=2)
lpm    r19, Z ;get pixels 26R    ;(Mcy=451, Scy=3)
;lpm   r19, Z                    ;(Mcy=452, Scy=4)
;;lpm  r19, Z                    ;(Mcy=453, Scy=5)
in     ZH, IO_(GPIOR0)           ;(Mcy=454, Scy=6)
ld     ZL, X+ ;get index 27      ;(Mcy=455, Scy=7)
;ld    ZL, X+                    ;(Mcy=456, Scy=0) ;-------- tile 26L
out    IO_(PORTC), r18 ;out 26L  ;(Mcy=457, Scy=1)
elpm   ZL, Z ;get pattern 27     ;(Mcy=458, Scy=2)
;elpm  ZL, Z                     ;(Mcy=459, Scy=3)
;;elpm ZL, Z                     ;(Mcy=460, Scy=4)
ld     ZH, Y+ ;get color 27      ;(Mcy=461, Scy=5)
;ld    ZH, Y+                    ;(Mcy=462, Scy=6)
lpm    r20, Z ;get pixels 27L    ;(Mcy=463, Scy=7)
;lpm   r20, Z                    ;(Mcy=464, Scy=0) ;-------- tile 26R
;;lpm  r20, Z                    ;(Mcy=465, Scy=1)
out    IO_(PORTC), r19 ;out 26R  ;(Mcy=466, Scy=2)
swap   ZL                        ;(Mcy=467, Scy=3)
lpm    r16, Z ;get pixels 27R    ;(Mcy=468, Scy=4)
;lpm   r16, Z                    ;(Mcy=469, Scy=5)
;;lpm  r16, Z                    ;(Mcy=470, Scy=6)
in     ZH, IO_(GPIOR0)           ;(Mcy=471, Scy=7)
out    IO_(PORTC), r20 ;out 27L  ;(Mcy=472, Scy=0) ;-------- tile 27L
ld     ZL, X+ ;get index 28      ;(Mcy=473, Scy=1)
;ld    ZL, X+                    ;(Mcy=474, Scy=2)
elpm   ZL, Z ;get pattern 28     ;(Mcy=475, Scy=3)
;elpm  ZL, Z                     ;(Mcy=476, Scy=4)
;;elpm ZL, Z                     ;(Mcy=477, Scy=5)
ld     ZH, Y+ ;get color 28      ;(Mcy=478, Scy=6)
;ld    ZH, Y+                    ;(Mcy=479, Scy=7)
out    IO_(PORTC), r16 ;out 27R  ;(Mcy=480, Scy=0) ;-------- tile 27R
lpm    r17, Z ;get pixels 28L    ;(Mcy=481, Scy=1)
;lpm   r17, Z                    ;(Mcy=482, Scy=2)
;;lpm  r17, Z                    ;(Mcy=483, Scy=3)
swap   ZL                        ;(Mcy=484, Scy=4)
lpm    r18, Z ;get pixels 28R    ;(Mcy=485, Scy=5)
;lpm   r18, Z                    ;(Mcy=486, Scy=6)
;;lpm  r18, Z                    ;(Mcy=487, Scy=7)
out    IO_(PORTC), r17 ;out 28L  ;(Mcy=488, Scy=0) ;-------- tile 28L
in     ZH, IO_(GPIOR0)           ;(Mcy=489, Scy=1)
ld     ZL, X+ ;get index 29      ;(Mcy=490, Scy=2)
;ld    ZL, X+                    ;(Mcy=491, Scy=3)
elpm   ZL, Z ;get pattern 29     ;(Mcy=492, Scy=4)
;elpm  ZL, Z                     ;(Mcy=493, Scy=5)
;;elpm ZL, Z                     ;(Mcy=494, Scy=6)
ld     ZH, Y+ ;get color 29      ;(Mcy=495, Scy=7)
;ld    ZH, Y+                    ;(Mcy=496, Scy=0) ;-------- tile 28R
out    IO_(PORTC), r18 ;out 28R  ;(Mcy=497, Scy=1)
lpm    r19, Z ;get pixels 29L    ;(Mcy=498, Scy=2)
;lpm   r19, Z                    ;(Mcy=499, Scy=3)
;;lpm  r19, Z                    ;(Mcy=500, Scy=4)
swap   ZL                        ;(Mcy=501, Scy=5)
lpm    r20, Z ;get pixels 29R    ;(Mcy=502, Scy=6)
;lpm   r20, Z                    ;(Mcy=503, Scy=7)
;;lpm  r20, Z                    ;(Mcy=504, Scy=0) ;-------- tile 29L
out    IO_(PORTC), r19 ;out 29L  ;(Mcy=505, Scy=1)
in     ZH, IO_(GPIOR0)           ;(Mcy=506, Scy=2)
ld     ZL, X+ ;get index 30      ;(Mcy=507, Scy=3)
;ld    ZL, X+                    ;(Mcy=508, Scy=4)
elpm   ZL, Z ;get pattern 30     ;(Mcy=509, Scy=5)
;elpm  ZL, Z                     ;(Mcy=510, Scy=6)
;;elpm ZL, Z                     ;(Mcy=511, Scy=7)
out    IO_(PORTC), r20 ;out 29R  ;(Mcy=512, Scy=0) ;-------- tile 29R
ld     ZH, Y+ ;get color 30      ;(Mcy=513, Scy=1)
;ld    ZH, Y+                    ;(Mcy=514, Scy=2)
lpm    r16, Z ;get pixels 30L    ;(Mcy=515, Scy=3)
;lpm   r16, Z                    ;(Mcy=516, Scy=4)
;;lpm  r16, Z                    ;(Mcy=517, Scy=5)
swap   ZL                        ;(Mcy=518, Scy=6)
lpm    r17, Z ;get pixels 30R    ;(Mcy=519, Scy=7)
;lpm   r17, Z                    ;(Mcy=520, Scy=0) ;-------- tile 30L
;;lpm  r17, Z                    ;(Mcy=521, Scy=1)
out    IO_(PORTC), r16 ;out 30L  ;(Mcy=522, Scy=2)
in     ZH, IO_(GPIOR0)           ;(Mcy=523, Scy=3)
ld     ZL, X+ ;get index 31      ;(Mcy=524, Scy=4)
;ld    ZL, X+                    ;(Mcy=525, Scy=5)
elpm   ZL, Z ;get pattern 31     ;(Mcy=526, Scy=6)
;elpm  ZL, Z                     ;(Mcy=527, Scy=7)
;;elpm ZL, Z                     ;(Mcy=528, Scy=0) ;-------- tile 30R
out    IO_(PORTC), r17 ;out 30R  ;(Mcy=529, Scy=1)
ld     ZH, Y+ ;get color 31      ;(Mcy=530, Scy=2)
;ld    ZH, Y+                    ;(Mcy=531, Scy=3)
lpm    r18, Z ;get pixels 31L    ;(Mcy=532, Scy=4)
;lpm   r18, Z                    ;(Mcy=533, Scy=5)
;;lpm  r18, Z                    ;(Mcy=534, Scy=6)
swap   ZL                        ;(Mcy=535, Scy=7)
out    IO_(PORTC), r18 ;out 31L  ;(Mcy=536, Scy=0) ;-------- tile 31L
lpm    r19, Z ;get pixels 31R    ;(Mcy=537, Scy=1)
;lpm   r19, Z                    ;(Mcy=538, Scy=2)
;;lpm  r19, Z                    ;(Mcy=539, Scy=3)
in     ZH, IO_(GPIOR0)           ;(Mcy=540, Scy=4)
ld     ZL, X+ ;get index 32      ;(Mcy=541, Scy=5)
;ld    ZL, X+                    ;(Mcy=542, Scy=6)
elpm   ZL, Z ;get pattern 32     ;(Mcy=543, Scy=7)
;elpm  ZL, Z                     ;(Mcy=544, Scy=0) ;-------- tile 31R
;;elpm ZL, Z                     ;(Mcy=545, Scy=1)
out    IO_(PORTC), r19 ;out 31R  ;(Mcy=546, Scy=2)
ld     ZH, Y+ ;get color 32      ;(Mcy=547, Scy=3)
;ld    ZH, Y+                    ;(Mcy=548, Scy=4)
lpm    r20, Z ;get pixels 32L    ;(Mcy=549, Scy=5)
;lpm   r20, Z                    ;(Mcy=550, Scy=6)
;;lpm  r20, Z                    ;(Mcy=551, Scy=7)
out    IO_(PORTC), r20 ;out 32L  ;(Mcy=552, Scy=0) ;-------- tile 32L
swap   ZL                        ;(Mcy=553, Scy=1)
lpm    r16, Z ;get pixels 32R    ;(Mcy=554, Scy=2)
;lpm   r16, Z                    ;(Mcy=555, Scy=3)
;;lpm  r16, Z                    ;(Mcy=556, Scy=4)
in     ZH, IO_(GPIOR0)           ;(Mcy=557, Scy=5)
ld     ZL, X+ ;get index 33      ;(Mcy=558, Scy=6)
;ld    ZL, X+                    ;(Mcy=559, Scy=7)
out    IO_(PORTC), r16 ;out 32R  ;(Mcy=560, Scy=0) ;-------- tile 32R
elpm   ZL, Z ;get pattern 33     ;(Mcy=561, Scy=1)
;elpm  ZL, Z                     ;(Mcy=562, Scy=2)
;;elpm ZL, Z                     ;(Mcy=563, Scy=3)
ld     ZH, Y+ ;get color 33      ;(Mcy=564, Scy=4)
;ld    ZH, Y+                    ;(Mcy=565, Scy=5)
lpm    r17, Z ;get pixels 33L    ;(Mcy=566, Scy=6)
;lpm   r17, Z                    ;(Mcy=567, Scy=7)
;;lpm  r17, Z                    ;(Mcy=568, Scy=0) ;-------- tile 33L
out    IO_(PORTC), r17 ;out 33L  ;(Mcy=569, Scy=1)
swap   ZL                        ;(Mcy=570, Scy=2)
lpm    r18, Z ;get pixels 33R    ;(Mcy=571, Scy=3)
;lpm   r18, Z                    ;(Mcy=572, Scy=4)
;;lpm  r18, Z                    ;(Mcy=573, Scy=5)
in     ZH, IO_(GPIOR0)           ;(Mcy=574, Scy=6)
ld     ZL, X+ ;get index 34      ;(Mcy=575, Scy=7)
;ld    ZL, X+                    ;(Mcy=576, Scy=0) ;-------- tile 33R
out    IO_(PORTC), r18 ;out 33R  ;(Mcy=577, Scy=1)
elpm   ZL, Z ;get pattern 34     ;(Mcy=578, Scy=2)
;elpm  ZL, Z                     ;(Mcy=579, Scy=3)
;;elpm ZL, Z                     ;(Mcy=580, Scy=4)
ld     ZH, Y+ ;get color 34      ;(Mcy=581, Scy=5)
;ld    ZH, Y+                    ;(Mcy=582, Scy=6)
lpm    r19, Z ;get pixels 34L    ;(Mcy=583, Scy=7)
;lpm   r19, Z                    ;(Mcy=584, Scy=0) ;-------- tile 34L
;;lpm  r19, Z                    ;(Mcy=585, Scy=1)
out    IO_(PORTC), r19 ;out 34L  ;(Mcy=586, Scy=2)
swap   ZL                        ;(Mcy=587, Scy=3)
lpm    r20, Z ;get pixels 34R    ;(Mcy=588, Scy=4)
;lpm   r20, Z                    ;(Mcy=589, Scy=5)
;;lpm  r20, Z                    ;(Mcy=590, Scy=6)
in     ZH, IO_(GPIOR0)           ;(Mcy=591, Scy=7)
out    IO_(PORTC), r20 ;out 34R  ;(Mcy=592, Scy=0) ;-------- tile 34R
ld     ZL, X+ ;get index 35      ;(Mcy=593, Scy=1)
;ld    ZL, X+                    ;(Mcy=594, Scy=2)
elpm   ZL, Z ;get pattern 35     ;(Mcy=595, Scy=3)
;elpm  ZL, Z                     ;(Mcy=596, Scy=4)
;;elpm ZL, Z                     ;(Mcy=597, Scy=5)
ld     ZH, Y+ ;get color 35      ;(Mcy=598, Scy=6)
;ld    ZH, Y+                    ;(Mcy=599, Scy=7)
lpm    r16, Z ;get pixels 35L    ;(Mcy=600, Scy=0) ;-------- tile 35L
;lpm   r16, Z                    ;(Mcy=601, Scy=1)
;;lpm  r16, Z                    ;(Mcy=602, Scy=2)
out    IO_(PORTC), r16 ;out 35L  ;(Mcy=603, Scy=3)
swap   ZL                        ;(Mcy=604, Scy=4)
lpm    r17, Z ;get pixels 35R    ;(Mcy=605, Scy=5)
;lpm   r17, Z                    ;(Mcy=606, Scy=6)
;;lpm  r17, Z                    ;(Mcy=607, Scy=7)
out    IO_(PORTC), r17 ;out 35R  ;(Mcy=608, Scy=0) ;-------- tile 35R
in     ZH, IO_(GPIOR0)           ;(Mcy=609, Scy=1)
ld     ZL, X+ ;get index 36      ;(Mcy=610, Scy=2)
;ld    ZL, X+                    ;(Mcy=611, Scy=3)
elpm   ZL, Z ;get pattern 36     ;(Mcy=612, Scy=4)
;elpm  ZL, Z                     ;(Mcy=613, Scy=5)
;;elpm ZL, Z                     ;(Mcy=614, Scy=6)
ld     ZH, Y+ ;get color 36      ;(Mcy=615, Scy=7)
;ld    ZH, Y+                    ;(Mcy=616, Scy=0) ;-------- tile 36L
lpm    r18, Z ;get pixels 36L    ;(Mcy=617, Scy=1)
;lpm   r18, Z                    ;(Mcy=618, Scy=2)
;;lpm  r18, Z                    ;(Mcy=619, Scy=3)
out    IO_(PORTC), r18 ;out 36L  ;(Mcy=620, Scy=4)
swap   ZL                        ;(Mcy=621, Scy=5)
lpm    r19, Z ;get pixels 36R    ;(Mcy=622, Scy=6)
;lpm   r19, Z                    ;(Mcy=623, Scy=7)
;;lpm  r19, Z                    ;(Mcy=624, Scy=0) ;-------- tile 36R
out    IO_(PORTC), r19 ;out 36R  ;(Mcy=625, Scy=1)
in     ZH, IO_(GPIOR0)           ;(Mcy=626, Scy=2)
ld     ZL, X+ ;get index 37      ;(Mcy=627, Scy=3)
;ld    ZL, X+                    ;(Mcy=628, Scy=4)
elpm   ZL, Z ;get pattern 37     ;(Mcy=629, Scy=5)
;elpm  ZL, Z                     ;(Mcy=630, Scy=6)
;;elpm ZL, Z                     ;(Mcy=631, Scy=7)
ld     ZH, Y+ ;get color 37      ;(Mcy=632, Scy=0) ;-------- tile 37L
;ld    ZH, Y+                    ;(Mcy=633, Scy=1)
lpm    r20, Z ;get pixels 37L    ;(Mcy=634, Scy=2)
;lpm   r20, Z                    ;(Mcy=635, Scy=3)
;;lpm  r20, Z                    ;(Mcy=636, Scy=4)
out    IO_(PORTC), r20 ;out 37L  ;(Mcy=637, Scy=5)
swap   ZL                        ;(Mcy=638, Scy=6)
lpm    r16, Z ;get pixels 37R    ;(Mcy=639, Scy=7)
;lpm   r16, Z                    ;(Mcy=640, Scy=0) ;-------- tile 37R
;;lpm  r16, Z                    ;(Mcy=641, Scy=1)
out    IO_(PORTC), r16 ;out 37R  ;(Mcy=642, Scy=2)
in     ZH, IO_(GPIOR0)           ;(Mcy=643, Scy=3)
ld     ZL, X+ ;get index 38      ;(Mcy=644, Scy=4)
;ld    ZL, X+                    ;(Mcy=645, Scy=5)
elpm   ZL, Z ;get pattern 38     ;(Mcy=646, Scy=6)
;elpm  ZL, Z                     ;(Mcy=647, Scy=7)
;;elpm ZL, Z                     ;(Mcy=648, Scy=0) ;-------- tile 38L
ld     ZH, Y+ ;get color 38      ;(Mcy=649, Scy=1)
;ld    ZH, Y+                    ;(Mcy=650, Scy=2)
lpm    r17, Z ;get pixels 38L    ;(Mcy=651, Scy=3)
;lpm   r17, Z                    ;(Mcy=652, Scy=4)
;;lpm  r17, Z                    ;(Mcy=653, Scy=5)
out    IO_(PORTC), r17 ;out 38L  ;(Mcy=654, Scy=6)
swap   ZL                        ;(Mcy=655, Scy=7)
lpm    r18, Z ;get pixels 38R    ;(Mcy=656, Scy=0) ;-------- tile 38R
;lpm   r18, Z                    ;(Mcy=657, Scy=1)
;;lpm  r18, Z                    ;(Mcy=658, Scy=2)
out    IO_(PORTC), r18 ;out 38R  ;(Mcy=659, Scy=3)
in     ZH, IO_(GPIOR0)           ;(Mcy=660, Scy=4)
ld     ZL, X+ ;get index 39      ;(Mcy=661, Scy=5)
;ld    ZL, X+                    ;(Mcy=662, Scy=6)
elpm   ZL, Z ;get pattern 39     ;(Mcy=663, Scy=7)
;elpm  ZL, Z                     ;(Mcy=664, Scy=0) ;-------- tile 39L
;;elpm ZL, Z                     ;(Mcy=665, Scy=1)
ld     ZH, Y+ ;get color 39      ;(Mcy=666, Scy=2)
;ld    ZH, Y+                    ;(Mcy=667, Scy=3)
lpm    r19, Z ;get pixels 39L    ;(Mcy=668, Scy=4)
;lpm   r19, Z                    ;(Mcy=669, Scy=5)
;;lpm  r19, Z                    ;(Mcy=670, Scy=6)
out    IO_(PORTC), r19 ;out 39L  ;(Mcy=671, Scy=7)
swap   ZL                        ;(Mcy=672, Scy=0) ;-------- tile 39R
lpm    r20, Z ;get pixels 39R    ;(Mcy=673, Scy=1)
;lpm   r20, Z                    ;(Mcy=674, Scy=2)
;;lpm  r20, Z                    ;(Mcy=675, Scy=3)
out    IO_(PORTC), r20 ;out 39R  ;(Mcy=676, Scy=4)
