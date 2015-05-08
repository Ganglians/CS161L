.text

main_loop:
	la    $a0, STR3   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall          		 	# outputs the string at $a0
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	
	bnez $v0, float2fix
	
fix2float:	
	la    $a0, STR1   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall   					# outputs the string at $a0
	li    $v0, 5      			# syscall 5 (read_int)
	syscall  					# reads an int into $v0
	move  $t0, $v0    			# moves integer to register $t0
	
	la    $a0, STR2   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall   					# outputs the string at $a0
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	
	move  $t1, $v0    			# moves interget to $t1
	move  $t2, $t1
	bgez  $t1, positive_routine	
	not   $t2, $t1
	addi  $t2, $t2, 1
	
positive_routine:
	add   $t3, $zero, 31		# exponent
loop1:
	andi  $t7, $t2, 0x80000000
	beq   $t7, 0x80000000, end_loop1
	sll   $t2, $t2, 1
	subi  $t3, $t3, 1
	j loop1
	
end_loop1:
	andi  $t2, $t2, 0x7FFFFFFF
	srl   $t2, $t2, 8 
	
	sub   $t0, $t3, $t0
	add   $t0, $t0, 127
	sll   $t0, $t0, 23
	add   $t2, $t2, $t0
	andi  $t7, $t1, 0x80000000
	beq   $t7, $zero, positive
	
negative:
	ori   $t2, $t2, 0x80000000
	
positive:
    mtc1  $t2, $f12   # moves integer to floating point register
    li    $v0, 2      # syscall 2 (print_float)
    syscall           # outputs the float at $f12
    
    j main_loop

float2fix:
	la    $a0, STR1   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall           			# outputs the string at $a0
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	move  $t0, $v0    			# moves integer to register $t0
	
	la    $a0, STR4   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall          		 	# outputs the string at $a0
	
	li    $v0, 6     			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	
	mfc1  $t1, $f0    			# moves interget to $t1
	

	
	
	add   $t2, $zero, $t1		# mantissa
	
	rol   $t3, $t2, 9
	andi  $t3, $t3, 0x000000FF
	andi  $t2, $t2, 0x007FFFFF
	ori   $t2, $t2, 0x00800000
	subi  $t3, $t3, 127
	add   $t3, $t3, $t0
	not   $t3, $t3
	addi  $t3, $t3, 1
	addi  $t3, $t3, 23
shift_loop:
	beqz  $t3, end_shift_loop
	srl   $t2, $t2, 1
	subi  $t3, $t3, 1
	j shift_loop
end_shift_loop:

	bgez  $t1, positive_2
	
	not $t2, $t2
	addi $t2, $t2, 1
	
	
positive_2:
	move  $a0, $t2
	li    $v0, 1
	syscall
	
	j main_loop


end:

.data

STR1:
   .asciiz "\n\nEnter the location to the left of the binary point (interger on the range of ): "

STR2:
   .asciiz "\n\nEnter a 32-bit Fixed Point number (as an integer): "

STR3:
   .asciiz "\n\nDesired operation: 0 for Fixed to Float, 1 for Float to Fixed: "
   
STR4:
   .asciiz "\n\nEnter a Floating Point number: "
