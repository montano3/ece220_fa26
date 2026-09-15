.ORIG x3000

LD R6, STACK_TOP        ; STACK_TOP points to x4000 at the beginning
; User Program

HALT



; PUSH subroutine
; IN: R0 (value)
; OUT: R5 (0 – success, 1 – fail)
; R3: STACK_END
; R6: STACK_TOP 
;
PUSH
;
; save registers that will be modified in PUSH subroutine
;
        ST R3, PUSH_SaveR3 ; save R3
        ST R6, PUSH_SaveR6 ; save R6
        AND R5, R5, #0 ; clear R5, indicates success
        LD R3, STACK_END
        LD R6, STACK_TOP
;
; check for overflow (when stack is full)
; STACK_TOP < STACK_END (STACK_TOP = STACK_END - 1)
        ADD R3, R3, #-1
        NOT R3, R3
        ADD R3, R3, #1
        ADD R3, R3, R6
        BRz OVERFLOW ; stack is full
;
; store value in the stack
;
        STR R0, R6, #0 ; push onto the stack
        ADD R6, R6, #-1 ; move top of the stack
        ST R6, STACK_TOP ; store top of stack pointer
        BRnzp DONE_PUSH
;
; indicate the overflow condition on return
;
OVERFLOW ADD R5, R5, #1
;
; restore modified registers and return
;
DONE_PUSH
        LD R3, PUSH_SaveR3
        LD R6, PUSH_SaveR6
        RET

; POP Subroutine
; OUT: R0 (value)
; OUT: R5 (0 – success, 1 – fail)
; R3: STACK_START
; R6: STACK_TOP
;
POP
;
; save registers that will be modified in POP subroutine
;
        ST R3, POP_SaveR3 ; save R3
        ST R6, POP_SaveR6 ; save R6
        AND R5, R5, #0 ; clear R5, indicates success
        LD R3, STACK_START
        LD R6, STACK_TOP
;
; check for underflow (when stack is empty)
; STACK_TOP = STACK_START
        NOT R3, R3
        ADD R3, R3, #1
        ADD R3, R3, R6
        BRz UNDERFLOW ; stack is empty, nothing to pop
;
; "remove" value from the stack
;
        ADD R6, R6, #1 ; move top of the stack
        LDR R0, R6, #0 ; read value from the stack
        ST R6, STACK_TOP ; store top of stack pointer
        BRnzp DONE_POP
;
; indicate the underflow condition on return
;
UNDERFLOW ADD R5, R5, #1
;
; restore modified registers and return
;
DONE_POP
        LD R3, POP_SaveR3
        LD R6, POP_SaveR6
        RET



PUSH_SaveR3 .BLKW #1
PUSH_SaveR6 .BLKW #1

POP_SaveR3 .BLKW #1
POP_SaveR6 .BLKW #1

STACK_START .FILL x4000
STACK_END   .FILL x3FF0
STACK_TOP   .FILL x4000

.END
