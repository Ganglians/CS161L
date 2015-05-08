.text

main:
	la    $a0, STR1   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall           			# outputs the string at $a0
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	
	move  $t0, $v0    			# moves integer to register $t0
	
	la    $a0, STR2   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall          		 	# outputs the string at $a0
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	
	move  $t1, $v0    			# moves interget to $t1
	
	add   $t2, $zero, $t1		# mantissa
	add   $t3, $zero, 31
	
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

end:

.data

STR1:
   .asciiz "Enter the location to the left of the binary point (interger on the range of ): "

STR2:
   .asciiz "Enter a 32-bit Fixed Point number (as an integer): "
     