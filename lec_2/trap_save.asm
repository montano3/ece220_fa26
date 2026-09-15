.ORIG x3000

AND R0, R0, #0
ADD R0, R0, #3	;init R0 and set it to 3
ADD R7, R0, #4	;set R7 to 7

ST R0, SAVE_R0
ST R7, SAVE_R7

IN
	
LD R0, SAVE_R0
LD R7, SAVE_R7

ADD R0, R0, #1	;increment R0
ADD R7, R7, #1	;increment R7

HALT

SAVE_R0	.BLKW	#1
SAVE_R7	.BLKW	#1
.END
