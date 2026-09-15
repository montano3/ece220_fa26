.ORIG x3000

AND R1, R1, #0
ADD R2, R1, #5	;set R2 = 5
ADD R1, R1, #7	;set R1 = 7
JSR SUBTR	;call SUBTR subroutine
ADD R0, R0, #1	;increment R0

HALT

;SUBTR subroutine computes difference of 2 numbers
;IN: R1, R2
;OUT: R0 <- R1 - R2
SUBTR ST R2, SUBTR_SAVE_R2 	;save R2 in memory
      NOT R2, R2
      ADD R2, R2, #1		;get -R2
      ADD R0, R1, R2		;compute R1-R2
      ST R7, SUBTR_SAVE_R7	;save R7 in memory
      JSR COPY			;call COPY subroutine
      LD R2, SUBTR_SAVE_R2	;restore R2
      LD R7, SUBTR_SAVE_R7	;restore R7
      RET

;COPY subroutine copies value in R0 to R3
COPY ADD R3, R0, #0
     RET

SUBTR_SAVE_R2 .BLKW #1	;memory for saving R2
SUBTR_SAVE_R7 .BLKW #1	;memory for saving R7
.END 
