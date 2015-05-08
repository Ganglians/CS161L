# Names: Shilpa Chirackel && Juan Chavez && Michael Villanueva
# CS161 Lab3
# Description: Converting 32-bit floating point to fixed and vise-versa (handles negatives and zero).


.text
.globl main

main:

	# setup
	
	subu    $sp, $sp, 32    # stack frame is 32 byte long
  	sw	$ra, 20($sp)    # save return address
        sw	$fp, 16($sp)    # save old frame pointer
        addiu   $fp, $sp, 28    # set up frame pointer
        
main_loop:

	# load message

	la    $a0, STRING_3   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall          		 	# outputs the string at $a0
	
	# read input
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	bnez $v0, float_to_fixed
	
fixed_to_float:	

	# message
	
	la    $a0, STRING_1   			# load a message output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall   				# outputs the string at $a0
	
	# receive integer
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall  				# reads an int into $v0
	
	move  $t0, $v0    			# moves integer to register $t0
	
	la    $a0, STRING_2   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall   				# outputs the string at $a0
	
	# read the integer
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	
	move  $t1, $v0    			# moves int to $t1
	
	# check if zero
	
	beqz  $t1, is_zero			# branch off if a zero integer was received	
	
	move  $t2, $t1
	bgez  $t1, positive_routine	
	not   $t2, $t1
	addi  $t2, $t2, 1
	
positive_routine:

	add   $t3, $zero, 31		        # exponent
	
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

float_to_fixed:

	la    $a0, STRING_1   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall           			# outputs the string at $a0
	
	li    $v0, 5      			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	move  $t0, $v0    			# moves integer to register $t0
	
	la    $a0, STRING_4   			# load a message to be output
	li    $v0, 4      			# syscall 4 (print_str)
	syscall          		 	# outputs the string at $a0
	
	li    $v0, 6     			# syscall 5 (read_int)
	syscall           			# reads an int into $v0
	
	mfc1  $t1, $f0    			# moves interget to $t1
	

	
	
	add   $t2, $zero, $t1		  # mantissa
	
	rol   $t3, $t2, 9	          # rotate left
	andi  $t3, $t3, 0x000000FF
	andi  $t2, $t2, 0x007FFFFF
	ori   $t2, $t2, 0x00800000
	subi  $t3, $t3, 127
	add   $t3, $t3, $t0
	not   $t3, $t3
	addi  $t3, $t3, 1
	addi  $t3, $t3, 23	          # fractional	
	
shift_loop:

	beqz  $t3, end_shift_loop         # branch if equals to zero (terminate loop)
	srl   $t2, $t2, 1
	subi  $t3, $t3, 1
	j shift_loop
	
end_shift_loop:

	bgez  $t1, positive_alt
	
	not $t2, $t2
	addi $t2, $t2, 1		
	
positive_alt:

	move  $a0, $t2
	li    $v0, 1
	syscall
	
	j main_loop

is_zero:

	la    $a0, STRING_5   			# load a message to be output
	li    $v0, 4  
	syscall 
	
	j main_loop
	
end:

.data

STRING_1:

   .asciiz "\nEnter the decimal's location to the left of the binary point (an integer): "

STRING_2:

   .asciiz "\nEnter a 32-bit Fixed Point number (an integer): "

STRING_3:

   .asciiz "\nChoose an operation (0 for fixed-to-float, 1 for float-to-fixed): "
   
STRING_4:

   .asciiz "\nEnter a Floating Point number: "
   
STRING_5:

   .asciiz "\n0 " 
  
